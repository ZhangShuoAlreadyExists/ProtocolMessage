// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protobuf_general.proto

#include "protobuf_general.pb.h"

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

extern PROTOBUF_INTERNAL_EXPORT_google_2fprotobuf_2fany_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_Any_google_2fprotobuf_2fany_2eproto;
extern PROTOBUF_INTERNAL_EXPORT_protobuf_5fgeneral_2eproto ::google::protobuf::internal::SCCInfo<0> scc_info_proto_metadata_protobuf_5fgeneral_2eproto;
namespace tutorial {
class proto_metadataDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<proto_metadata> _instance;
} _proto_metadata_default_instance_;
class proto_generalDefaultTypeInternal {
 public:
  ::google::protobuf::internal::ExplicitlyConstructed<proto_general> _instance;
} _proto_general_default_instance_;
}  // namespace tutorial
static void InitDefaultsproto_metadata_protobuf_5fgeneral_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tutorial::_proto_metadata_default_instance_;
    new (ptr) ::tutorial::proto_metadata();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tutorial::proto_metadata::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<0> scc_info_proto_metadata_protobuf_5fgeneral_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 0, InitDefaultsproto_metadata_protobuf_5fgeneral_2eproto}, {}};

static void InitDefaultsproto_general_protobuf_5fgeneral_2eproto() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  {
    void* ptr = &::tutorial::_proto_general_default_instance_;
    new (ptr) ::tutorial::proto_general();
    ::google::protobuf::internal::OnShutdownDestroyMessage(ptr);
  }
  ::tutorial::proto_general::InitAsDefaultInstance();
}

::google::protobuf::internal::SCCInfo<2> scc_info_proto_general_protobuf_5fgeneral_2eproto =
    {{ATOMIC_VAR_INIT(::google::protobuf::internal::SCCInfoBase::kUninitialized), 2, InitDefaultsproto_general_protobuf_5fgeneral_2eproto}, {
      &scc_info_proto_metadata_protobuf_5fgeneral_2eproto.base,
      &scc_info_Any_google_2fprotobuf_2fany_2eproto.base,}};

void InitDefaults_protobuf_5fgeneral_2eproto() {
  ::google::protobuf::internal::InitSCC(&scc_info_proto_metadata_protobuf_5fgeneral_2eproto.base);
  ::google::protobuf::internal::InitSCC(&scc_info_proto_general_protobuf_5fgeneral_2eproto.base);
}

::google::protobuf::Metadata file_level_metadata_protobuf_5fgeneral_2eproto[2];
constexpr ::google::protobuf::EnumDescriptor const** file_level_enum_descriptors_protobuf_5fgeneral_2eproto = nullptr;
constexpr ::google::protobuf::ServiceDescriptor const** file_level_service_descriptors_protobuf_5fgeneral_2eproto = nullptr;

const ::google::protobuf::uint32 TableStruct_protobuf_5fgeneral_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tutorial::proto_metadata, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tutorial::proto_metadata, checksum_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::tutorial::proto_general, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  PROTOBUF_FIELD_OFFSET(::tutorial::proto_general, meta_),
  PROTOBUF_FIELD_OFFSET(::tutorial::proto_general, compressed_),
  PROTOBUF_FIELD_OFFSET(::tutorial::proto_general, msg_),
};
static const ::google::protobuf::internal::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, sizeof(::tutorial::proto_metadata)},
  { 6, -1, sizeof(::tutorial::proto_general)},
};

static ::google::protobuf::Message const * const file_default_instances[] = {
  reinterpret_cast<const ::google::protobuf::Message*>(&::tutorial::_proto_metadata_default_instance_),
  reinterpret_cast<const ::google::protobuf::Message*>(&::tutorial::_proto_general_default_instance_),
};

