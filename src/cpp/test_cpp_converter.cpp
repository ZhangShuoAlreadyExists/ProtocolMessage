
#include <iostream>
#include <unistd.h>
#include <librdkafka/rdkafkacpp.h>
#include <string.h>
#include "protobuf_general.pb.h"
#include "StartServiceRequest.pb.h"
#include "protobufKafka.h"
#include <pthread.h>

using namespace std;

#define TOPIC "joy"

struct produce_thread_data {
    RdKafka::Producer *producer;
    RdKafka::Topic *topic;
};

void* produce(void *data)
{
    tutorial::StartServiceRequest start_msg;
    tutorial::proto_metadata metadata;
    void *msg_bytes = NULL;
    int size, ret, i;

    RdKafka::Producer *producer = ((struct produce_thread_data*)data)->producer;
    RdKafka::Topic *topic = ((struct produce_thread_data*)data)->topic;


    i = 0;
    while (1) {
        start_msg.set_service_name("face_detection");
        start_msg.set_repo_url("nxp.com");
        start_msg.set_version("1.1");
        start_msg.set_id("abc12345");
        start_msg.set_sequence(i);
        metadata.set_checksum("checksum");

        ret = ProtobufToData(&msg_bytes, &size, &start_msg, &metadata, 0);
        if (ret) {
            std::cerr << "Fail to convert protobuf message." << std::endl;
            return NULL;
        }

        //cout << "====check to data====\n" << (char*)msg_bytes << "\n===========" << endl;
        RdKafka::ErrorCode resCode = producer->produce(topic, RdKafka::Topic::PARTITION_UA, \
                          RdKafka::Producer::RK_MSG_COPY, msg_bytes, size, NULL, NULL);
        if (resCode != RdKafka::ERR_NO_ERROR) {
            std::cerr << "Produce failed: " << RdKafka::err2str(resCode) << std::endl;
            return NULL;
        }
        i++;
        usleep(1000000);
    }
    return NULL;
}

void* consume(void *data)
{
    int ret, size;
    RdKafka::Message *kafka_msg = NULL;
    tutorial::proto_metadata *meta = NULL;
    tutorial::StartServiceRequest* recv_msg = new tutorial::StartServiceRequest();
    RdKafka::KafkaConsumer *consumer = (RdKafka::KafkaConsumer *)data;
    
    while (1) {
        kafka_msg = consumer->consume(1000000);
        //cout << kafka_msg->errstr();
        //cout << kafka_msg->status();
        size = static_cast<int>(kafka_msg->len());
        //cout << "Get message size " << size << endl;

        //cout << "=============\n" << static_cast<char*>(kafka_msg->payload()) << "\n=============\n";
        //tutorial::StartServiceRequest* recv_msg = NULL;
        ret = ProtobufFromData(kafka_msg->payload(), recv_msg, &meta);
        if (ret) {
            cout << "Fail to convert data to protobuf message.\n";
            return NULL;
        }
        cout << "Receive message id " << recv_msg->id() << " with sequence " << recv_msg->sequence() << endl;
    }

    delete kafka_msg;
    delete recv_msg;
    delete meta;

    return NULL;
}

    
    
int main(void)
{
    RdKafka::Conf *conf;
    RdKafka::Conf *tconf;
    RdKafka::Producer *producer;
    RdKafka::KafkaConsumer *consumer;
    RdKafka::Topic *topic;
    string errorStr;
    vector<string> topics;
    RdKafka::ErrorCode resCode;
    int  ret;
    
    conf = RdKafka::Conf::create(RdKafka::Conf::CONF_GLOBAL);
    conf->set("message.max.bytes", "104857600", errorStr);
    conf->set("replica.fetch.max.bytes", "104857600", errorStr);
    conf->set("batch.size", "10485760", errorStr);
    conf->set("send.buffer.bytes", "104857600", errorStr);
    conf->set("bootstrap.servers", "10.193.20.94", errorStr);

    tconf = RdKafka::Conf::create(RdKafka::Conf::CONF_TOPIC);
    if (!conf) {
        delete tconf;
        delete conf;
        std::cerr << "Creating RdKafka Conf failed." << std::endl;
    }
    producer = RdKafka::Producer::create(conf,errorStr);
    if (!producer) {
        delete producer;
        std::cerr << "Create Producer failed." << std::endl;
    }
    topic = RdKafka::Topic::create(producer, TOPIC, tconf, errorStr);
    if (!topic) {
        delete topic;
        std::cerr << "Create Topic failed." << std::endl;
    }

    conf->set("group.id", "abcdef", errorStr);
    consumer = RdKafka::KafkaConsumer::create(conf, errorStr);
    if (!consumer) {
        delete conf;
        std::cerr << "Failed to create consumer: " << errorStr << std::endl;
        return -3;
    }
    cout << "Created consumer " << consumer->name() << endl;

    topics.push_back(TOPIC);
    resCode = consumer->subscribe(topics);
    if (resCode) {
        std::cerr << "Failed to subscribe to " << topics.size() << " topics: "
            << RdKafka::err2str(resCode) << std::endl;
        return -4;
    }

    pthread_t thread_consumer;
    TopicPartition *partition = RdKafka::TopicPartition::create(TOPIC, 0, 0);
    consumer->seek(*partition, 0);
    ret = pthread_create(&thread_consumer, NULL, consume, (void*)consumer);
    if (ret) {
        cout << "Fail to start consumer thread.\n";
        return -5;
    }

    struct produce_thread_data producer_data;
    producer_data.producer = producer;
    producer_data.topic = topic;

    pthread_t thread_producer;
    ret = pthread_create(&thread_producer, NULL, produce, (void*)&producer_data);
    if (ret) {
        cout << "Fail to start producer thread.\n";
        return -6;
    }

    void *status;
    ret = pthread_join(thread_consumer, &status);
    if (ret)
        cout << "Unable to join consumer thread.\n";
    else
        cout << "Exit consumer thread with " << status << endl;

    ret = pthread_join(thread_producer, &status);
    if (ret)
        cout << "Unable to join producer thread.\n";
    else
        cout << "Exit producer thread with " << status << endl;

    delete producer;
    delete consumer;
    delete topic;
}

    



