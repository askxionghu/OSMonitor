// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dmesgInfo.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "dmesgInfo.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace com {
namespace eolwral {
namespace osmonitor {
namespace core {

namespace {

const ::google::protobuf::Descriptor* dmesgInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  dmesgInfo_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* dmesgInfo_dmesgLevel_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_dmesgInfo_2eproto() {
  protobuf_AddDesc_dmesgInfo_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "dmesgInfo.proto");
  GOOGLE_CHECK(file != NULL);
  dmesgInfo_descriptor_ = file->message_type(0);
  static const int dmesgInfo_offsets_[3] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dmesgInfo, level_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dmesgInfo, seconds_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dmesgInfo, message_),
  };
  dmesgInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      dmesgInfo_descriptor_,
      dmesgInfo::default_instance_,
      dmesgInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dmesgInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(dmesgInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(dmesgInfo));
  dmesgInfo_dmesgLevel_descriptor_ = dmesgInfo_descriptor_->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_dmesgInfo_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    dmesgInfo_descriptor_, &dmesgInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_dmesgInfo_2eproto() {
  delete dmesgInfo::default_instance_;
  delete dmesgInfo_reflection_;
}

void protobuf_AddDesc_dmesgInfo_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017dmesgInfo.proto\022\032com.eolwral.osmonitor"
    ".core\"\361\001\n\tdmesgInfo\022L\n\005level\030\001 \002(\01620.com"
    ".eolwral.osmonitor.core.dmesgInfo.dmesgL"
    "evel:\013INFORMATION\022\017\n\007seconds\030\002 \002(\004\022\017\n\007me"
    "ssage\030\003 \002(\t\"t\n\ndmesgLevel\022\r\n\tEMERGENCY\020\000"
    "\022\t\n\005ALERT\020\001\022\014\n\010CRITICAL\020\002\022\t\n\005ERROR\020\003\022\013\n\007"
    "WARNING\020\004\022\n\n\006NOTICE\020\005\022\017\n\013INFORMATION\020\006\022\t"
    "\n\005DEBUG\020\007", 289);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "dmesgInfo.proto", &protobuf_RegisterTypes);
  dmesgInfo::default_instance_ = new dmesgInfo();
  dmesgInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_dmesgInfo_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_dmesgInfo_2eproto {
  StaticDescriptorInitializer_dmesgInfo_2eproto() {
    protobuf_AddDesc_dmesgInfo_2eproto();
  }
} static_descriptor_initializer_dmesgInfo_2eproto_;

// ===================================================================

const ::google::protobuf::EnumDescriptor* dmesgInfo_dmesgLevel_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return dmesgInfo_dmesgLevel_descriptor_;
}
bool dmesgInfo_dmesgLevel_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

#ifndef _MSC_VER
const dmesgInfo_dmesgLevel dmesgInfo::EMERGENCY;
const dmesgInfo_dmesgLevel dmesgInfo::ALERT;
const dmesgInfo_dmesgLevel dmesgInfo::CRITICAL;
const dmesgInfo_dmesgLevel dmesgInfo::ERROR;
const dmesgInfo_dmesgLevel dmesgInfo::WARNING;
const dmesgInfo_dmesgLevel dmesgInfo::NOTICE;
const dmesgInfo_dmesgLevel dmesgInfo::INFORMATION;
const dmesgInfo_dmesgLevel dmesgInfo::DEBUG;
const dmesgInfo_dmesgLevel dmesgInfo::dmesgLevel_MIN;
const dmesgInfo_dmesgLevel dmesgInfo::dmesgLevel_MAX;
const int dmesgInfo::dmesgLevel_ARRAYSIZE;
#endif  // _MSC_VER
#ifndef _MSC_VER
const int dmesgInfo::kLevelFieldNumber;
const int dmesgInfo::kSecondsFieldNumber;
const int dmesgInfo::kMessageFieldNumber;
#endif  // !_MSC_VER