::google::protobuf::internal::AssignDescriptorsTable assign_descriptors_table_protobuf_5fgeneral_2eproto = {
  {}, AddDescriptors_protobuf_5fgeneral_2eproto, "protobuf_general.proto", schemas,
  file_default_instances, TableStruct_protobuf_5fgeneral_2eproto::offsets,
  file_level_metadata_protobuf_5fgeneral_2eproto, 2, file_level_enum_descriptors_protobuf_5fgeneral_2eproto, file_level_service_descriptors_protobuf_5fgeneral_2eproto,
};

const char descriptor_table_protodef_protobuf_5fgeneral_2eproto[] =
  "\n\026protobuf_general.proto\022\010tutorial\032\031goog"
  "le/protobuf/any.proto\"\"\n\016proto_metadata\022"
  "\020\n\010checksum\030\001 \001(\t\"n\n\rproto_general\022&\n\004me"
  "ta\030\001 \001(\0132\030.tutorial.proto_metadata\022\022\n\nco"
  "mpressed\030\002 \001(\010\022!\n\003msg\030\n \001(\0132\024.google.pro"
  "tobuf.Anyb\006proto3"
  ;
::google::protobuf::internal::DescriptorTable descriptor_table_protobuf_5fgeneral_2eproto = {
  false, InitDefaults_protobuf_5fgeneral_2eproto, 
  descriptor_table_protodef_protobuf_5fgeneral_2eproto,
  "protobuf_general.proto", &assign_descriptors_table_protobuf_5fgeneral_2eproto, 217,
};

void AddDescriptors_protobuf_5fgeneral_2eproto() {
  static constexpr ::google::protobuf::internal::InitFunc deps[1] =
  {
    ::AddDescriptors_google_2fprotobuf_2fany_2eproto,
  };
 ::google::protobuf::internal::AddDescriptors(&descriptor_table_protobuf_5fgeneral_2eproto, deps, 1);
}

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_protobuf_5fgeneral_2eproto = []() { AddDescriptors_protobuf_5fgeneral_2eproto(); return true; }();
namespace tutorial {

// ===================================================================

void proto_metadata::InitAsDefaultInstance() {
}
class proto_metadata::HasBitSetters {
 public:
};

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int proto_metadata::kChecksumFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

proto_metadata::proto_metadata()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.proto_metadata)
}
proto_metadata::proto_metadata(const proto_metadata& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  checksum_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (from.checksum().size() > 0) {
    checksum_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.checksum_);
  }
  // @@protoc_insertion_point(copy_constructor:tutorial.proto_metadata)
}

void proto_metadata::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_proto_metadata_protobuf_5fgeneral_2eproto.base);
  checksum_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

proto_metadata::~proto_metadata() {
  // @@protoc_insertion_point(destructor:tutorial.proto_metadata)
  SharedDtor();
}

void proto_metadata::SharedDtor() {
  checksum_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}

void proto_metadata::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const proto_metadata& proto_metadata::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_proto_metadata_protobuf_5fgeneral_2eproto.base);
  return *internal_default_instance();
}


void proto_metadata::Clear() {
// @@protoc_insertion_point(message_clear_start:tutorial.proto_metadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  checksum_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* proto_metadata::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<proto_metadata*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // string checksum = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        ctx->extra_parse_data().SetFieldName("tutorial.proto_metadata.checksum");
        object = msg->mutable_checksum();
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
bool proto_metadata::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.proto_metadata)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // string checksum = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_checksum()));
          DO_(::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
            this->checksum().data(), static_cast<int>(this->checksum().length()),
            ::google::protobuf::internal::WireFormatLite::PARSE,
            "tutorial.proto_metadata.checksum"));
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
  // @@protoc_insertion_point(parse_success:tutorial.proto_metadata)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.proto_metadata)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void proto_metadata::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.proto_metadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string checksum = 1;
  if (this->checksum().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->checksum().data(), static_cast<int>(this->checksum().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.proto_metadata.checksum");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->checksum(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tutorial.proto_metadata)
}

::google::protobuf::uint8* proto_metadata::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.proto_metadata)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // string checksum = 1;
  if (this->checksum().size() > 0) {
    ::google::protobuf::internal::WireFormatLite::VerifyUtf8String(
      this->checksum().data(), static_cast<int>(this->checksum().length()),
      ::google::protobuf::internal::WireFormatLite::SERIALIZE,
      "tutorial.proto_metadata.checksum");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->checksum(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tutorial.proto_metadata)
  return target;
}

