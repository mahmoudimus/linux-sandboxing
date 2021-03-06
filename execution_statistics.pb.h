// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: execution_statistics.proto

#ifndef PROTOBUF_execution_5fstatistics_2eproto__INCLUDED
#define PROTOBUF_execution_5fstatistics_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace tools {
namespace protos {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_execution_5fstatistics_2eproto();
void protobuf_AssignDesc_execution_5fstatistics_2eproto();
void protobuf_ShutdownFile_execution_5fstatistics_2eproto();

class ExecutionStatistics;
class ResourceUsage;

// ===================================================================

class ResourceUsage : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tools.protos.ResourceUsage) */ {
 public:
  ResourceUsage();
  virtual ~ResourceUsage();

  ResourceUsage(const ResourceUsage& from);

  inline ResourceUsage& operator=(const ResourceUsage& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResourceUsage& default_instance();

  void Swap(ResourceUsage* other);

  // implements Message ----------------------------------------------

  inline ResourceUsage* New() const { return New(NULL); }

  ResourceUsage* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResourceUsage& from);
  void MergeFrom(const ResourceUsage& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ResourceUsage* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional int64 utime_sec = 1;
  void clear_utime_sec();
  static const int kUtimeSecFieldNumber = 1;
  ::google::protobuf::int64 utime_sec() const;
  void set_utime_sec(::google::protobuf::int64 value);

  // optional int64 utime_usec = 2;
  void clear_utime_usec();
  static const int kUtimeUsecFieldNumber = 2;
  ::google::protobuf::int64 utime_usec() const;
  void set_utime_usec(::google::protobuf::int64 value);

  // optional int64 stime_sec = 3;
  void clear_stime_sec();
  static const int kStimeSecFieldNumber = 3;
  ::google::protobuf::int64 stime_sec() const;
  void set_stime_sec(::google::protobuf::int64 value);

  // optional int64 stime_usec = 4;
  void clear_stime_usec();
  static const int kStimeUsecFieldNumber = 4;
  ::google::protobuf::int64 stime_usec() const;
  void set_stime_usec(::google::protobuf::int64 value);

  // optional int64 maxrss = 5;
  void clear_maxrss();
  static const int kMaxrssFieldNumber = 5;
  ::google::protobuf::int64 maxrss() const;
  void set_maxrss(::google::protobuf::int64 value);

  // optional int64 ixrss = 6;
  void clear_ixrss();
  static const int kIxrssFieldNumber = 6;
  ::google::protobuf::int64 ixrss() const;
  void set_ixrss(::google::protobuf::int64 value);

  // optional int64 idrss = 7;
  void clear_idrss();
  static const int kIdrssFieldNumber = 7;
  ::google::protobuf::int64 idrss() const;
  void set_idrss(::google::protobuf::int64 value);

  // optional int64 isrss = 8;
  void clear_isrss();
  static const int kIsrssFieldNumber = 8;
  ::google::protobuf::int64 isrss() const;
  void set_isrss(::google::protobuf::int64 value);

  // optional int64 minflt = 9;
  void clear_minflt();
  static const int kMinfltFieldNumber = 9;
  ::google::protobuf::int64 minflt() const;
  void set_minflt(::google::protobuf::int64 value);

  // optional int64 majflt = 10;
  void clear_majflt();
  static const int kMajfltFieldNumber = 10;
  ::google::protobuf::int64 majflt() const;
  void set_majflt(::google::protobuf::int64 value);

  // optional int64 nswap = 11;
  void clear_nswap();
  static const int kNswapFieldNumber = 11;
  ::google::protobuf::int64 nswap() const;
  void set_nswap(::google::protobuf::int64 value);

  // optional int64 inblock = 12;
  void clear_inblock();
  static const int kInblockFieldNumber = 12;
  ::google::protobuf::int64 inblock() const;
  void set_inblock(::google::protobuf::int64 value);

  // optional int64 oublock = 13;
  void clear_oublock();
  static const int kOublockFieldNumber = 13;
  ::google::protobuf::int64 oublock() const;
  void set_oublock(::google::protobuf::int64 value);

  // optional int64 msgsnd = 14;
  void clear_msgsnd();
  static const int kMsgsndFieldNumber = 14;
  ::google::protobuf::int64 msgsnd() const;
  void set_msgsnd(::google::protobuf::int64 value);

  // optional int64 msgrcv = 15;
  void clear_msgrcv();
  static const int kMsgrcvFieldNumber = 15;
  ::google::protobuf::int64 msgrcv() const;
  void set_msgrcv(::google::protobuf::int64 value);

  // optional int64 nsignals = 16;
  void clear_nsignals();
  static const int kNsignalsFieldNumber = 16;
  ::google::protobuf::int64 nsignals() const;
  void set_nsignals(::google::protobuf::int64 value);

  // optional int64 nvcsw = 17;
  void clear_nvcsw();
  static const int kNvcswFieldNumber = 17;
  ::google::protobuf::int64 nvcsw() const;
  void set_nvcsw(::google::protobuf::int64 value);

  // optional int64 nivcsw = 18;
  void clear_nivcsw();
  static const int kNivcswFieldNumber = 18;
  ::google::protobuf::int64 nivcsw() const;
  void set_nivcsw(::google::protobuf::int64 value);

  // @@protoc_insertion_point(class_scope:tools.protos.ResourceUsage)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::int64 utime_sec_;
  ::google::protobuf::int64 utime_usec_;
  ::google::protobuf::int64 stime_sec_;
  ::google::protobuf::int64 stime_usec_;
  ::google::protobuf::int64 maxrss_;
  ::google::protobuf::int64 ixrss_;
  ::google::protobuf::int64 idrss_;
  ::google::protobuf::int64 isrss_;
  ::google::protobuf::int64 minflt_;
  ::google::protobuf::int64 majflt_;
  ::google::protobuf::int64 nswap_;
  ::google::protobuf::int64 inblock_;
  ::google::protobuf::int64 oublock_;
  ::google::protobuf::int64 msgsnd_;
  ::google::protobuf::int64 msgrcv_;
  ::google::protobuf::int64 nsignals_;
  ::google::protobuf::int64 nvcsw_;
  ::google::protobuf::int64 nivcsw_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_execution_5fstatistics_2eproto();
  friend void protobuf_AssignDesc_execution_5fstatistics_2eproto();
  friend void protobuf_ShutdownFile_execution_5fstatistics_2eproto();

  void InitAsDefaultInstance();
  static ResourceUsage* default_instance_;
};
// -------------------------------------------------------------------

class ExecutionStatistics : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:tools.protos.ExecutionStatistics) */ {
 public:
  ExecutionStatistics();
  virtual ~ExecutionStatistics();