dmesgInfo::dmesgInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void dmesgInfo::InitAsDefaultInstance() {
}

dmesgInfo::dmesgInfo(const dmesgInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void dmesgInfo::SharedCtor() {
  _cached_size_ = 0;
  level_ = 6;
  seconds_ = GOOGLE_ULONGLONG(0);
  message_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

dmesgInfo::~dmesgInfo() {
  SharedDtor();
}

void dmesgInfo::SharedDtor() {
  if (message_ != &::google::protobuf::internal::kEmptyString) {
    delete message_;
  }
  if (this != default_instance_) {
  }
}

void dmesgInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* dmesgInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return dmesgInfo_descriptor_;
}

const dmesgInfo& dmesgInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_dmesgInfo_2eproto();
  return *default_instance_;
}

dmesgInfo* dmesgInfo::default_instance_ = NULL;

dmesgInfo* dmesgInfo::New() const {
  return new dmesgInfo;
}

void dmesgInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    level_ = 6;
    seconds_ = GOOGLE_ULONGLONG(0);
    if (has_message()) {
      if (message_ != &::google::protobuf::internal::kEmptyString) {
        message_->clear();
      }
    }
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool dmesgInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .com.eolwral.osmonitor.core.dmesgInfo.dmesgLevel level = 1 [default = INFORMATION];
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::com::eolwral::osmonitor::core::dmesgInfo_dmesgLevel_IsValid(value)) {
            set_level(static_cast< ::com::eolwral::osmonitor::core::dmesgInfo_dmesgLevel >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_seconds;
        break;
      }

      // required uint64 seconds = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_seconds:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &seconds_)));
          set_has_seconds();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(26)) goto parse_message;
        break;
      }

      // required string message = 3;
      case 3: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_message:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_message()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8String(
            this->message().data(), this->message().length(),
            ::google::protobuf::internal::WireFormat::PARSE);
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void dmesgInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // required .com.eolwral.osmonitor.core.dmesgInfo.dmesgLevel level = 1 [default = INFORMATION];
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->level(), output);
  }

  // required uint64 seconds = 2;
  if (has_seconds()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->seconds(), output);
  }

  // required string message = 3;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    ::google::protobuf::internal::WireFormatLite::WriteString(
      3, this->message(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* dmesgInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // required .com.eolwral.osmonitor.core.dmesgInfo.dmesgLevel level = 1 [default = INFORMATION];
  if (has_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->level(), target);
  }

  // required uint64 seconds = 2;
  if (has_seconds()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->seconds(), target);
  }

  // required string message = 3;
  if (has_message()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8String(
      this->message().data(), this->message().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE);
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        3, this->message(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int dmesgInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // required .com.eolwral.osmonitor.core.dmesgInfo.dmesgLevel level = 1 [default = INFORMATION];
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->level());
    }

    // required uint64 seconds = 2;
    if (has_seconds()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::UInt64Size(
          this->seconds());
    }

    // required string message = 3;
    if (has_message()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->message());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void dmesgInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const dmesgInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const dmesgInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void dmesgInfo::MergeFrom(const dmesgInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_level()) {
      set_level(from.level());
    }
    if (from.has_seconds()) {
      set_seconds(from.seconds());
    }
    if (from.has_message()) {
      set_message(from.message());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void dmesgInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void dmesgInfo::CopyFrom(const dmesgInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool dmesgInfo::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000007) != 0x00000007) return false;

  return true;
}

void dmesgInfo::Swap(dmesgInfo* other) {
  if (other != this) {
    std::swap(level_, other->level_);
    std::swap(seconds_, other->seconds_);
    std::swap(message_, other->message_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata dmesgInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = dmesgInfo_descriptor_;
  metadata.reflection = dmesgInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace core
}  // namespace osmonitor
}  // namespace eolwral
}  // namespace com

// @@protoc_insertion_point(global_scope)