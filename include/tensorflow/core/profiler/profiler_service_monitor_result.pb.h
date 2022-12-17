// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: tensorflow/core/profiler/profiler_service_monitor_result.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprofiler_2fprofiler_5fservice_5fmonitor_5fresult_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprofiler_2fprofiler_5fservice_5fmonitor_5fresult_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3009000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3009002 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_tensorflow_2fcore_2fprofiler_2fprofiler_5fservice_5fmonitor_5fresult_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_tensorflow_2fcore_2fprofiler_2fprofiler_5fservice_5fmonitor_5fresult_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[1]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_tensorflow_2fcore_2fprofiler_2fprofiler_5fservice_5fmonitor_5fresult_2eproto;
namespace tensorflow {
class ProfilerServiceMonitorResult;
class ProfilerServiceMonitorResultDefaultTypeInternal;
extern ProfilerServiceMonitorResultDefaultTypeInternal _ProfilerServiceMonitorResult_default_instance_;
}  // namespace tensorflow
PROTOBUF_NAMESPACE_OPEN
template<> ::tensorflow::ProfilerServiceMonitorResult* Arena::CreateMaybeMessage<::tensorflow::ProfilerServiceMonitorResult>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace tensorflow {

enum ProfilerServiceMonitorResult_ResponseType : int {
  ProfilerServiceMonitorResult_ResponseType_EMPTY_RESULT = 0,
  ProfilerServiceMonitorResult_ResponseType_UTIL_ONLY = 1,
  ProfilerServiceMonitorResult_ResponseType_UTIL_IDLE = 2,
  ProfilerServiceMonitorResult_ResponseType_UTIL_IDLE_STEP = 3,
  ProfilerServiceMonitorResult_ResponseType_ProfilerServiceMonitorResult_ResponseType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  ProfilerServiceMonitorResult_ResponseType_ProfilerServiceMonitorResult_ResponseType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool ProfilerServiceMonitorResult_ResponseType_IsValid(int value);
constexpr ProfilerServiceMonitorResult_ResponseType ProfilerServiceMonitorResult_ResponseType_ResponseType_MIN = ProfilerServiceMonitorResult_ResponseType_EMPTY_RESULT;
constexpr ProfilerServiceMonitorResult_ResponseType ProfilerServiceMonitorResult_ResponseType_ResponseType_MAX = ProfilerServiceMonitorResult_ResponseType_UTIL_IDLE_STEP;
constexpr int ProfilerServiceMonitorResult_ResponseType_ResponseType_ARRAYSIZE = ProfilerServiceMonitorResult_ResponseType_ResponseType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* ProfilerServiceMonitorResult_ResponseType_descriptor();
template<typename T>
inline const std::string& ProfilerServiceMonitorResult_ResponseType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, ProfilerServiceMonitorResult_ResponseType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function ProfilerServiceMonitorResult_ResponseType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    ProfilerServiceMonitorResult_ResponseType_descriptor(), enum_t_value);
}
inline bool ProfilerServiceMonitorResult_ResponseType_Parse(
    const std::string& name, ProfilerServiceMonitorResult_ResponseType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<ProfilerServiceMonitorResult_ResponseType>(
    ProfilerServiceMonitorResult_ResponseType_descriptor(), name, value);
}
// ===================================================================

class ProfilerServiceMonitorResult :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:tensorflow.ProfilerServiceMonitorResult) */ {
 public:
  ProfilerServiceMonitorResult();
  virtual ~ProfilerServiceMonitorResult();

  ProfilerServiceMonitorResult(const ProfilerServiceMonitorResult& from);
  ProfilerServiceMonitorResult(ProfilerServiceMonitorResult&& from) noexcept
    : ProfilerServiceMonitorResult() {
    *this = ::std::move(from);
  }

