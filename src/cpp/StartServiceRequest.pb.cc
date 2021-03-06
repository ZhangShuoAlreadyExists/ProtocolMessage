// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: StartServiceRequest.proto

#include "StartServiceRequest.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

namespace tutorial {
class StartServiceRequestDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<StartServiceRequest> _instance;
} _StartServiceRequest_default_instance_;
}  // namespace tutorial
static void InitDefaultsStartServiceRequest_StartServiceRequest_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tutorial::_StartServiceRequest_default_instance_;
    new (ptr) ::tutorial::StartServiceRequest();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tutorial::StartServiceRequest::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_StartServiceRequest_StartServiceRequest_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsStartServiceRequest_StartServiceRequest_2eproto}, {}};

void InitDefaults_StartServiceRequest_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_StartServiceRequest_StartServiceRequest_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_StartServiceRequest_2eproto[1];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_StartServiceRequest_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_StartServiceRequest_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_StartServiceRequest_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tutorial::StartServiceRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tutorial::StartServiceRequest, service_name_),
  PROTOBUF_FIELD_OFFSET(::tutorial::StartServiceRequest, repo_url_),
  PROTOBUF_FIELD_OFFSET(::tutorial::StartServiceRequest, version_),
  PROTOBUF_FIELD_OFFSET(::tutorial::StartServiceRequest, id_),
  PROTOBUF_FIELD_OFFSET(::tutorial::StartServiceRequest, sequence_),
  PROTOBUF_FIELD_OFFSET(::tutorial::StartServiceRequest, source_),
  PROTOBUF_FIELD_OFFSET(::tutorial::StartServiceRequest, target_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tutorial::StartServiceRequest)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tutorial::_StartServiceRequest_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_StartServiceRequest_2eproto = {
  {}, AddDescriptors_StartServiceRequest_2eproto, "StartServiceRequest.proto", schemas,
  file_default_instances, TableStruct_StartServiceRequest_2eproto::offsets,
  file_level_metadata_StartServiceRequest_2eproto, 1, file_level_enum_descriptors_StartServiceRequest_2eproto, file_level_service_descriptors_StartServiceRequest_2eproto,
};

const char descriptor_table_protodef_StartServiceRequest_2eproto[] =
  "\n\031StartServiceRequest.proto\022\010tutorial\"\214\001"
  "\n\023StartServiceRequest\022\024\n\014service_name\030\001 "
  "\001(\t\022\020\n\010repo_url\030\002 \001(\t\022\017\n\007version\030\003 \001(\t\022\n"
  "\n\002id\030\004 \001(\t\022\020\n\010sequence\030\005 \001(\005\022\016\n\006source\030\n"
  " \001(\t\022\016\n\006target\030\013 \001(\tb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_StartServiceRequest_2eproto = {
  false, InitDefaults_StartServiceRequest_2eproto, 
  descriptor_table_protodef_StartServiceRequest_2eproto,
  "StartServiceRequest.proto", &assign_descriptors_table_StartServiceRequest_2eproto, 188,
};

void AddDescriptors_StartServiceRequest_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_StartServiceRequest_2eproto, deps, 0);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_StartServiceRequest_2eproto = []() { AddDescriptors_StartServiceRequest_2eproto(); return true; }();
namespace tutorial {

// ===================================================================

void StartServiceRequest::InitAsDefaultInstance() {
}
class StartServiceRequest::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int StartServiceRequest::kServiceNameFieldNumber;
const int StartServiceRequest::kRepoUrlFieldNumber;
const int StartServiceRequest::kVersionFieldNumber;
const int StartServiceRequest::kIdFieldNumber;
const int StartServiceRequest::kSequenceFieldNumber;
const int StartServiceRequest::kSourceFieldNumber;
const int StartServiceRequest::kTargetFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

StartServiceRequest::StartServiceRequest()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.StartServiceRequest)
}
StartServiceRequest::StartServiceRequest(const StartServiceRequest& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  service_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.service_name().size() > 0) {
    service_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.service_name_);
  }
  repo_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.repo_url().size() > 0) {
    repo_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_url_);
  }
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.version().size() > 0) {
    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.id().size() > 0) {
    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  source_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.source().size() > 0) {
    source_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.source_);
  }
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.target().size() > 0) {
    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  sequence_ = from.sequence_;
  // @@protoc_insertion_point(copy_constructor:tutorial.StartServiceRequest)
}

