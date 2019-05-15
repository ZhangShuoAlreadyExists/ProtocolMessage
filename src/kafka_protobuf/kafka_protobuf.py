from kafka import KafkaConsumer, KafkaProducer
from google.protobuf import message as message
import zlib
from protobuf_transform import *
from kafka.consumer.fetcher import ConsumerRecord
import collections

#ConsumerRecordFields = ["topic", "partition", "offset", "timestamp", 
#    "timestamp_type", "key", "value", "checksum", "serialized_key_size", 
#    "serialized_value_size"]

ConsumerRecordProto = collections.namedtuple("ConsumerRecordProto", 
    list(ConsumerRecord._fields) + ['proto', 'metadata'])


class KafkaProtobufProducer(KafkaProducer):
    def __init__(self, **kwargs):
        super(KafkaProtobufProducer, self).__init__(**kwargs)

    def send_proto(self, topic, proto=None, key=None, partition=None, timestamp_ms=None, compress=False, metadata=None):
        # Directly send data if it's not protobuf type object
        if not isinstance(proto, message.Message):
            return self.send(topic = topic, value = proto, key = key, \
                             partition = partition, timestamp_ms = timestamp_ms)

        msg_bytes = encode_message(proto, metadata, compress)
        return self.send(topic = topic, value = msg_bytes, key = key, \
                         partition = partition, timestamp_ms = timestamp_ms)
    

class KafkaProtobufConsumer(KafkaConsumer):
    def __next__(self):
        record = super(KafkaProtobufConsumer, self).__next__()
        try:
            data = decode_message(record.value)
        except Exception, e:
            print "fail to decode."
            print e
        record_dict = dict(record.__dict__)
        record_dict['proto'] = data[0]
        record_dict['metadata'] = data[1]
        proto_recoder = ConsumerRecordProto(**record_dict)
        return proto_recoder

