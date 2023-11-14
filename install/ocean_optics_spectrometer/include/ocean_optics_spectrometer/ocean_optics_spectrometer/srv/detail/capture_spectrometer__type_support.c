// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__rosidl_typesupport_introspection_c.h"
#include "ocean_optics_spectrometer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__functions.h"
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__init(message_memory);
}

void ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_fini_function(void * message_memory)
{
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_message_member_array[1] = {
  {
    "integration_time",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request, integration_time),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_message_members = {
  "ocean_optics_spectrometer__srv",  // message namespace
  "CaptureSpectrometer_Request",  // message name
  1,  // number of fields
  sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request),
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_message_member_array,  // message members
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_message_type_support_handle = {
  0,
  &ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ocean_optics_spectrometer
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)() {
  if (!ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_message_type_support_handle.typesupport_identifier) {
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ocean_optics_spectrometer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__functions.h"
// already included above
// #include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.h"


// Include directives for member types
// Member `wavelengths`
// Member `intensities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__init(message_memory);
}

void ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_fini_function(void * message_memory)
{
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__fini(message_memory);
}

size_t ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__size_function__CaptureSpectrometer_Response__wavelengths(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_const_function__CaptureSpectrometer_Response__wavelengths(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_function__CaptureSpectrometer_Response__wavelengths(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__fetch_function__CaptureSpectrometer_Response__wavelengths(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_const_function__CaptureSpectrometer_Response__wavelengths(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__assign_function__CaptureSpectrometer_Response__wavelengths(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_function__CaptureSpectrometer_Response__wavelengths(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__resize_function__CaptureSpectrometer_Response__wavelengths(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

size_t ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__size_function__CaptureSpectrometer_Response__intensities(
  const void * untyped_member)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return member->size;
}

const void * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_const_function__CaptureSpectrometer_Response__intensities(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__double__Sequence * member =
    (const rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_function__CaptureSpectrometer_Response__intensities(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  return &member->data[index];
}

void ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__fetch_function__CaptureSpectrometer_Response__intensities(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const double * item =
    ((const double *)
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_const_function__CaptureSpectrometer_Response__intensities(untyped_member, index));
  double * value =
    (double *)(untyped_value);
  *value = *item;
}

void ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__assign_function__CaptureSpectrometer_Response__intensities(
  void * untyped_member, size_t index, const void * untyped_value)
{
  double * item =
    ((double *)
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_function__CaptureSpectrometer_Response__intensities(untyped_member, index));
  const double * value =
    (const double *)(untyped_value);
  *item = *value;
}

bool ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__resize_function__CaptureSpectrometer_Response__intensities(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__double__Sequence * member =
    (rosidl_runtime_c__double__Sequence *)(untyped_member);
  rosidl_runtime_c__double__Sequence__fini(member);
  return rosidl_runtime_c__double__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_message_member_array[2] = {
  {
    "wavelengths",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response, wavelengths),  // bytes offset in struct
    NULL,  // default value
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__size_function__CaptureSpectrometer_Response__wavelengths,  // size() function pointer
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_const_function__CaptureSpectrometer_Response__wavelengths,  // get_const(index) function pointer
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_function__CaptureSpectrometer_Response__wavelengths,  // get(index) function pointer
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__fetch_function__CaptureSpectrometer_Response__wavelengths,  // fetch(index, &value) function pointer
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__assign_function__CaptureSpectrometer_Response__wavelengths,  // assign(index, value) function pointer
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__resize_function__CaptureSpectrometer_Response__wavelengths  // resize(index) function pointer
  },
  {
    "intensities",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response, intensities),  // bytes offset in struct
    NULL,  // default value
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__size_function__CaptureSpectrometer_Response__intensities,  // size() function pointer
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_const_function__CaptureSpectrometer_Response__intensities,  // get_const(index) function pointer
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__get_function__CaptureSpectrometer_Response__intensities,  // get(index) function pointer
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__fetch_function__CaptureSpectrometer_Response__intensities,  // fetch(index, &value) function pointer
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__assign_function__CaptureSpectrometer_Response__intensities,  // assign(index, value) function pointer
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__resize_function__CaptureSpectrometer_Response__intensities  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_message_members = {
  "ocean_optics_spectrometer__srv",  // message namespace
  "CaptureSpectrometer_Response",  // message name
  2,  // number of fields
  sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response),
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_message_member_array,  // message members
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_message_type_support_handle = {
  0,
  &ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ocean_optics_spectrometer
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)() {
  if (!ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_message_type_support_handle.typesupport_identifier) {
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ocean_optics_spectrometer/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ocean_optics_spectrometer__srv__detail__capture_spectrometer__rosidl_typesupport_introspection_c__CaptureSpectrometer_service_members = {
  "ocean_optics_spectrometer__srv",  // service namespace
  "CaptureSpectrometer",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ocean_optics_spectrometer__srv__detail__capture_spectrometer__rosidl_typesupport_introspection_c__CaptureSpectrometer_Request_message_type_support_handle,
  NULL  // response message
  // ocean_optics_spectrometer__srv__detail__capture_spectrometer__rosidl_typesupport_introspection_c__CaptureSpectrometer_Response_message_type_support_handle
};

static rosidl_service_type_support_t ocean_optics_spectrometer__srv__detail__capture_spectrometer__rosidl_typesupport_introspection_c__CaptureSpectrometer_service_type_support_handle = {
  0,
  &ocean_optics_spectrometer__srv__detail__capture_spectrometer__rosidl_typesupport_introspection_c__CaptureSpectrometer_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ocean_optics_spectrometer
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocean_optics_spectrometer, srv, CaptureSpectrometer)() {
  if (!ocean_optics_spectrometer__srv__detail__capture_spectrometer__rosidl_typesupport_introspection_c__CaptureSpectrometer_service_type_support_handle.typesupport_identifier) {
    ocean_optics_spectrometer__srv__detail__capture_spectrometer__rosidl_typesupport_introspection_c__CaptureSpectrometer_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ocean_optics_spectrometer__srv__detail__capture_spectrometer__rosidl_typesupport_introspection_c__CaptureSpectrometer_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)()->data;
  }

  return &ocean_optics_spectrometer__srv__detail__capture_spectrometer__rosidl_typesupport_introspection_c__CaptureSpectrometer_service_type_support_handle;
}
