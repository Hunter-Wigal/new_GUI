// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from theora_webcams:msg/Resolution.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "theora_webcams/msg/detail/resolution__rosidl_typesupport_introspection_c.h"
#include "theora_webcams/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "theora_webcams/msg/detail/resolution__functions.h"
#include "theora_webcams/msg/detail/resolution__struct.h"


// Include directives for member types
// Member `framerates`
#include "theora_webcams/msg/framerate.h"
// Member `framerates`
#include "theora_webcams/msg/detail/framerate__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  theora_webcams__msg__Resolution__init(message_memory);
}

void theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_fini_function(void * message_memory)
{
  theora_webcams__msg__Resolution__fini(message_memory);
}

size_t theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__size_function__Resolution__framerates(
  const void * untyped_member)
{
  const theora_webcams__msg__Framerate__Sequence * member =
    (const theora_webcams__msg__Framerate__Sequence *)(untyped_member);
  return member->size;
}

const void * theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__get_const_function__Resolution__framerates(
  const void * untyped_member, size_t index)
{
  const theora_webcams__msg__Framerate__Sequence * member =
    (const theora_webcams__msg__Framerate__Sequence *)(untyped_member);
  return &member->data[index];
}

void * theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__get_function__Resolution__framerates(
  void * untyped_member, size_t index)
{
  theora_webcams__msg__Framerate__Sequence * member =
    (theora_webcams__msg__Framerate__Sequence *)(untyped_member);
  return &member->data[index];
}

void theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__fetch_function__Resolution__framerates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const theora_webcams__msg__Framerate * item =
    ((const theora_webcams__msg__Framerate *)
    theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__get_const_function__Resolution__framerates(untyped_member, index));
  theora_webcams__msg__Framerate * value =
    (theora_webcams__msg__Framerate *)(untyped_value);
  *value = *item;
}

void theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__assign_function__Resolution__framerates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  theora_webcams__msg__Framerate * item =
    ((theora_webcams__msg__Framerate *)
    theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__get_function__Resolution__framerates(untyped_member, index));
  const theora_webcams__msg__Framerate * value =
    (const theora_webcams__msg__Framerate *)(untyped_value);
  *item = *value;
}

bool theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__resize_function__Resolution__framerates(
  void * untyped_member, size_t size)
{
  theora_webcams__msg__Framerate__Sequence * member =
    (theora_webcams__msg__Framerate__Sequence *)(untyped_member);
  theora_webcams__msg__Framerate__Sequence__fini(member);
  return theora_webcams__msg__Framerate__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_message_member_array[3] = {
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams__msg__Resolution, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams__msg__Resolution, height),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "framerates",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams__msg__Resolution, framerates),  // bytes offset in struct
    NULL,  // default value
    theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__size_function__Resolution__framerates,  // size() function pointer
    theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__get_const_function__Resolution__framerates,  // get_const(index) function pointer
    theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__get_function__Resolution__framerates,  // get(index) function pointer
    theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__fetch_function__Resolution__framerates,  // fetch(index, &value) function pointer
    theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__assign_function__Resolution__framerates,  // assign(index, value) function pointer
    theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__resize_function__Resolution__framerates  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_message_members = {
  "theora_webcams__msg",  // message namespace
  "Resolution",  // message name
  3,  // number of fields
  sizeof(theora_webcams__msg__Resolution),
  theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_message_member_array,  // message members
  theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_init_function,  // function to initialize message memory (memory has to be allocated)
  theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_message_type_support_handle = {
  0,
  &theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_theora_webcams
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, msg, Resolution)() {
  theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, msg, Framerate)();
  if (!theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_message_type_support_handle.typesupport_identifier) {
    theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &theora_webcams__msg__Resolution__rosidl_typesupport_introspection_c__Resolution_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
