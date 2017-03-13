// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Tracing.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "Tracing.pb.h"

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

namespace hbase {
namespace pb {

namespace {

const ::google::protobuf::Descriptor* RPCTInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RPCTInfo_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_Tracing_2eproto() {
  protobuf_AddDesc_Tracing_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "Tracing.proto");
  GOOGLE_CHECK(file != NULL);
  RPCTInfo_descriptor_ = file->message_type(0);
  static const int RPCTInfo_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RPCTInfo, trace_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RPCTInfo, parent_id_),
  };
  RPCTInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RPCTInfo_descriptor_,
      RPCTInfo::default_instance_,
      RPCTInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RPCTInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RPCTInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RPCTInfo));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_Tracing_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RPCTInfo_descriptor_, &RPCTInfo::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_Tracing_2eproto() {
  delete RPCTInfo::default_instance_;
  delete RPCTInfo_reflection_;
}

void protobuf_AddDesc_Tracing_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\rTracing.proto\022\010hbase.pb\"/\n\010RPCTInfo\022\020\n"
    "\010trace_id\030\001 \001(\003\022\021\n\tparent_id\030\002 \001(\003B@\n*or"
    "g.apache.hadoop.hbase.protobuf.generated"
    "B\rTracingProtosH\001\240\001\001", 140);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "Tracing.proto", &protobuf_RegisterTypes);
  RPCTInfo::default_instance_ = new RPCTInfo();
  RPCTInfo::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_Tracing_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_Tracing_2eproto {
  StaticDescriptorInitializer_Tracing_2eproto() {
    protobuf_AddDesc_Tracing_2eproto();
  }
} static_descriptor_initializer_Tracing_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RPCTInfo::kTraceIdFieldNumber;
const int RPCTInfo::kParentIdFieldNumber;
#endif  // !_MSC_VER

RPCTInfo::RPCTInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RPCTInfo::InitAsDefaultInstance() {
}

RPCTInfo::RPCTInfo(const RPCTInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RPCTInfo::SharedCtor() {
  _cached_size_ = 0;
  trace_id_ = GOOGLE_LONGLONG(0);
  parent_id_ = GOOGLE_LONGLONG(0);
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RPCTInfo::~RPCTInfo() {
  SharedDtor();
}

void RPCTInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RPCTInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RPCTInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RPCTInfo_descriptor_;
}

const RPCTInfo& RPCTInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_Tracing_2eproto();
  return *default_instance_;
}

RPCTInfo* RPCTInfo::default_instance_ = NULL;

RPCTInfo* RPCTInfo::New() const {
  return new RPCTInfo;
}

void RPCTInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    trace_id_ = GOOGLE_LONGLONG(0);
    parent_id_ = GOOGLE_LONGLONG(0);
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RPCTInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int64 trace_id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &trace_id_)));
          set_has_trace_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_parent_id;
        break;
      }

      // optional int64 parent_id = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_parent_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int64, ::google::protobuf::internal::WireFormatLite::TYPE_INT64>(
                 input, &parent_id_)));
          set_has_parent_id();
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

void RPCTInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int64 trace_id = 1;
  if (has_trace_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(1, this->trace_id(), output);
  }

  // optional int64 parent_id = 2;
  if (has_parent_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt64(2, this->parent_id(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RPCTInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int64 trace_id = 1;
  if (has_trace_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(1, this->trace_id(), target);
  }

  // optional int64 parent_id = 2;
  if (has_parent_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt64ToArray(2, this->parent_id(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RPCTInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int64 trace_id = 1;
    if (has_trace_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->trace_id());
    }

    // optional int64 parent_id = 2;
    if (has_parent_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int64Size(
          this->parent_id());
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

void RPCTInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RPCTInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RPCTInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RPCTInfo::MergeFrom(const RPCTInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_trace_id()) {
      set_trace_id(from.trace_id());
    }
    if (from.has_parent_id()) {
      set_parent_id(from.parent_id());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RPCTInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RPCTInfo::CopyFrom(const RPCTInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RPCTInfo::IsInitialized() const {

  return true;
}

void RPCTInfo::Swap(RPCTInfo* other) {
  if (other != this) {
    std::swap(trace_id_, other->trace_id_);
    std::swap(parent_id_, other->parent_id_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RPCTInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RPCTInfo_descriptor_;
  metadata.reflection = RPCTInfo_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace pb
}  // namespace hbase

// @@protoc_insertion_point(global_scope)