void StartServiceRequest::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_StartServiceRequest_StartServiceRequest_2eproto.base);
  service_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_url_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sequence_ = 0;
}

StartServiceRequest::~StartServiceRequest() {
  // @@protoc_insertion_point(destructor:tutorial.StartServiceRequest)
  SharedDtor();
}

void StartServiceRequest::SharedDtor() {
  service_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_url_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void StartServiceRequest::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const StartServiceRequest& StartServiceRequest::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_StartServiceRequest_StartServiceRequest_2eproto.base);
  return *internal_default_instance();
}


void StartServiceRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:tutorial.StartServiceRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  service_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  repo_url_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  version_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  id_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  source_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  target_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  sequence_ = 0;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* StartServiceRequest::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<StartServiceRequest*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string service_name = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("tutorial.StartServiceRequest.service_name");
        object = msg->mutable_service_name();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string repo_url = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 18) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("tutorial.StartServiceRequest.repo_url");
        object = msg->mutable_repo_url();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string version = 3;
      case 3: {
        if (static_cast<::google::protobuf::uint8>(tag) != 26) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("tutorial.StartServiceRequest.version");
        object = msg->mutable_version();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string id = 4;
      case 4: {
        if (static_cast<::google::protobuf::uint8>(tag) != 34) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("tutorial.StartServiceRequest.id");
        object = msg->mutable_id();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // int32 sequence = 5;
      case 5: {
        if (static_cast<::google::protobuf::uint8>(tag) != 40) goto handle_unusual;
        msg->set_sequence(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // string source = 10;
      case 10: {
        if (static_cast<::google::protobuf::uint8>(tag) != 82) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("tutorial.StartServiceRequest.source");
        object = msg->mutable_source();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      // string target = 11;
      case 11: {
        if (static_cast<::google::protobuf::uint8>(tag) != 90) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("tutorial.StartServiceRequest.target");
        object = msg->mutable_target();
        if (size > end - ptr + ::google::protobuf::internal::ParseContext::kSlopBytes) {
          parser_till_end = ::google::protobuf::internal::GreedyStringParserUTF8;
          goto string_till_end;
        }
        GOOGLE_PROTOBUF_PARSER_ASSERT(::google::protobuf::internal::StringCheckUTF8(ptr, size, ctx));
        ::google::protobuf::internal::InlineGreedyStringParser(object, ptr, size, ctx);
        ptr += size;
        break;
      }
      default: {
      handle_unusual:
        if ((tag & 7) == 4 || tag == 0) {
          ctx->EndGroup(tag);
          return ptr;
        }
        auto res = UnknownFieldParse(tag, {_InternalParse, msg},
          ptr, end, msg->_internal_metadata_.mutable_unknown_fields(), ctx);
        ptr = res.first;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr != nullptr);
        if (res.second) return ptr;
      }
    }  // switch
  }  // while
  return ptr;
string_till_end:
  static_cast<::std::string*>(object)->clear();
  static_cast<::std::string*>(object)->reserve(size);
  goto len_delim_till_end;
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool StartServiceRequest::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.StartServiceRequest)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string service_name = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_service_name()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->service_name().data(), static_cast<int>(this->service_name().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.StartServiceRequest.service_name"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string repo_url = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (18 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_repo_url()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->repo_url().data(), static_cast<int>(this->repo_url().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.StartServiceRequest.repo_url"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string version = 3;
      case 3: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (26 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_version()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->version().data(), static_cast<int>(this->version().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.StartServiceRequest.version"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string id = 4;
      case 4: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (34 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_id()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->id().data(), static_cast<int>(this->id().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.StartServiceRequest.id"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // int32 sequence = 5;
      case 5: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (40 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &sequence_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string source = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (82 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_source()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->source().data(), static_cast<int>(this->source().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.StartServiceRequest.source"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // string target = 11;
      case 11: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (90 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_target()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->target().data(), static_cast<int>(this->target().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.StartServiceRequest.target"));
        } else {
          goto handle_unusual;
        }
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, _internal_metadata_.mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:tutorial.StartServiceRequest)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.StartServiceRequest)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void StartServiceRequest::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.StartServiceRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string service_name = 1;
  if (this->service_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->service_name().data(), static_cast<int>(this->service_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.service_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->service_name(), output);
  }

  // string repo_url = 2;
  if (this->repo_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_url().data(), static_cast<int>(this->repo_url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.repo_url");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->repo_url(), output);
  }

  // string version = 3;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.version");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      3, this->version(), output);
  }

  // string id = 4;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.id");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      4, this->id(), output);
  }

  // int32 sequence = 5;
  if (this->sequence() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(5, this->sequence(), output);
  }

  // string source = 10;
  if (this->source().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->source().data(), static_cast<int>(this->source().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.source");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      10, this->source(), output);
  }

  // string target = 11;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.target");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      11, this->target(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tutorial.StartServiceRequest)
}

::google::protobuf::uint8* StartServiceRequest::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.StartServiceRequest)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string service_name = 1;
  if (this->service_name().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->service_name().data(), static_cast<int>(this->service_name().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.service_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->service_name(), target);
  }

  // string repo_url = 2;
  if (this->repo_url().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->repo_url().data(), static_cast<int>(this->repo_url().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.repo_url");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->repo_url(), target);
  }

  // string version = 3;
  if (this->version().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->version().data(), static_cast<int>(this->version().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.version");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->version(), target);
  }

  // string id = 4;
  if (this->id().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->id().data(), static_cast<int>(this->id().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.id");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        4, this->id(), target);
  }

  // int32 sequence = 5;
  if (this->sequence() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(5, this->sequence(), target);
  }

  // string source = 10;
  if (this->source().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->source().data(), static_cast<int>(this->source().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.source");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        10, this->source(), target);
  }

  // string target = 11;
  if (this->target().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->target().data(), static_cast<int>(this->target().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.StartServiceRequest.target");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        11, this->target(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tutorial.StartServiceRequest)
  return target;
}

size_t StartServiceRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tutorial.StartServiceRequest)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string service_name = 1;
  if (this->service_name().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->service_name());
  }

  // string repo_url = 2;
  if (this->repo_url().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->repo_url());
  }

  // string version = 3;
  if (this->version().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->version());
  }

  // string id = 4;
  if (this->id().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->id());
  }

  // string source = 10;
  if (this->source().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->source());
  }

  // string target = 11;
  if (this->target().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->target());
  }

  // int32 sequence = 5;
  if (this->sequence() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::Int32Size(
        this->sequence());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void StartServiceRequest::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tutorial.StartServiceRequest)
  GOOGLE_DCHECK_NE(&from, this);
  const StartServiceRequest* source =
      ::google::protobuf::DynamicCastToGenerated<StartServiceRequest>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tutorial.StartServiceRequest)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tutorial.StartServiceRequest)
    MergeFrom(*source);
  }
}

