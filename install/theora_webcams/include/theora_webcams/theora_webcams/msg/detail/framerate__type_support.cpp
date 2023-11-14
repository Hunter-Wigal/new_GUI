// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from theora_webcams:msg/Framerate.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "theora_webcams/msg/detail/framerate__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace theora_webcams
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Framerate_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) theora_webcams::msg::Framerate(_init);
}

void Framerate_fini_function(void * message_memory)
{
  auto typed_message = static_cast<theora_webcams::msg::Framerate *>(message_memory);
  typed_message->~Framerate();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Framerate_message_member_array[2] = {
  {
    "numerator",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams::msg::Framerate, numerator),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "denominator",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams::msg::Framerate, denominator),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Framerate_message_members = {
  "theora_webcams::msg",  // message namespace
  "Framerate",  // message name
  2,  // number of fields
  sizeof(theora_webcams::msg::Framerate),
  Framerate_message_member_array,  // message members
  Framerate_init_function,  // function to initialize message memory (memory has to be allocated)
  Framerate_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Framerate_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Framerate_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace theora_webcams


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<theora_webcams::msg::Framerate>()
{
  return &::theora_webcams::msg::rosidl_typesupport_introspection_cpp::Framerate_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, theora_webcams, msg, Framerate)() {
  return &::theora_webcams::msg::rosidl_typesupport_introspection_cpp::Framerate_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
