// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from theora_webcams:msg/VideoFormatList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "theora_webcams/msg/detail/video_format_list__rosidl_typesupport_introspection_c.h"
#include "theora_webcams/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "theora_webcams/msg/detail/video_format_list__functions.h"
#include "theora_webcams/msg/detail/video_format_list__struct.h"


// Include directives for member types
// Member `formats`
#include "theora_webcams/msg/video_format.h"
// Member `formats`
#include "theora_webcams/msg/detail/video_format__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  theora_webcams__msg__VideoFormatList__init(message_memory);
}

void theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_fini_function(void * message_memory)
{
  theora_webcams__msg__VideoFormatList__fini(message_memory);
}

size_t theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__size_function__VideoFormatList__formats(
  const void * untyped_member)
{
  const theora_webcams__msg__VideoFormat__Sequence * member =
    (const theora_webcams__msg__VideoFormat__Sequence *)(untyped_member);
  return member->size;
}

const void * theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__get_const_function__VideoFormatList__formats(
  const void * untyped_member, size_t index)
{
  const theora_webcams__msg__VideoFormat__Sequence * member =
    (const theora_webcams__msg__VideoFormat__Sequence *)(untyped_member);
  return &member->data[index];
}

void * theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__get_function__VideoFormatList__formats(
  void * untyped_member, size_t index)
{
  theora_webcams__msg__VideoFormat__Sequence * member =
    (theora_webcams__msg__VideoFormat__Sequence *)(untyped_member);
  return &member->data[index];
}

void theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__fetch_function__VideoFormatList__formats(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const theora_webcams__msg__VideoFormat * item =
    ((const theora_webcams__msg__VideoFormat *)
    theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__get_const_function__VideoFormatList__formats(untyped_member, index));
  theora_webcams__msg__VideoFormat * value =
    (theora_webcams__msg__VideoFormat *)(untyped_value);
  *value = *item;
}

void theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__assign_function__VideoFormatList__formats(
  void * untyped_member, size_t index, const void * untyped_value)
{
  theora_webcams__msg__VideoFormat * item =
    ((theora_webcams__msg__VideoFormat *)
    theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__get_function__VideoFormatList__formats(untyped_member, index));
  const theora_webcams__msg__VideoFormat * value =
    (const theora_webcams__msg__VideoFormat *)(untyped_value);
  *item = *value;
}

bool theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__resize_function__VideoFormatList__formats(
  void * untyped_member, size_t size)
{
  theora_webcams__msg__VideoFormat__Sequence * member =
    (theora_webcams__msg__VideoFormat__Sequence *)(untyped_member);
  theora_webcams__msg__VideoFormat__Sequence__fini(member);
  return theora_webcams__msg__VideoFormat__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_message_member_array[1] = {
  {
    "formats",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams__msg__VideoFormatList, formats),  // bytes offset in struct
    NULL,  // default value
    theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__size_function__VideoFormatList__formats,  // size() function pointer
    theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__get_const_function__VideoFormatList__formats,  // get_const(index) function pointer
    theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__get_function__VideoFormatList__formats,  // get(index) function pointer
    theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__fetch_function__VideoFormatList__formats,  // fetch(index, &value) function pointer
    theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__assign_function__VideoFormatList__formats,  // assign(index, value) function pointer
    theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__resize_function__VideoFormatList__formats  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_message_members = {
  "theora_webcams__msg",  // message namespace
  "VideoFormatList",  // message name
  1,  // number of fields
  sizeof(theora_webcams__msg__VideoFormatList),
  theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_message_member_array,  // message members
  theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_init_function,  // function to initialize message memory (memory has to be allocated)
  theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_message_type_support_handle = {
  0,
  &theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_theora_webcams
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, msg, VideoFormatList)() {
  theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, theora_webcams, msg, VideoFormat)();
  if (!theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_message_type_support_handle.typesupport_identifier) {
    theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &theora_webcams__msg__VideoFormatList__rosidl_typesupport_introspection_c__VideoFormatList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
