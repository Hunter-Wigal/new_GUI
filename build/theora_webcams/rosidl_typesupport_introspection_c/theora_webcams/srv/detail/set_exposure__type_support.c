// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from theora_webcams:srv/SetExposure.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "theora_webcams/srv/detail/set_exposure__rosidl_typesupport_introspection_c.h"
#include "theora_webcams/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "theora_webcams/srv/detail/set_exposure__functions.h"
#include "theora_webcams/srv/detail/set_exposure__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  theora_webcams__srv__SetExposure_Request__init(message_memory);
}

void theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_fini_function(void * message_memory)
{
  theora_webcams__srv__SetExposure_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_message_member_array[1] = {
  {
    "exposure",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams__srv__SetExposure_Request, exposure),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_message_members = {
  "theora_webcams__srv",  // message namespace
  "SetExposure_Request",  // message name
  1,  // number of fields
  sizeof(theora_webcams__srv__SetExposure_Request),
  theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_message_member_array,  // message members
  theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_message_type_support_handle = {
  0,
  &theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_theora_webcams
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, srv, SetExposure_Request)() {
  if (!theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_message_type_support_handle.typesupport_identifier) {
    theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &theora_webcams__srv__SetExposure_Request__rosidl_typesupport_introspection_c__SetExposure_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "theora_webcams/srv/detail/set_exposure__rosidl_typesupport_introspection_c.h"
// already included above
// #include "theora_webcams/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "theora_webcams/srv/detail/set_exposure__functions.h"
// already included above
// #include "theora_webcams/srv/detail/set_exposure__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  theora_webcams__srv__SetExposure_Response__init(message_memory);
}

void theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_fini_function(void * message_memory)
{
  theora_webcams__srv__SetExposure_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_message_member_array[1] = {
  {
    "success",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams__srv__SetExposure_Response, success),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_message_members = {
  "theora_webcams__srv",  // message namespace
  "SetExposure_Response",  // message name
  1,  // number of fields
  sizeof(theora_webcams__srv__SetExposure_Response),
  theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_message_member_array,  // message members
  theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_message_type_support_handle = {
  0,
  &theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_theora_webcams
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, srv, SetExposure_Response)() {
  if (!theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_message_type_support_handle.typesupport_identifier) {
    theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &theora_webcams__srv__SetExposure_Response__rosidl_typesupport_introspection_c__SetExposure_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "theora_webcams/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "theora_webcams/srv/detail/set_exposure__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers theora_webcams__srv__detail__set_exposure__rosidl_typesupport_introspection_c__SetExposure_service_members = {
  "theora_webcams__srv",  // service namespace
  "SetExposure",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // theora_webcams__srv__detail__set_exposure__rosidl_typesupport_introspection_c__SetExposure_Request_message_type_support_handle,
  NULL  // response message
  // theora_webcams__srv__detail__set_exposure__rosidl_typesupport_introspection_c__SetExposure_Response_message_type_support_handle
};

static rosidl_service_type_support_t theora_webcams__srv__detail__set_exposure__rosidl_typesupport_introspection_c__SetExposure_service_type_support_handle = {
  0,
  &theora_webcams__srv__detail__set_exposure__rosidl_typesupport_introspection_c__SetExposure_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, srv, SetExposure_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, srv, SetExposure_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_theora_webcams
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, srv, SetExposure)() {
  if (!theora_webcams__srv__detail__set_exposure__rosidl_typesupport_introspection_c__SetExposure_service_type_support_handle.typesupport_identifier) {
    theora_webcams__srv__detail__set_exposure__rosidl_typesupport_introspection_c__SetExposure_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)theora_webcams__srv__detail__set_exposure__rosidl_typesupport_introspection_c__SetExposure_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, srv, SetExposure_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, srv, SetExposure_Response)()->data;
  }

  return &theora_webcams__srv__detail__set_exposure__rosidl_typesupport_introspection_c__SetExposure_service_type_support_handle;
}