size_t proto_metadata::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tutorial.proto_metadata)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // string checksum = 1;
  if (this->checksum().size() > 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::StringSize(
        this->checksum());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void proto_metadata::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tutorial.proto_metadata)
  GOOGLE_DCHECK_NE(&from, this);
  const proto_metadata* source =
      ::google::protobuf::DynamicCastToGenerated<proto_metadata>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tutorial.proto_metadata)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tutorial.proto_metadata)
    MergeFrom(*source);
  }
}

void proto_metadata::MergeFrom(const proto_metadata& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tutorial.proto_metadata)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.checksum().size() > 0) {

    checksum_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.checksum_);
  }
}

void proto_metadata::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tutorial.proto_metadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void proto_metadata::CopyFrom(const proto_metadata& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tutorial.proto_metadata)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool proto_metadata::IsInitialized() const {
  return true;
}

void proto_metadata::Swap(proto_metadata* other) {
  if (other == this) return;
  InternalSwap(other);
}
void proto_metadata::InternalSwap(proto_metadata* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  checksum_.Swap(&other->checksum_, &::google::protobuf::internal::GetEmptyStringAlreadyInited(),
    GetArenaNoVirtual());
}

::google::protobuf::Metadata proto_metadata::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_protobuf_5fgeneral_2eproto);
  return ::file_level_metadata_protobuf_5fgeneral_2eproto[kIndexInFileMessages];
}


// ===================================================================

void proto_general::InitAsDefaultInstance() {
  ::tutorial::_proto_general_default_instance_._instance.get_mutable()->meta_ = const_cast< ::tutorial::proto_metadata*>(
      ::tutorial::proto_metadata::internal_default_instance());
  ::tutorial::_proto_general_default_instance_._instance.get_mutable()->msg_ = const_cast< ::google::protobuf::Any*>(
      ::google::protobuf::Any::internal_default_instance());
}
class proto_general::HasBitSetters {
 public:
  static const ::tutorial::proto_metadata& meta(const proto_general* msg);
  static const ::google::protobuf::Any& msg(const proto_general* msg);
};

const ::tutorial::proto_metadata&
proto_general::HasBitSetters::meta(const proto_general* msg) {
  return *msg->meta_;
}
const ::google::protobuf::Any&
proto_general::HasBitSetters::msg(const proto_general* msg) {
  return *msg->msg_;
}
void proto_general::clear_msg() {
  if (GetArenaNoVirtual() == nullptr && msg_ != nullptr) {
    delete msg_;
  }
  msg_ = nullptr;
}
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int proto_general::kMetaFieldNumber;
const int proto_general::kCompressedFieldNumber;
const int proto_general::kMsgFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

proto_general::proto_general()
  : ::google::protobuf::Message(), _internal_metadata_(nullptr) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:tutorial.proto_general)
}
proto_general::proto_general(const proto_general& from)
  : ::google::protobuf::Message(),
      _internal_metadata_(nullptr) {
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  if (from.has_meta()) {
    meta_ = new ::tutorial::proto_metadata(*from.meta_);
  } else {
    meta_ = nullptr;
  }
  if (from.has_msg()) {
    msg_ = new ::google::protobuf::Any(*from.msg_);
  } else {
    msg_ = nullptr;
  }
  compressed_ = from.compressed_;
  // @@protoc_insertion_point(copy_constructor:tutorial.proto_general)
}

void proto_general::SharedCtor() {
  ::google::protobuf::internal::InitSCC(
      &scc_info_proto_general_protobuf_5fgeneral_2eproto.base);
  ::memset(&meta_, 0, static_cast<size_t>(
      reinterpret_cast<char*>(&compressed_) -
      reinterpret_cast<char*>(&meta_)) + sizeof(compressed_));
}