void StartServiceRequest::MergeFrom(const StartServiceRequest& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tutorial.StartServiceRequest)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.service_name().size() > 0) {

    service_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.service_name_);
  }
  if (from.repo_url().size() > 0) {

    repo_url_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.repo_url_);
  }
  if (from.version().size() > 0) {

    version_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.version_);
  }
  if (from.id().size() > 0) {

    id_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.id_);
  }
  if (from.source().size() > 0) {

    source_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.source_);
  }
  if (from.target().size() > 0) {

    target_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.target_);
  }
  if (from.sequence() != 0) {
    set_sequence(from.sequence());
  }
}

void StartServiceRequest::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tutorial.StartServiceRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void StartServiceRequest::CopyFrom(const StartServiceRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tutorial.StartServiceRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool StartServiceRequest::IsInitialized() const {
  return true;
}

void StartServiceRequest::Swap(StartServiceRequest* other) {
  if (other == this) return;
  InternalSwap(other);
}
void StartServiceRequest::InternalSwap(StartServiceRequest* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  service_name_.Swap(&other->service_name_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  repo_url_.Swap(&other->repo_url_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  version_.Swap(&other->version_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  id_.Swap(&other->id_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  source_.Swap(&other->source_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  target_.Swap(&other->target_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
  swap(sequence_, other->sequence_);
}

::google::protobuf::Metadata StartServiceRequest::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_StartServiceRequest_2eproto);
  return ::file_level_metadata_StartServiceRequest_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tutorial
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::tutorial::StartServiceRequest* Arena::CreateMaybeMessage< ::tutorial::StartServiceRequest >(Arena* arena) {
  return Arena::CreateInternal< ::tutorial::StartServiceRequest >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
