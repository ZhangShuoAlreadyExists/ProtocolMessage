from src.libproto.protobuf_general_pb2 import *
from google.protobuf import message as message
import zlib

def encode_message(msg, metadata, compress):
    outer = proto_general(meta = metadata)
    outer.msg.type_url = "/" + msg.DESCRIPTOR.full_name
    if compress:
        outer.msg.value = zlib.compress(msg.SerializeToString(), -1)
        outer.compressed = True
    else:
        outer.msg.value = msg.SerializeToString()
        outer.compressed = False
    return outer.SerializeToString()

def decode_message(msg_bytes):
    outer = proto_general()
    outer.ParseFromString(msg_bytes)

    # Not sure if parser will raise exception. This if may not work
    if not isinstance(outer, message.Message):
        return msg_bytes

    #print outer.msg.type_url
    # only keep message type, trim others
    inner_type = outer.msg.type_url.split('/')[-1].split('.')[-1]
    mod = __import__('src.libproto.%s_pb2' % inner_type, fromlist=True)
    msg = getattr(mod, inner_type)()
    if outer.compressed:
        msg.ParseFromString(zlib.decompress(outer.msg.value))
    else:
        msg.ParseFromString(outer.msg.value)
    return [msg, outer.meta]

