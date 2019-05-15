from kafka import KafkaConsumer, KafkaProducer, TopicPartition
from src.kafka_protobuf.kafka_protobuf import *
import docker
import threading
import signal
import time
from src.libproto.StartServiceRequest_pb2 import *

done = False

'''
def produce_image(p, topic):
    global done

    while not done:
        msg = StartServiceRequest()
        msg.service_name = 'consul'
        msg.repo_url = 'github/consul'
        msg.version = 'latest'
        outer = encode_message('sender1', 'receiver1', msg)

        p.send(topic, key='msg', value=outer.SerializeToString())
        time.sleep(1)
    print "produce quit"

def consume_image(c):
    global done

    while not done:
        try:
            msg_bytes = next(c)
        except:
            print "no data"
            continue
        msg = Verge9Message()
        msg.ParseFromString(msg_bytes.value)
        inner = decode_message(msg)
        print "receive message from %s, to %s, seq %d." % (msg.sender, msg.receiver, msg.seq)
        print inner.__class__.__name__
    return
'''

def produce_image(p, topic):
    global done

    i = 0
    while not done:
        msg = StartServiceRequest()
        msg.service_name = 'consul'
        msg.repo_url = 'github/consul'
        msg.version = 'latest'
        msg.sequence = i

        p.send_proto(topic, key='msg', proto=msg)
        time.sleep(1)
        i += 1
    print "produce quit"


def consume_image(c):
    global done

    while not done:
        try:
            msg = next(c)
        except Exception, e:
            print "get error."
            print e
            continue
        print "receive message %s, sequence %d." % (msg.proto.__class__.__name__, msg.proto.sequence)
    return

def sig_exit(signum, frame):
    global done

    if done:
        return
    print "Received Ctrl+C. Waiting threads complete to quit..."
    done = True


def main():
    ip = "10.193.20.94"
    port = 9092
    topic = 'shuo_test'

    #p = KafkaProducer(bootstrap_servers='%s:9092' % ip)
    #c = KafkaConsumer(bootstrap_servers='%s:%d' % (ip, port), consumer_timeout_ms=2000)
    p = KafkaProtobufProducer(bootstrap_servers='%s:9092' % ip)
    c = KafkaProtobufConsumer(bootstrap_servers='%s:%d' % (ip, port), consumer_timeout_ms=2000)
    c.assign([TopicPartition(topic, 0)])
    #p = None
    #c = None

    c_thread = threading.Thread(name="consumer", target=consume_image, args=(c, ))
    c_thread.start()
    p_thread = threading.Thread(name="producer", target=produce_image, args=(p, topic))
    p_thread.start()

    print "Press Ctrl+C to quit..."
    signal.signal(signal.SIGINT, sig_exit)
    signal.signal(signal.SIGTERM, sig_exit)
    while p_thread.isAlive() or c_thread.isAlive():
        time.sleep(1)
    print "quit..."


if __name__ == '__main__':
    main()
            