proto_general::~proto_general() {
  // @@protoc_insertion_point(destructor:tutorial.proto_general)
  SharedDtor();
}

void proto_general::SharedDtor() {
  if (this != internal_default_instance()) delete meta_;
  if (this != internal_default_instance()) delete msg_;
}

void proto_general::SetCachedSize(int size) const {
  _cached_size_.Set(size);
}
const proto_general& proto_general::default_instance() {
  ::google::protobuf::internal::InitSCC(&::scc_info_proto_general_protobuf_5fgeneral_2eproto.base);
  return *internal_default_instance();
}


void proto_general::Clear() {
// @@protoc_insertion_point(message_clear_start:tutorial.proto_general)
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  if (GetArenaNoVirtual() == nullptr && meta_ != nullptr) {
    delete meta_;
  }
  meta_ = nullptr;
  if (GetArenaNoVirtual() == nullptr && msg_ != nullptr) {
    delete msg_;
  }
  msg_ = nullptr;
  compressed_ = false;
  _internal_metadata_.Clear();
}

#if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
const char* proto_general::_InternalParse(const char* begin, const char* end, void* object,
                  ::google::protobuf::internal::ParseContext* ctx) {
  auto msg = static_cast<proto_general*>(object);
  ::google::protobuf::int32 size; (void)size;
  int depth; (void)depth;
  ::google::protobuf::uint32 tag;
  ::google::protobuf::internal::ParseFunc parser_till_end; (void)parser_till_end;
  auto ptr = begin;
  while (ptr < end) {
    ptr = ::google::protobuf::io::Parse32(ptr, &tag);
    GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
    switch (tag >> 3) {
      // .tutorial.proto_metadata meta = 1;
      case 1: {
        if (static_cast<::google::protobuf::uint8>(tag) != 10) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::tutorial::proto_metadata::_InternalParse;
        object = msg->mutable_meta();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
        break;
      }
      // bool compressed = 2;
      case 2: {
        if (static_cast<::google::protobuf::uint8>(tag) != 16) goto handle_unusual;
        msg->set_compressed(::google::protobuf::internal::ReadVarint(&ptr));
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        break;
      }
      // .google.protobuf.Any msg = 10;
      case 10: {
        if (static_cast<::google::protobuf::uint8>(tag) != 82) goto handle_unusual;
        ptr = ::google::protobuf::io::ReadSize(ptr, &size);
        GOOGLE_PROTOBUF_PARSER_ASSERT(ptr);
        parser_till_end = ::google::protobuf::Any::_InternalParse;
        object = msg->mutable_msg();
        if (size > end - ptr) goto len_delim_till_end;
        ptr += size;
        GOOGLE_PROTOBUF_PARSER_ASSERT(ctx->ParseExactRange(
            {parser_till_end, object}, ptr - size, ptr));
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
len_delim_till_end:
  return ctx->StoreAndTailCall(ptr, end, {_InternalParse, msg},
                               {parser_till_end, object}, size);
}
#else  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
bool proto_general::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!PROTOBUF_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:tutorial.proto_general)
  for (;;) {
    ::std::pair<::google::protobuf::uint32, bool> p = input->ReadTagWithCutoffNoLastTag(127u);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // .tutorial.proto_metadata meta = 1;
      case 1: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (10 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_meta()));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // bool compressed = 2;
      case 2: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (16 & 0xFF)) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &compressed_)));
        } else {
          goto handle_unusual;
        }
        break;
      }

      // .google.protobuf.Any msg = 10;
      case 10: {
        if (static_cast< ::google::protobuf::uint8>(tag) == (82 & 0xFF)) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessage(
               input, mutable_msg()));
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
  // @@protoc_insertion_point(parse_success:tutorial.proto_general)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:tutorial.proto_general)
  return false;
#undef DO_
}
#endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER

void proto_general::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:tutorial.proto_general)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tutorial.proto_metadata meta = 1;
  if (this->has_meta()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, HasBitSetters::meta(this), output);
  }

  // bool compressed = 2;
  if (this->compressed() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(2, this->compressed(), output);
  }

  // .google.protobuf.Any msg = 10;
  if (this->has_msg()) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      10, HasBitSetters::msg(this), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        _internal_metadata_.unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:tutorial.proto_general)
}

::google::protobuf::uint8* proto_general::InternalSerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:tutorial.proto_general)
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  // .tutorial.proto_metadata meta = 1;
  if (this->has_meta()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        1, HasBitSetters::meta(this), target);
  }

  // bool compressed = 2;
  if (this->compressed() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(2, this->compressed(), target);
  }

  // .google.protobuf.Any msg = 10;
  if (this->has_msg()) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageToArray(
        10, HasBitSetters::msg(this), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:tutorial.proto_general)
  return target;
}

size_t proto_general::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:tutorial.proto_general)
  size_t total_size = 0;

  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        _internal_metadata_.unknown_fields());
  }
  ::google::protobuf::uint32 cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // .tutorial.proto_metadata meta = 1;
  if (this->has_meta()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *meta_);
  }

  // .google.protobuf.Any msg = 10;
  if (this->has_msg()) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::MessageSize(
        *msg_);
  }

  // bool compressed = 2;
  if (this->compressed() != 0) {
    total_size += 1 + 1;
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  SetCachedSize(cached_size);
  return total_size;
}

void proto_general::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:tutorial.proto_general)
  GOOGLE_DCHECK_NE(&from, this);
  const proto_general* source =
      ::google::protobuf::DynamicCastToGenerated<proto_general>(
          &from);
  if (source == nullptr) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:tutorial.proto_general)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:tutorial.proto_general)
    MergeFrom(*source);
  }
}

void proto_general::MergeFrom(const proto_general& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:tutorial.proto_general)
  GOOGLE_DCHECK_NE(&from, this);
  _internal_metadata_.MergeFrom(from._internal_metadata_);
  ::google::protobuf::uint32 cached_has_bits = 0;
  (void) cached_has_bits;

  if (from.has_meta()) {
    mutable_meta()->::tutorial::proto_metadata::MergeFrom(from.meta());
  }
  if (from.has_msg()) {
    mutable_msg()->::google::protobuf::Any::MergeFrom(from.msg());
  }
  if (from.compressed() != 0) {
    set_compressed(from.compressed());
  }
}

void proto_general::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:tutorial.proto_general)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void proto_general::CopyFrom(const proto_general& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:tutorial.proto_general)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool proto_general::IsInitialized() const {
  return true;
}

void proto_general::Swap(proto_general* other) {
  if (other == this) return;
  InternalSwap(other);
}
void proto_general::InternalSwap(proto_general* other) {
  using std::swap;
  _internal_metadata_.Swap(&other->_internal_metadata_);
  swap(meta_, other->meta_);
  swap(msg_, other->msg_);
  swap(compressed_, other->compressed_);
}

::google::protobuf::Metadata proto_general::GetMetadata() const {
  ::google::protobuf::internal::AssignDescriptors(&::assign_descriptors_table_protobuf_5fgeneral_2eproto);
  return ::file_level_metadata_protobuf_5fgeneral_2eproto[kIndexInFileMessages];
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace tutorial
namespace google {
namespace protobuf {
template<> PROTOBUF_NOINLINE ::tutorial::proto_metadata* Arena::CreateMaybeMessage< ::tutorial::proto_metadata >(Arena* arena) {
  return Arena::CreateInternal< ::tutorial::proto_metadata >(arena);
}
template<> PROTOBUF_NOINLINE ::tutorial::proto_general* Arena::CreateMaybeMessage< ::tutorial::proto_general >(Arena* arena) {
  return Arena::CreateInternal< ::tutorial::proto_general >(arena);
}
}  // namespace protobuf
}  // namespace google

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
