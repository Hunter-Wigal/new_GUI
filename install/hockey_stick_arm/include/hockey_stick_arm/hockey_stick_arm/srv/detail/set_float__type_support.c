// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from hockey_stick_arm:srv/SetFloat.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "hockey_stick_arm/srv/detail/set_float__rosidl_typesupport_introspection_c.h"
#include "hockey_stick_arm/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "hockey_stick_arm/srv/detail/set_float__functions.h"
#include "hockey_stick_arm/srv/detail/set_float__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hockey_stick_arm__srv__SetFloat_Request__init(message_memory);
}

void hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_fini_function(void * message_memory)
{
  hockey_stick_arm__srv__SetFloat_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_message_member_array[1] = {
  {
    "value",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hockey_stick_arm__srv__SetFloat_Request, value),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_message_members = {
  "hockey_stick_arm__srv",  // message namespace
  "SetFloat_Request",  // message name
  1,  // number of fields
  sizeof(hockey_stick_arm__srv__SetFloat_Request),
  hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_message_member_array,  // message members
  hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_message_type_support_handle = {
  0,
  &hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hockey_stick_arm
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hockey_stick_arm, srv, SetFloat_Request)() {
  if (!hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_message_type_support_handle.typesupport_identifier) {
    hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hockey_stick_arm__srv__SetFloat_Request__rosidl_typesupport_introspection_c__SetFloat_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "hockey_stick_arm/srv/detail/set_float__rosidl_typesupport_introspection_c.h"
// already included above
// #include "hockey_stick_arm/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "hockey_stick_arm/srv/detail/set_float__functions.h"
// already included above
// #include "hockey_stick_arm/srv/detail/set_float__struct.h"


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  hockey_stick_arm__srv__SetFloat_Response__init(message_memory);
}

void hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_fini_function(void * message_memory)
{
  hockey_stick_arm__srv__SetFloat_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_message_member_array[2] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hockey_stick_arm__srv__SetFloat_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "message",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(hockey_stick_arm__srv__SetFloat_Response, message),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_message_members = {
  "hockey_stick_arm__srv",  // message namespace
  "SetFloat_Response",  // message name
  2,  // number of fields
  sizeof(hockey_stick_arm__srv__SetFloat_Response),
  hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_message_member_array,  // message members
  hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_message_type_support_handle = {
  0,
  &hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hockey_stick_arm
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hockey_stick_arm, srv, SetFloat_Response)() {
  if (!hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_message_type_support_handle.typesupport_identifier) {
    hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &hockey_stick_arm__srv__SetFloat_Response__rosidl_typesupport_introspection_c__SetFloat_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "hockey_stick_arm/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "hockey_stick_arm/srv/detail/set_float__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers hockey_stick_arm__srv__detail__set_float__rosidl_typesupport_introspection_c__SetFloat_service_members = {
  "hockey_stick_arm__srv",  // service namespace
  "SetFloat",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // hockey_stick_arm__srv__detail__set_float__rosidl_typesupport_introspection_c__SetFloat_Request_message_type_support_handle,
  NULL  // response message
  // hockey_stick_arm__srv__detail__set_float__rosidl_typesupport_introspection_c__SetFloat_Response_message_type_support_handle
};

static rosidl_service_type_support_t hockey_stick_arm__srv__detail__set_float__rosidl_typesupport_introspection_c__SetFloat_service_type_support_handle = {
  0,
  &hockey_stick_arm__srv__detail__set_float__rosidl_typesupport_introspection_c__SetFloat_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hockey_stick_arm, srv, SetFloat_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hockey_stick_arm, srv, SetFloat_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_hockey_stick_arm
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hockey_stick_arm, srv, SetFloat)() {
  if (!hockey_stick_arm__srv__detail__set_float__rosidl_typesupport_introspection_c__SetFloat_service_type_support_handle.typesupport_identifier) {
    hockey_stick_arm__srv__detail__set_float__rosidl_typesupport_introspection_c__SetFloat_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)hockey_stick_arm__srv__detail__set_float__rosidl_typesupport_introspection_c__SetFloat_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hockey_stick_arm, srv, SetFloat_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, hockey_stick_arm, srv, SetFloat_Response)()->data;
  }

  return &hockey_stick_arm__srv__detail__set_float__rosidl_typesupport_introspection_c__SetFloat_service_type_support_handle;
}
