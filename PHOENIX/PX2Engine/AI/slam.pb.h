// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: slam.proto

#ifndef PROTOBUF_slam_2eproto__INCLUDED
#define PROTOBUF_slam_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
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
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace SlamProto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_slam_2eproto();
void protobuf_InitDefaults_slam_2eproto();
void protobuf_AssignDesc_slam_2eproto();
void protobuf_ShutdownFile_slam_2eproto();

class LidarData;
class LidarDataFrame;

enum MsgType {
  CA_RESERVED = 0,
  CA_SEND_LIDAR = 11,
  MsgType_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  MsgType_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool MsgType_IsValid(int value);
const MsgType MsgType_MIN = CA_RESERVED;
const MsgType MsgType_MAX = CA_SEND_LIDAR;
const int MsgType_ARRAYSIZE = MsgType_MAX + 1;

const ::google::protobuf::EnumDescriptor* MsgType_descriptor();
inline const ::std::string& MsgType_Name(MsgType value) {
  return ::google::protobuf::internal::NameOfEnum(
    MsgType_descriptor(), value);
}
inline bool MsgType_Parse(
    const ::std::string& name, MsgType* value) {
  return ::google::protobuf::internal::ParseNamedEnum<MsgType>(
    MsgType_descriptor(), name, value);
}
enum Result {
  RE_OK = 0,
  Result_INT_MIN_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32min,
  Result_INT_MAX_SENTINEL_DO_NOT_USE_ = ::google::protobuf::kint32max
};
bool Result_IsValid(int value);
const Result Result_MIN = RE_OK;
const Result Result_MAX = RE_OK;
const int Result_ARRAYSIZE = Result_MAX + 1;

const ::google::protobuf::EnumDescriptor* Result_descriptor();
inline const ::std::string& Result_Name(Result value) {
  return ::google::protobuf::internal::NameOfEnum(
    Result_descriptor(), value);
}
inline bool Result_Parse(
    const ::std::string& name, Result* value) {
  return ::google::protobuf::internal::ParseNamedEnum<Result>(
    Result_descriptor(), name, value);
}
// ===================================================================

class LidarData : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SlamProto.LidarData) */ {
 public:
  LidarData();
  virtual ~LidarData();

  LidarData(const LidarData& from);

  inline LidarData& operator=(const LidarData& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LidarData& default_instance();

  static const LidarData* internal_default_instance();

  void Swap(LidarData* other);

  // implements Message ----------------------------------------------

  inline LidarData* New() const { return New(NULL); }

  LidarData* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LidarData& from);
  void MergeFrom(const LidarData& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
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
  void InternalSwap(LidarData* other);
  void UnsafeMergeFrom(const LidarData& from);
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

  // optional int32 Signal = 1;
  void clear_signal();
  static const int kSignalFieldNumber = 1;
  ::google::protobuf::int32 signal() const;
  void set_signal(::google::protobuf::int32 value);

  // optional float Angle = 2;
  void clear_angle();
  static const int kAngleFieldNumber = 2;
  float angle() const;
  void set_angle(float value);

  // optional float Distance = 3;
  void clear_distance();
  static const int kDistanceFieldNumber = 3;
  float distance() const;
  void set_distance(float value);

  // @@protoc_insertion_point(class_scope:SlamProto.LidarData)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::int32 signal_;
  float angle_;
  float distance_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_slam_2eproto_impl();
  friend void  protobuf_AddDesc_slam_2eproto_impl();
  friend void protobuf_AssignDesc_slam_2eproto();
  friend void protobuf_ShutdownFile_slam_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<LidarData> LidarData_default_instance_;

// -------------------------------------------------------------------

class LidarDataFrame : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SlamProto.LidarDataFrame) */ {
 public:
  LidarDataFrame();
  virtual ~LidarDataFrame();

  LidarDataFrame(const LidarDataFrame& from);