  inline ProfilerServiceMonitorResult& operator=(const ProfilerServiceMonitorResult& from) {
    CopyFrom(from);
    return *this;
  }
  inline ProfilerServiceMonitorResult& operator=(ProfilerServiceMonitorResult&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const ProfilerServiceMonitorResult& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const ProfilerServiceMonitorResult* internal_default_instance() {
    return reinterpret_cast<const ProfilerServiceMonitorResult*>(
               &_ProfilerServiceMonitorResult_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(ProfilerServiceMonitorResult& a, ProfilerServiceMonitorResult& b) {
    a.Swap(&b);
  }
  inline void Swap(ProfilerServiceMonitorResult* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline ProfilerServiceMonitorResult* New() const final {
    return CreateMaybeMessage<ProfilerServiceMonitorResult>(nullptr);
  }

  ProfilerServiceMonitorResult* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<ProfilerServiceMonitorResult>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const ProfilerServiceMonitorResult& from);
  void MergeFrom(const ProfilerServiceMonitorResult& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  #if GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  #else
  bool MergePartialFromCodedStream(
      ::PROTOBUF_NAMESPACE_ID::io::CodedInputStream* input) final;
  #endif  // GOOGLE_PROTOBUF_ENABLE_EXPERIMENTAL_PARSER
  void SerializeWithCachedSizes(
      ::PROTOBUF_NAMESPACE_ID::io::CodedOutputStream* output) const final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(ProfilerServiceMonitorResult* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "tensorflow.ProfilerServiceMonitorResult";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_tensorflow_2fcore_2fprofiler_2fprofiler_5fservice_5fmonitor_5fresult_2eproto);
    return ::descriptor_table_tensorflow_2fcore_2fprofiler_2fprofiler_5fservice_5fmonitor_5fresult_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  typedef ProfilerServiceMonitorResult_ResponseType ResponseType;
  static constexpr ResponseType EMPTY_RESULT =
    ProfilerServiceMonitorResult_ResponseType_EMPTY_RESULT;
  static constexpr ResponseType UTIL_ONLY =
    ProfilerServiceMonitorResult_ResponseType_UTIL_ONLY;
  static constexpr ResponseType UTIL_IDLE =
    ProfilerServiceMonitorResult_ResponseType_UTIL_IDLE;
  static constexpr ResponseType UTIL_IDLE_STEP =
    ProfilerServiceMonitorResult_ResponseType_UTIL_IDLE_STEP;
  static inline bool ResponseType_IsValid(int value) {
    return ProfilerServiceMonitorResult_ResponseType_IsValid(value);
  }
  static constexpr ResponseType ResponseType_MIN =
    ProfilerServiceMonitorResult_ResponseType_ResponseType_MIN;
  static constexpr ResponseType ResponseType_MAX =
    ProfilerServiceMonitorResult_ResponseType_ResponseType_MAX;
  static constexpr int ResponseType_ARRAYSIZE =
    ProfilerServiceMonitorResult_ResponseType_ResponseType_ARRAYSIZE;
  static inline const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor*
  ResponseType_descriptor() {
    return ProfilerServiceMonitorResult_ResponseType_descriptor();
  }
  template<typename T>
  static inline const std::string& ResponseType_Name(T enum_t_value) {
    static_assert(::std::is_same<T, ResponseType>::value ||
      ::std::is_integral<T>::value,
      "Incorrect type passed to function ResponseType_Name.");
    return ProfilerServiceMonitorResult_ResponseType_Name(enum_t_value);
  }
  static inline bool ResponseType_Parse(const std::string& name,
      ResponseType* value) {
    return ProfilerServiceMonitorResult_ResponseType_Parse(name, value);
  }

  // accessors -------------------------------------------------------

  enum : int {
    kDeviceIdleTimePercentFieldNumber = 2,
    kMatrixUnitUtilizationPercentFieldNumber = 3,
    kStepTimeMsAvgFieldNumber = 4,
    kStepTimeMsMinFieldNumber = 5,
    kStepTimeMsMaxFieldNumber = 6,
    kInfeedPercentAvgFieldNumber = 7,
    kInfeedPercentMinFieldNumber = 8,
    kInfeedPercentMaxFieldNumber = 9,
    kResponseTypeFieldNumber = 1,
  };
  // double device_idle_time_percent = 2;
  void clear_device_idle_time_percent();
  double device_idle_time_percent() const;
  void set_device_idle_time_percent(double value);

  // double matrix_unit_utilization_percent = 3;
  void clear_matrix_unit_utilization_percent();
  double matrix_unit_utilization_percent() const;
  void set_matrix_unit_utilization_percent(double value);

  // double step_time_ms_avg = 4;
  void clear_step_time_ms_avg();
  double step_time_ms_avg() const;
  void set_step_time_ms_avg(double value);

  // double step_time_ms_min = 5;
  void clear_step_time_ms_min();
  double step_time_ms_min() const;
  void set_step_time_ms_min(double value);

  // double step_time_ms_max = 6;
  void clear_step_time_ms_max();
  double step_time_ms_max() const;
  void set_step_time_ms_max(double value);

  // double infeed_percent_avg = 7;
  void clear_infeed_percent_avg();
  double infeed_percent_avg() const;
  void set_infeed_percent_avg(double value);

  // double infeed_percent_min = 8;
  void clear_infeed_percent_min();
  double infeed_percent_min() const;
  void set_infeed_percent_min(double value);

  // double infeed_percent_max = 9;
  void clear_infeed_percent_max();
  double infeed_percent_max() const;
  void set_infeed_percent_max(double value);

  // .tensorflow.ProfilerServiceMonitorResult.ResponseType response_type = 1;
  void clear_response_type();
  ::tensorflow::ProfilerServiceMonitorResult_ResponseType response_type() const;
  void set_response_type(::tensorflow::ProfilerServiceMonitorResult_ResponseType value);

  // @@protoc_insertion_point(class_scope:tensorflow.ProfilerServiceMonitorResult)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  double device_idle_time_percent_;
  double matrix_unit_utilization_percent_;
  double step_time_ms_avg_;
  double step_time_ms_min_;
  double step_time_ms_max_;
  double infeed_percent_avg_;
  double infeed_percent_min_;
  double infeed_percent_max_;
  int response_type_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_tensorflow_2fcore_2fprofiler_2fprofiler_5fservice_5fmonitor_5fresult_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// ProfilerServiceMonitorResult

// .tensorflow.ProfilerServiceMonitorResult.ResponseType response_type = 1;
inline void ProfilerServiceMonitorResult::clear_response_type() {
  response_type_ = 0;
}
inline ::tensorflow::ProfilerServiceMonitorResult_ResponseType ProfilerServiceMonitorResult::response_type() const {
  // @@protoc_insertion_point(field_get:tensorflow.ProfilerServiceMonitorResult.response_type)
  return static_cast< ::tensorflow::ProfilerServiceMonitorResult_ResponseType >(response_type_);
}
inline void ProfilerServiceMonitorResult::set_response_type(::tensorflow::ProfilerServiceMonitorResult_ResponseType value) {
  
  response_type_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ProfilerServiceMonitorResult.response_type)
}

// double device_idle_time_percent = 2;
inline void ProfilerServiceMonitorResult::clear_device_idle_time_percent() {
  device_idle_time_percent_ = 0;
}
inline double ProfilerServiceMonitorResult::device_idle_time_percent() const {
  // @@protoc_insertion_point(field_get:tensorflow.ProfilerServiceMonitorResult.device_idle_time_percent)
  return device_idle_time_percent_;
}
inline void ProfilerServiceMonitorResult::set_device_idle_time_percent(double value) {
  
  device_idle_time_percent_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ProfilerServiceMonitorResult.device_idle_time_percent)
}

// double matrix_unit_utilization_percent = 3;
inline void ProfilerServiceMonitorResult::clear_matrix_unit_utilization_percent() {
  matrix_unit_utilization_percent_ = 0;
}
inline double ProfilerServiceMonitorResult::matrix_unit_utilization_percent() const {
  // @@protoc_insertion_point(field_get:tensorflow.ProfilerServiceMonitorResult.matrix_unit_utilization_percent)
  return matrix_unit_utilization_percent_;
}
inline void ProfilerServiceMonitorResult::set_matrix_unit_utilization_percent(double value) {
  
  matrix_unit_utilization_percent_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ProfilerServiceMonitorResult.matrix_unit_utilization_percent)
}

// double step_time_ms_avg = 4;
inline void ProfilerServiceMonitorResult::clear_step_time_ms_avg() {
  step_time_ms_avg_ = 0;
}
inline double ProfilerServiceMonitorResult::step_time_ms_avg() const {
  // @@protoc_insertion_point(field_get:tensorflow.ProfilerServiceMonitorResult.step_time_ms_avg)
  return step_time_ms_avg_;
}
inline void ProfilerServiceMonitorResult::set_step_time_ms_avg(double value) {
  
  step_time_ms_avg_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ProfilerServiceMonitorResult.step_time_ms_avg)
}

// double step_time_ms_min = 5;
inline void ProfilerServiceMonitorResult::clear_step_time_ms_min() {
  step_time_ms_min_ = 0;
}
inline double ProfilerServiceMonitorResult::step_time_ms_min() const {
  // @@protoc_insertion_point(field_get:tensorflow.ProfilerServiceMonitorResult.step_time_ms_min)
  return step_time_ms_min_;
}
inline void ProfilerServiceMonitorResult::set_step_time_ms_min(double value) {
  
  step_time_ms_min_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ProfilerServiceMonitorResult.step_time_ms_min)
}

