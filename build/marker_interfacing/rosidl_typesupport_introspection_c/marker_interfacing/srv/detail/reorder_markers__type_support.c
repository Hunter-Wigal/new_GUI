// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marker_interfacing:srv/ReorderMarkers.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marker_interfacing/srv/detail/reorder_markers__rosidl_typesupport_introspection_c.h"
#include "marker_interfacing/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marker_interfacing/srv/detail/reorder_markers__functions.h"
#include "marker_interfacing/srv/detail/reorder_markers__struct.h"


// Include directives for member types
// Member `marker_ids`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marker_interfacing__srv__ReorderMarkers_Request__init(message_memory);
}

void marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_fini_function(void * message_memory)
{
  marker_interfacing__srv__ReorderMarkers_Request__fini(message_memory);
}

size_t marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__size_function__ReorderMarkers_Request__marker_ids(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__get_const_function__ReorderMarkers_Request__marker_ids(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__get_function__ReorderMarkers_Request__marker_ids(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__fetch_function__ReorderMarkers_Request__marker_ids(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__get_const_function__ReorderMarkers_Request__marker_ids(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__assign_function__ReorderMarkers_Request__marker_ids(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__get_function__ReorderMarkers_Request__marker_ids(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__resize_function__ReorderMarkers_Request__marker_ids(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_message_member_array[1] = {
  {
    "marker_ids",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marker_interfacing__srv__ReorderMarkers_Request, marker_ids),  // bytes offset in struct
    NULL,  // default value
    marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__size_function__ReorderMarkers_Request__marker_ids,  // size() function pointer
    marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__get_const_function__ReorderMarkers_Request__marker_ids,  // get_const(index) function pointer
    marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__get_function__ReorderMarkers_Request__marker_ids,  // get(index) function pointer
    marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__fetch_function__ReorderMarkers_Request__marker_ids,  // fetch(index, &value) function pointer
    marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__assign_function__ReorderMarkers_Request__marker_ids,  // assign(index, value) function pointer
    marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__resize_function__ReorderMarkers_Request__marker_ids  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_message_members = {
  "marker_interfacing__srv",  // message namespace
  "ReorderMarkers_Request",  // message name
  1,  // number of fields
  sizeof(marker_interfacing__srv__ReorderMarkers_Request),
  marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_message_member_array,  // message members
  marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_message_type_support_handle = {
  0,
  &marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marker_interfacing
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marker_interfacing, srv, ReorderMarkers_Request)() {
  if (!marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_message_type_support_handle.typesupport_identifier) {
    marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marker_interfacing__srv__ReorderMarkers_Request__rosidl_typesupport_introspection_c__ReorderMarkers_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "marker_interfacing/srv/detail/reorder_markers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "marker_interfacing/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "marker_interfacing/srv/detail/reorder_markers__functions.h"
// already included above
// #include "marker_interfacing/srv/detail/reorder_markers__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marker_interfacing__srv__ReorderMarkers_Response__init(message_memory);
}

void marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_fini_function(void * message_memory)
{
  marker_interfacing__srv__ReorderMarkers_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marker_interfacing__srv__ReorderMarkers_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_message_members = {
  "marker_interfacing__srv",  // message namespace
  "ReorderMarkers_Response",  // message name
  1,  // number of fields
  sizeof(marker_interfacing__srv__ReorderMarkers_Response),
  marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_message_member_array,  // message members
  marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_message_type_support_handle = {
  0,
  &marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marker_interfacing
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marker_interfacing, srv, ReorderMarkers_Response)() {
  if (!marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_message_type_support_handle.typesupport_identifier) {
    marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marker_interfacing__srv__ReorderMarkers_Response__rosidl_typesupport_introspection_c__ReorderMarkers_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "marker_interfacing/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "marker_interfacing/srv/detail/reorder_markers__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers marker_interfacing__srv__detail__reorder_markers__rosidl_typesupport_introspection_c__ReorderMarkers_service_members = {
  "marker_interfacing__srv",  // service namespace
  "ReorderMarkers",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // marker_interfacing__srv__detail__reorder_markers__rosidl_typesupport_introspection_c__ReorderMarkers_Request_message_type_support_handle,
  NULL  // response message
  // marker_interfacing__srv__detail__reorder_markers__rosidl_typesupport_introspection_c__ReorderMarkers_Response_message_type_support_handle
};

static rosidl_service_type_support_t marker_interfacing__srv__detail__reorder_markers__rosidl_typesupport_introspection_c__ReorderMarkers_service_type_support_handle = {
  0,
  &marker_interfacing__srv__detail__reorder_markers__rosidl_typesupport_introspection_c__ReorderMarkers_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marker_interfacing, srv, ReorderMarkers_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marker_interfacing, srv, ReorderMarkers_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marker_interfacing
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marker_interfacing, srv, ReorderMarkers)() {
  if (!marker_interfacing__srv__detail__reorder_markers__rosidl_typesupport_introspection_c__ReorderMarkers_service_type_support_handle.typesupport_identifier) {
    marker_interfacing__srv__detail__reorder_markers__rosidl_typesupport_introspection_c__ReorderMarkers_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)marker_interfacing__srv__detail__reorder_markers__rosidl_typesupport_introspection_c__ReorderMarkers_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marker_interfacing, srv, ReorderMarkers_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marker_interfacing, srv, ReorderMarkers_Response)()->data;
  }

  return &marker_interfacing__srv__detail__reorder_markers__rosidl_typesupport_introspection_c__ReorderMarkers_service_type_support_handle;
}