  inline LidarDataFrame& operator=(const LidarDataFrame& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const LidarDataFrame& default_instance();

  static const LidarDataFrame* internal_default_instance();

  void Swap(LidarDataFrame* other);

  // implements Message ----------------------------------------------

  inline LidarDataFrame* New() const { return New(NULL); }

  LidarDataFrame* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const LidarDataFrame& from);
  void MergeFrom(const LidarDataFrame& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
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
  void InternalSwap(LidarDataFrame* other);
  void UnsafeMergeFrom(const LidarDataFrame& from);
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

  // repeated .SlamProto.LidarData Frames = 1;
  int frames_size() const;
  void clear_frames();
  static const int kFramesFieldNumber = 1;
  const ::SlamProto::LidarData& frames(int index) const;
  ::SlamProto::LidarData* mutable_frames(int index);
  ::SlamProto::LidarData* add_frames();
  ::google::protobuf::RepeatedPtrField< ::SlamProto::LidarData >*
      mutable_frames();
  const ::google::protobuf::RepeatedPtrField< ::SlamProto::LidarData >&
      frames() const;

  // @@protoc_insertion_point(class_scope:SlamProto.LidarDataFrame)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedPtrField< ::SlamProto::LidarData > frames_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_slam_2eproto_impl();
  friend void  protobuf_AddDesc_slam_2eproto_impl();
  friend void protobuf_AssignDesc_slam_2eproto();
  friend void protobuf_ShutdownFile_slam_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<LidarDataFrame> LidarDataFrame_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// LidarData

// optional int32 Signal = 1;
inline void LidarData::clear_signal() {
  signal_ = 0;
}
inline ::google::protobuf::int32 LidarData::signal() const {
  // @@protoc_insertion_point(field_get:SlamProto.LidarData.Signal)
  return signal_;
}
inline void LidarData::set_signal(::google::protobuf::int32 value) {
  
  signal_ = value;
  // @@protoc_insertion_point(field_set:SlamProto.LidarData.Signal)
}

// optional float Angle = 2;
inline void LidarData::clear_angle() {
  angle_ = 0;
}
inline float LidarData::angle() const {
  // @@protoc_insertion_point(field_get:SlamProto.LidarData.Angle)
  return angle_;
}
inline void LidarData::set_angle(float value) {
  
  angle_ = value;
  // @@protoc_insertion_point(field_set:SlamProto.LidarData.Angle)
}

// optional float Distance = 3;
inline void LidarData::clear_distance() {
  distance_ = 0;
}
inline float LidarData::distance() const {
  // @@protoc_insertion_point(field_get:SlamProto.LidarData.Distance)
  return distance_;
}
inline void LidarData::set_distance(float value) {
  
  distance_ = value;
  // @@protoc_insertion_point(field_set:SlamProto.LidarData.Distance)
}

inline const LidarData* LidarData::internal_default_instance() {
  return &LidarData_default_instance_.get();
}
// -------------------------------------------------------------------

// LidarDataFrame

// repeated .SlamProto.LidarData Frames = 1;
inline int LidarDataFrame::frames_size() const {
  return frames_.size();
}
inline void LidarDataFrame::clear_frames() {
  frames_.Clear();
}
inline const ::SlamProto::LidarData& LidarDataFrame::frames(int index) const {
  // @@protoc_insertion_point(field_get:SlamProto.LidarDataFrame.Frames)
  return frames_.Get(index);
}
inline ::SlamProto::LidarData* LidarDataFrame::mutable_frames(int index) {
  // @@protoc_insertion_point(field_mutable:SlamProto.LidarDataFrame.Frames)
  return frames_.Mutable(index);
}
inline ::SlamProto::LidarData* LidarDataFrame::add_frames() {
  // @@protoc_insertion_point(field_add:SlamProto.LidarDataFrame.Frames)
  return frames_.Add();
}
inline ::google::protobuf::RepeatedPtrField< ::SlamProto::LidarData >*
LidarDataFrame::mutable_frames() {
  // @@protoc_insertion_point(field_mutable_list:SlamProto.LidarDataFrame.Frames)
  return &frames_;
}
inline const ::google::protobuf::RepeatedPtrField< ::SlamProto::LidarData >&
LidarDataFrame::frames() const {
  // @@protoc_insertion_point(field_list:SlamProto.LidarDataFrame.Frames)
  return frames_;
}

inline const LidarDataFrame* LidarDataFrame::internal_default_instance() {
  return &LidarDataFrame_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace SlamProto

#ifndef SWIG
namespace google {
namespace protobuf {

template <> struct is_proto_enum< ::SlamProto::MsgType> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SlamProto::MsgType>() {
  return ::SlamProto::MsgType_descriptor();
}
template <> struct is_proto_enum< ::SlamProto::Result> : ::google::protobuf::internal::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::SlamProto::Result>() {
  return ::SlamProto::Result_descriptor();
}

}  // namespace protobuf
}  // namespace google
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_slam_2eproto__INCLUDED
