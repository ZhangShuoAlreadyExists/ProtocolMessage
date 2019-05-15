from src.libproto.protobuf_general_pb2 import *
from google.protobuf import message as message

def encode_message(msg, metadata, compress):
    outer = proto_general(meta = metadata)
    outer.msg.type_url = msg.__class__.__name__
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

    inner_type = outer.msg.type_url
    mod = __import__('src.libproto.%s_pb2' % inner_type, fromlist=True)
    msg = getattr(mod, inner_type)()
    if outer.compressed:
        msg.ParseFromString(zlib.decompress(outer.msg.value))
    else:
        msg.ParseFromString(outer.msg.value)
    return [msg, outer.meta]

