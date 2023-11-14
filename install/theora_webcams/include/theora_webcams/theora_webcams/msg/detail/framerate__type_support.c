// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from theora_webcams:msg/Framerate.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "theora_webcams/msg/detail/framerate__rosidl_typesupport_introspection_c.h"
#include "theora_webcams/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "theora_webcams/msg/detail/framerate__functions.h"
#include "theora_webcams/msg/detail/framerate__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  theora_webcams__msg__Framerate__init(message_memory);
}

void theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_fini_function(void * message_memory)
{
  theora_webcams__msg__Framerate__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_message_member_array[2] = {
  {
    "numerator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams__msg__Framerate, numerator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "denominator",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams__msg__Framerate, denominator),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_message_members = {
  "theora_webcams__msg",  // message namespace
  "Framerate",  // message name
  2,  // number of fields
  sizeof(theora_webcams__msg__Framerate),
  theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_message_member_array,  // message members
  theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_init_function,  // function to initialize message memory (memory has to be allocated)
  theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_message_type_support_handle = {
  0,
  &theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_theora_webcams
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, msg, Framerate)() {
  if (!theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_message_type_support_handle.typesupport_identifier) {
    theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &theora_webcams__msg__Framerate__rosidl_typesupport_introspection_c__Framerate_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