  ExecutionStatistics(const ExecutionStatistics& from);

  inline ExecutionStatistics& operator=(const ExecutionStatistics& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ExecutionStatistics& default_instance();

  void Swap(ExecutionStatistics* other);

  // implements Message ----------------------------------------------

  inline ExecutionStatistics* New() const { return New(NULL); }

  ExecutionStatistics* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ExecutionStatistics& from);
  void MergeFrom(const ExecutionStatistics& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ExecutionStatistics* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional .tools.protos.ResourceUsage resource_usage = 1;
  bool has_resource_usage() const;
  void clear_resource_usage();
  static const int kResourceUsageFieldNumber = 1;
  const ::tools::protos::ResourceUsage& resource_usage() const;
  ::tools::protos::ResourceUsage* mutable_resource_usage();
  ::tools::protos::ResourceUsage* release_resource_usage();
  void set_allocated_resource_usage(::tools::protos::ResourceUsage* resource_usage);

  // @@protoc_insertion_point(class_scope:tools.protos.ExecutionStatistics)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::tools::protos::ResourceUsage* resource_usage_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_execution_5fstatistics_2eproto();
  friend void protobuf_AssignDesc_execution_5fstatistics_2eproto();
  friend void protobuf_ShutdownFile_execution_5fstatistics_2eproto();

  void InitAsDefaultInstance();
  static ExecutionStatistics* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ResourceUsage

// optional int64 utime_sec = 1;
inline void ResourceUsage::clear_utime_sec() {
  utime_sec_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::utime_sec() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.utime_sec)
  return utime_sec_;
}
inline void ResourceUsage::set_utime_sec(::google::protobuf::int64 value) {
  
  utime_sec_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.utime_sec)
}

