// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: google/logging/type/log_severity.proto

#include "google/logging/type/log_severity.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
namespace google {
namespace logging {
namespace type {
}  // namespace type
}  // namespace logging
}  // namespace google
static constexpr ::PROTOBUF_NAMESPACE_ID::Metadata* file_level_metadata_google_2flogging_2ftype_2flog_5fseverity_2eproto = nullptr;
static const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* file_level_enum_descriptors_google_2flogging_2ftype_2flog_5fseverity_2eproto[1];
static constexpr ::PROTOBUF_NAMESPACE_ID::ServiceDescriptor const** file_level_service_descriptors_google_2flogging_2ftype_2flog_5fseverity_2eproto = nullptr;
const ::PROTOBUF_NAMESPACE_ID::uint32 TableStruct_google_2flogging_2ftype_2flog_5fseverity_2eproto::offsets[1] = {};
static constexpr ::PROTOBUF_NAMESPACE_ID::internal::MigrationSchema* schemas = nullptr;
static constexpr ::PROTOBUF_NAMESPACE_ID::Message* const* file_default_instances = nullptr;

const char descriptor_table_protodef_google_2flogging_2ftype_2flog_5fseverity_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n&google/logging/type/log_severity.proto"
  "\022\023google.logging.type\032\034google/api/annota"
  "tions.proto*\202\001\n\013LogSeverity\022\013\n\007DEFAULT\020\000"
  "\022\t\n\005DEBUG\020d\022\t\n\004INFO\020\310\001\022\013\n\006NOTICE\020\254\002\022\014\n\007W"
  "ARNING\020\220\003\022\n\n\005ERROR\020\364\003\022\r\n\010CRITICAL\020\330\004\022\n\n\005"
  "ALERT\020\274\005\022\016\n\tEMERGENCY\020\240\006B\237\001\n\027com.google."
  "logging.typeB\020LogSeverityProtoP\001Z8google"
  ".golang.org/genproto/googleapis/logging/"
  "type;ltype\252\002\031Google.Cloud.Logging.Type\312\002"
  "\031Google\\Cloud\\Logging\\Typeb\006proto3"
  ;
static const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable*const descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto_deps[1] = {
  &::descriptor_table_google_2fapi_2fannotations_2eproto,
};
static ::PROTOBUF_NAMESPACE_ID::internal::SCCInfoBase*const descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto_sccs[1] = {
};
static ::PROTOBUF_NAMESPACE_ID::internal::once_flag descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto_once;
static bool descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto_initialized = false;
const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto = {
  &descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto_initialized, descriptor_table_protodef_google_2flogging_2ftype_2flog_5fseverity_2eproto, "google/logging/type/log_severity.proto", 394,
  &descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto_once, descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto_sccs, descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto_deps, 0, 1,
  schemas, file_default_instances, TableStruct_google_2flogging_2ftype_2flog_5fseverity_2eproto::offsets,
  file_level_metadata_google_2flogging_2ftype_2flog_5fseverity_2eproto, 0, file_level_enum_descriptors_google_2flogging_2ftype_2flog_5fseverity_2eproto, file_level_service_descriptors_google_2flogging_2ftype_2flog_5fseverity_2eproto,
};

// Force running AddDescriptors() at dynamic initialization time.
static bool dynamic_init_dummy_google_2flogging_2ftype_2flog_5fseverity_2eproto = (  ::PROTOBUF_NAMESPACE_ID::internal::AddDescriptors(&descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto), true);
namespace google {
namespace logging {
namespace type {
const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* LogSeverity_descriptor() {
  ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&descriptor_table_google_2flogging_2ftype_2flog_5fseverity_2eproto);
  return file_level_enum_descriptors_google_2flogging_2ftype_2flog_5fseverity_2eproto[0];
}
bool LogSeverity_IsValid(int value) {
  switch (value) {
    case 0:
    case 100:
    case 200:
    case 300:
    case 400:
    case 500:
    case 600:
    case 700:
    case 800:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)
}  // namespace type
}  // namespace logging
}  // namespace google
PROTOBUF_NAMESPACE_OPEN
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>