#include "protobufKafka.h"
#include "protobuf_general.pb.h"
#include "StartServiceRequest.pb.h"

using namespace RdKafka;
using namespace std;

int ProtobufToData(void **data, int *size, google::protobuf::Message* msg,
                   tutorial::proto_metadata* meta, bool compressed) {
    tutorial::proto_general proto;
    std::string *str_msg = new std::string();

    tutorial::proto_metadata* proto_meta = proto.mutable_meta();
    proto_meta->CopyFrom(*meta);
    proto.set_compressed(compressed);
    google::protobuf::Any* anymsg = proto.mutable_msg();
    anymsg->PackFrom(*msg);
    proto.SerializeToString(str_msg);
    *data = (void*)str_msg->c_str();
    *size = str_msg->size();

    return 0;
}

void free_data(void **data) {
    std::string *p = static_cast<std::string*>(*data);
    delete p;
    *data = NULL;
}

int ProtobufFromData(void *data, google::protobuf::Message* msg,
                     tutorial::proto_metadata** metadata) {
    tutorial::proto_general proto;
    google::protobuf::Any *any;
    std::string str_msg(static_cast<char*>(data));
    bool ret;

    if (!proto.ParseFromString(str_msg))
        return -1;
    *metadata = proto.mutable_meta();
    any = proto.mutable_msg();
    ret = any->UnpackTo(msg);

    return 0;
}


ErrorCode ProtobufProducerImpl::produce_proto(Topic *topic, int32_t partition,
                   int msgflags, google::protobuf::Message* msg,
                   tutorial::proto_metadata* meta, bool compressed,
                   const std::string *key, void *msg_opaque) {
    tutorial::proto_general proto;
    std::string data;

    tutorial::proto_metadata* proto_meta = proto.mutable_meta();
    proto_meta->CopyFrom(*meta);
    proto.set_compressed(compressed);
    google::protobuf::Any* anymsg = proto.mutable_msg();
    anymsg->PackFrom(*msg);

    proto.SerializeToString(&data);
    produce(topic, partition, msgflags, (void*)data.c_str(), data.size(),
                  key, msg_opaque);
    
    return ERR_NO_ERROR;
}


ErrorCode ProtobufProducerImpl::produce_proto(const std::string topic_name,
                                              int32_t partition, int msgflags,
                                              google::protobuf::Message* msg,
                                              tutorial::proto_metadata* meta,
                                              bool compressed, const void *key,
                                              size_t key_len, int64_t timestamp,
                                              void *msg_opaque) {
    return ERR_NO_ERROR;
}

ProtobufProducer *ProtobufProducer::create(RdKafka::Conf *conf,
                                            std::string &errstr) {
/*
    Producer* producer = create(conf, errstr);
    ProducerImpl * producer_impl = static_cast<ProducerImpl*>(producer);
    ProtobufProducer* proto_producer = static_cast<ProtobufProducer*>(producer_impl);
    return proto_producer;
*/
    char errbuf[512];
    RdKafka::ConfImpl *confimpl = dynamic_cast<RdKafka::ConfImpl *>(conf);
    ProtobufProducerImpl *rkp = new ProtobufProducerImpl();
    rd_kafka_conf_t *rk_conf = NULL;

    if (confimpl) {
        if (!confimpl->rk_conf_) {
            errstr = "Requires RdKafka::Conf::CONF_GLOBAL object";
            delete rkp;
            return NULL;
        }

        rkp->set_common_config(confimpl);

        rk_conf = rd_kafka_conf_dup(confimpl->rk_conf_);

        if (confimpl->dr_cb_) {
            rd_kafka_conf_set_dr_msg_cb(rk_conf, dr_msg_cb_trampoline);
            rkp->dr_cb_ = confimpl->dr_cb_;
        }
    }

    rd_kafka_t *rk;
    if (!(rk = rd_kafka_new(RD_KAFKA_PRODUCER, rk_conf,
                          errbuf, sizeof(errbuf)))) {
        errstr = errbuf;
        delete rkp;
        return NULL;
    }

    rkp->rk_ = rk;
    return rkp;
}


ProtobufConsumer* ProtobufConsumer::create(Conf *conf, std::string &errstr) {
    char errbuf[512];

    RdKafka::ConfImpl *confimpl = dynamic_cast<RdKafka::ConfImpl *>(conf);
    ProtobufConsumerImpl *rkc = new ProtobufConsumerImpl();
    rd_kafka_conf_t *rk_conf = NULL;
    size_t grlen;
  
    if (!confimpl->rk_conf_) {
      errstr = "Requires RdKafka::Conf::CONF_GLOBAL object";
      delete rkc;
      return NULL;
    }
  
    if (rd_kafka_conf_get(confimpl->rk_conf_, "group.id",
                          NULL, &grlen) != RD_KAFKA_CONF_OK ||
        grlen <= 1 /* terminating null only */) {
      errstr = "\"group.id\" must be configured";
      delete rkc;
      return NULL;
    }
  
    rkc->set_common_config(confimpl);
  
    rk_conf = rd_kafka_conf_dup(confimpl->rk_conf_);
  
    rd_kafka_t *rk;
    if (!(rk = rd_kafka_new(RD_KAFKA_CONSUMER, rk_conf,
                            errbuf, sizeof(errbuf)))) {
      errstr = errbuf;
      delete rkc;
      return NULL;
    }
  
    rkc->rk_ = rk;
  
    /* Redirect handle queue to cgrp's queue to provide a single queue point */
    rd_kafka_poll_set_consumer(rk);
  
    return rkc;
};

bool ProtobufConsumerImpl::consume_proto(Topic *topic, int32_t partition,
                                         int timeout_ms,
                                         google::protobuf::Message** msg,
                                         tutorial::proto_metadata** metadata) {
    tutorial::proto_general proto;
    google::protobuf::Any* any;
    std::string *data;

    RdKafka::Message *kafka_msg = consume(timeout_ms);
    data = static_cast<std::string*>(kafka_msg->payload());
    if (!proto.ParseFromString(*data))
        return NULL;
    *metadata = proto.mutable_meta();
    any = proto.mutable_msg();
    any->UnpackTo(*msg);

    return 0;
}

//google::protobuf::Message* ProtobufConsumerImpl::consume_proto(Queue *queue, int timeout_ms);


 