// optional int64 utime_usec = 2;
inline void ResourceUsage::clear_utime_usec() {
  utime_usec_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::utime_usec() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.utime_usec)
  return utime_usec_;
}
inline void ResourceUsage::set_utime_usec(::google::protobuf::int64 value) {
  
  utime_usec_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.utime_usec)
}

// optional int64 stime_sec = 3;
inline void ResourceUsage::clear_stime_sec() {
  stime_sec_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::stime_sec() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.stime_sec)
  return stime_sec_;
}
inline void ResourceUsage::set_stime_sec(::google::protobuf::int64 value) {
  
  stime_sec_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.stime_sec)
}

// optional int64 stime_usec = 4;
inline void ResourceUsage::clear_stime_usec() {
  stime_usec_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::stime_usec() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.stime_usec)
  return stime_usec_;
}
inline void ResourceUsage::set_stime_usec(::google::protobuf::int64 value) {
  
  stime_usec_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.stime_usec)
}

// optional int64 maxrss = 5;
inline void ResourceUsage::clear_maxrss() {
  maxrss_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::maxrss() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.maxrss)
  return maxrss_;
}
inline void ResourceUsage::set_maxrss(::google::protobuf::int64 value) {
  
  maxrss_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.maxrss)
}

// optional int64 ixrss = 6;
inline void ResourceUsage::clear_ixrss() {
  ixrss_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::ixrss() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.ixrss)
  return ixrss_;
}
inline void ResourceUsage::set_ixrss(::google::protobuf::int64 value) {
  
  ixrss_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.ixrss)
}

// optional int64 idrss = 7;
inline void ResourceUsage::clear_idrss() {
  idrss_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::idrss() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.idrss)
  return idrss_;
}
inline void ResourceUsage::set_idrss(::google::protobuf::int64 value) {
  
  idrss_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.idrss)
}

// optional int64 isrss = 8;
inline void ResourceUsage::clear_isrss() {
  isrss_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::isrss() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.isrss)
  return isrss_;
}
inline void ResourceUsage::set_isrss(::google::protobuf::int64 value) {
  
  isrss_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.isrss)
}

// optional int64 minflt = 9;
inline void ResourceUsage::clear_minflt() {
  minflt_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::minflt() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.minflt)
  return minflt_;
}
inline void ResourceUsage::set_minflt(::google::protobuf::int64 value) {
  
  minflt_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.minflt)
}

// optional int64 majflt = 10;
inline void ResourceUsage::clear_majflt() {
  majflt_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::majflt() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.majflt)
  return majflt_;
}
inline void ResourceUsage::set_majflt(::google::protobuf::int64 value) {
  
  majflt_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.majflt)
}

// optional int64 nswap = 11;
inline void ResourceUsage::clear_nswap() {
  nswap_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::nswap() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.nswap)
  return nswap_;
}
inline void ResourceUsage::set_nswap(::google::protobuf::int64 value) {
  
  nswap_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.nswap)
}

// optional int64 inblock = 12;
inline void ResourceUsage::clear_inblock() {
  inblock_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::inblock() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.inblock)
  return inblock_;
}
inline void ResourceUsage::set_inblock(::google::protobuf::int64 value) {
  
  inblock_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.inblock)
}

