#include <librdkafka/rdkafkacpp.h>
#include "rdkafkacpp_int.h"
#include "protobuf_general.pb.h"

using namespace RdKafka;

class ProtobufProducerInterface {
public:
    virtual ErrorCode produce_proto(Topic *topic,
                                    int32_t partition,
                                    int msgflags,
                                    google::protobuf::Message* msg,
                                    tutorial::proto_metadata* meta, 
                                    bool compressed,
                                    const std::string *key,
                                    void *msg_opaque);

    virtual ErrorCode produce_proto(const std::string topic_name,
                                    int32_t partition,
                                    int msgflags,
                                    google::protobuf::Message* msg,
                                    const void *key,
                                    size_t key_len,
                                    int64_t timestamp,
                                    void *msg_opaque);
};

class ProtobufProducer : public ProducerImpl, virtual ProtobufProducerInterface {
public:
    static ProtobufProducer* create (Conf *conf, std::string &errstr);
};

class ProtobufProducerImpl : public ProtobufProducer {
public:
    //~ProtobufProducer () { if (rk_) rd_kafka_destroy(rk_); };

    ErrorCode produce_proto(Topic *topic, int32_t partition, int msgflags, 
                            google::protobuf::Message* msg,
                            tutorial::proto_metadata* meta, bool compressed,
                            const std::string *key, void *msg_opaque);

    ErrorCode produce_proto (const std::string topic_name, int32_t partition,
                             int msgflags, google::protobuf::Message* msg,
                             const void *key, size_t key_len,
                             int64_t timestamp, void *msg_opaque);
};

class ProtobufConsumerInterface {
    google::protobuf::Message* consume_proto(Topic *topic, int32_t partition,
                                             int timeout_ms);
    google::protobuf::Message* consume_proto(Queue *queue, int timeout_ms);
};

class ProtobufConsumer : public KafkaConsumerImpl, virtual ProtobufConsumerInterface {
public:
    static ProtobufConsumer* create (Conf *conf, std::string &errstr);
};

class ProtobufConsumerImpl : public ProtobufConsumer {
public:
    google::protobuf::Message* consume(Topic *topic, int32_t partition,
                                             int timeout_ms);
    google::protobuf::Message* consume(Queue *queue, int timeout_ms);
};

class ProtobufMessageInterface {
    virtual google::protobuf::Message* proto_message();
};

class ProtobufMessage : public MessageImpl, virtual ProtobufMessageInterface {
};

/*
class ProtobufProducerWrapper : virtual Producer {
private:
    class Producer *producer;

public:
    ~ProtobufProducerWrapper () { delete producer; }
    ProtobufProducerWrapper();

    ErrorCode produce (Topic *topic, int32_t partition,
                       int msgflags,
                       void *payload, size_t len,
                       const std::string *key,
                       void *msg_opaque) {
        return producer->produce(topic, partition, msgflags, payload, len, key,
                                msg_opaque);
    }
  
    ErrorCode produce (Topic *topic, int32_t partition,
                       int msgflags,
                       void *payload, size_t len,
                       const void *key, size_t key_len,
                       void *msg_opaque) {
        return producer->produce(topic, partition, msgflags, payload, len, key,
                                key_len, msg_opaque);
    }
  
    ErrorCode produce (Topic *topic, int32_t partition,
                       const std::vector<char> *payload,
                       const std::vector<char> *key,
                       void *msg_opaque) {
        return producer->produce(topic, partition, payload, key, msg_opaque);
    }
  
    ErrorCode produce (const std::string topic_name, int32_t partition,
                       int msgflags,
                       void *payload, size_t len,
                       const void *key, size_t key_len,
                       int64_t timestamp, void *msg_opaque) {
        return producer->produce(topic_name, partition, msgflags, payload, len,
                                key, key_len, timestamp, msg_opaque);
    }
  
    ErrorCode produce (const std::string topic_name, int32_t partition,
                       int msgflags,
                       void *payload, size_t len,
                       const void *key, size_t key_len,
                       int64_t timestamp,
                       RdKafka::Headers *headers,
                       void *msg_opaque) {
        return producer->produce(topic_name, partition, msgflags, payload, len,
                                key, key_len, timestamp, headers, msg_opaque);
    }

    ErrorCode produce(Topic *topic, int32_t partition,
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
        producer->produce(topic, partition, msgflags, (void*)data.c_str(), data.size(),
                      key, msg_opaque);
    
        return ERR_NO_ERROR;
    }

  
    ErrorCode flush (int timeout_ms) {
  	  return producer->flush(timeout_ms);
    }
  
    ErrorCode purge (int purge_flags) {
  	  return producer->purge(purge_flags);
    }
  
    static Producer *create (Conf *conf, std::string &errstr) {
        ProtobufProducerWrapper wrapper = ProtobufProducerWrapper();
        wrapper.producer = RdKafka::Producer::create(conf, errorStr);
        return wrapper;
    }
};

*/

