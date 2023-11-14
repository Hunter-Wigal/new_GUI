// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from science_servo_control:srv/ReadDrumPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "science_servo_control/srv/detail/read_drum_position__rosidl_typesupport_introspection_c.h"
#include "science_servo_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "science_servo_control/srv/detail/read_drum_position__functions.h"
#include "science_servo_control/srv/detail/read_drum_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  science_servo_control__srv__ReadDrumPosition_Request__init(message_memory);
}

void science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_fini_function(void * message_memory)
{
  science_servo_control__srv__ReadDrumPosition_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_message_member_array[1] = {
  {
    "drum_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(science_servo_control__srv__ReadDrumPosition_Request, drum_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_message_members = {
  "science_servo_control__srv",  // message namespace
  "ReadDrumPosition_Request",  // message name
  1,  // number of fields
  sizeof(science_servo_control__srv__ReadDrumPosition_Request),
  science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_message_member_array,  // message members
  science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_message_type_support_handle = {
  0,
  &science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_science_servo_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, ReadDrumPosition_Request)() {
  if (!science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_message_type_support_handle.typesupport_identifier) {
    science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &science_servo_control__srv__ReadDrumPosition_Request__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "science_servo_control/srv/detail/read_drum_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "science_servo_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "science_servo_control/srv/detail/read_drum_position__functions.h"
// already included above
// #include "science_servo_control/srv/detail/read_drum_position__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  science_servo_control__srv__ReadDrumPosition_Response__init(message_memory);
}

void science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_fini_function(void * message_memory)
{
  science_servo_control__srv__ReadDrumPosition_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_message_member_array[1] = {
  {
    "drum_pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(science_servo_control__srv__ReadDrumPosition_Response, drum_pos),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_message_members = {
  "science_servo_control__srv",  // message namespace
  "ReadDrumPosition_Response",  // message name
  1,  // number of fields
  sizeof(science_servo_control__srv__ReadDrumPosition_Response),
  science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_message_member_array,  // message members
  science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_message_type_support_handle = {
  0,
  &science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_science_servo_control
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, ReadDrumPosition_Response)() {
  if (!science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_message_type_support_handle.typesupport_identifier) {
    science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &science_servo_control__srv__ReadDrumPosition_Response__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "science_servo_control/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "science_servo_control/srv/detail/read_drum_position__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers science_servo_control__srv__detail__read_drum_position__rosidl_typesupport_introspection_c__ReadDrumPosition_service_members = {
  "science_servo_control__srv",  // service namespace
  "ReadDrumPosition",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // science_servo_control__srv__detail__read_drum_position__rosidl_typesupport_introspection_c__ReadDrumPosition_Request_message_type_support_handle,
  NULL  // response message
  // science_servo_control__srv__detail__read_drum_position__rosidl_typesupport_introspection_c__ReadDrumPosition_Response_message_type_support_handle
};

static rosidl_service_type_support_t science_servo_control__srv__detail__read_drum_position__rosidl_typesupport_introspection_c__ReadDrumPosition_service_type_support_handle = {
  0,
  &science_servo_control__srv__detail__read_drum_position__rosidl_typesupport_introspection_c__ReadDrumPosition_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, ReadDrumPosition_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, ReadDrumPosition_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_science_servo_control
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, ReadDrumPosition)() {
  if (!science_servo_control__srv__detail__read_drum_position__rosidl_typesupport_introspection_c__ReadDrumPosition_service_type_support_handle.typesupport_identifier) {
    science_servo_control__srv__detail__read_drum_position__rosidl_typesupport_introspection_c__ReadDrumPosition_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)science_servo_control__srv__detail__read_drum_position__rosidl_typesupport_introspection_c__ReadDrumPosition_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, ReadDrumPosition_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, science_servo_control, srv, ReadDrumPosition_Response)()->data;
  }

  return &science_servo_control__srv__detail__read_drum_position__rosidl_typesupport_introspection_c__ReadDrumPosition_service_type_support_handle;
}