// double step_time_ms_max = 6;
inline void ProfilerServiceMonitorResult::clear_step_time_ms_max() {
  step_time_ms_max_ = 0;
}
inline double ProfilerServiceMonitorResult::step_time_ms_max() const {
  // @@protoc_insertion_point(field_get:tensorflow.ProfilerServiceMonitorResult.step_time_ms_max)
  return step_time_ms_max_;
}
inline void ProfilerServiceMonitorResult::set_step_time_ms_max(double value) {
  
  step_time_ms_max_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ProfilerServiceMonitorResult.step_time_ms_max)
}

// double infeed_percent_avg = 7;
inline void ProfilerServiceMonitorResult::clear_infeed_percent_avg() {
  infeed_percent_avg_ = 0;
}
inline double ProfilerServiceMonitorResult::infeed_percent_avg() const {
  // @@protoc_insertion_point(field_get:tensorflow.ProfilerServiceMonitorResult.infeed_percent_avg)
  return infeed_percent_avg_;
}
inline void ProfilerServiceMonitorResult::set_infeed_percent_avg(double value) {
  
  infeed_percent_avg_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ProfilerServiceMonitorResult.infeed_percent_avg)
}

// double infeed_percent_min = 8;
inline void ProfilerServiceMonitorResult::clear_infeed_percent_min() {
  infeed_percent_min_ = 0;
}
inline double ProfilerServiceMonitorResult::infeed_percent_min() const {
  // @@protoc_insertion_point(field_get:tensorflow.ProfilerServiceMonitorResult.infeed_percent_min)
  return infeed_percent_min_;
}
inline void ProfilerServiceMonitorResult::set_infeed_percent_min(double value) {
  
  infeed_percent_min_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ProfilerServiceMonitorResult.infeed_percent_min)
}

// double infeed_percent_max = 9;
inline void ProfilerServiceMonitorResult::clear_infeed_percent_max() {
  infeed_percent_max_ = 0;
}
inline double ProfilerServiceMonitorResult::infeed_percent_max() const {
  // @@protoc_insertion_point(field_get:tensorflow.ProfilerServiceMonitorResult.infeed_percent_max)
  return infeed_percent_max_;
}
inline void ProfilerServiceMonitorResult::set_infeed_percent_max(double value) {
  
  infeed_percent_max_ = value;
  // @@protoc_insertion_point(field_set:tensorflow.ProfilerServiceMonitorResult.infeed_percent_max)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__

// @@protoc_insertion_point(namespace_scope)

}  // namespace tensorflow

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::tensorflow::ProfilerServiceMonitorResult_ResponseType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::tensorflow::ProfilerServiceMonitorResult_ResponseType>() {
  return ::tensorflow::ProfilerServiceMonitorResult_ResponseType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_tensorflow_2fcore_2fprofiler_2fprofiler_5fservice_5fmonitor_5fresult_2eproto