// optional int64 oublock = 13;
inline void ResourceUsage::clear_oublock() {
  oublock_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::oublock() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.oublock)
  return oublock_;
}
inline void ResourceUsage::set_oublock(::google::protobuf::int64 value) {
  
  oublock_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.oublock)
}

// optional int64 msgsnd = 14;
inline void ResourceUsage::clear_msgsnd() {
  msgsnd_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::msgsnd() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.msgsnd)
  return msgsnd_;
}
inline void ResourceUsage::set_msgsnd(::google::protobuf::int64 value) {
  
  msgsnd_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.msgsnd)
}

// optional int64 msgrcv = 15;
inline void ResourceUsage::clear_msgrcv() {
  msgrcv_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::msgrcv() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.msgrcv)
  return msgrcv_;
}
inline void ResourceUsage::set_msgrcv(::google::protobuf::int64 value) {
  
  msgrcv_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.msgrcv)
}

// optional int64 nsignals = 16;
inline void ResourceUsage::clear_nsignals() {
  nsignals_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::nsignals() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.nsignals)
  return nsignals_;
}
inline void ResourceUsage::set_nsignals(::google::protobuf::int64 value) {
  
  nsignals_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.nsignals)
}

// optional int64 nvcsw = 17;
inline void ResourceUsage::clear_nvcsw() {
  nvcsw_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::nvcsw() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.nvcsw)
  return nvcsw_;
}
inline void ResourceUsage::set_nvcsw(::google::protobuf::int64 value) {
  
  nvcsw_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.nvcsw)
}

// optional int64 nivcsw = 18;
inline void ResourceUsage::clear_nivcsw() {
  nivcsw_ = GOOGLE_LONGLONG(0);
}
inline ::google::protobuf::int64 ResourceUsage::nivcsw() const {
  // @@protoc_insertion_point(field_get:tools.protos.ResourceUsage.nivcsw)
  return nivcsw_;
}
inline void ResourceUsage::set_nivcsw(::google::protobuf::int64 value) {
  
  nivcsw_ = value;
  // @@protoc_insertion_point(field_set:tools.protos.ResourceUsage.nivcsw)
}

// -------------------------------------------------------------------

// ExecutionStatistics

// optional .tools.protos.ResourceUsage resource_usage = 1;
inline bool ExecutionStatistics::has_resource_usage() const {
  return !_is_default_instance_ && resource_usage_ != NULL;
}
inline void ExecutionStatistics::clear_resource_usage() {
  if (GetArenaNoVirtual() == NULL && resource_usage_ != NULL) delete resource_usage_;
  resource_usage_ = NULL;
}
inline const ::tools::protos::ResourceUsage& ExecutionStatistics::resource_usage() const {
  // @@protoc_insertion_point(field_get:tools.protos.ExecutionStatistics.resource_usage)
  return resource_usage_ != NULL ? *resource_usage_ : *default_instance_->resource_usage_;
}
inline ::tools::protos::ResourceUsage* ExecutionStatistics::mutable_resource_usage() {
  
  if (resource_usage_ == NULL) {
    resource_usage_ = new ::tools::protos::ResourceUsage;
  }
  // @@protoc_insertion_point(field_mutable:tools.protos.ExecutionStatistics.resource_usage)
  return resource_usage_;
}
inline ::tools::protos::ResourceUsage* ExecutionStatistics::release_resource_usage() {
  // @@protoc_insertion_point(field_release:tools.protos.ExecutionStatistics.resource_usage)
  
  ::tools::protos::ResourceUsage* temp = resource_usage_;
  resource_usage_ = NULL;
  return temp;
}
inline void ExecutionStatistics::set_allocated_resource_usage(::tools::protos::ResourceUsage* resource_usage) {
  delete resource_usage_;
  resource_usage_ = resource_usage;
  if (resource_usage) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:tools.protos.ExecutionStatistics.resource_usage)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace protos
}  // namespace tools

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_execution_5fstatistics_2eproto__INCLUDED
