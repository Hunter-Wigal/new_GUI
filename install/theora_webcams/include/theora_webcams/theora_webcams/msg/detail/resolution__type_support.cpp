// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from theora_webcams:msg/Resolution.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "theora_webcams/msg/detail/resolution__struct.hpp"
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

void Resolution_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) theora_webcams::msg::Resolution(_init);
}

void Resolution_fini_function(void * message_memory)
{
  auto typed_message = static_cast<theora_webcams::msg::Resolution *>(message_memory);
  typed_message->~Resolution();
}

size_t size_function__Resolution__framerates(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<theora_webcams::msg::Framerate> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Resolution__framerates(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<theora_webcams::msg::Framerate> *>(untyped_member);
  return &member[index];
}

void * get_function__Resolution__framerates(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<theora_webcams::msg::Framerate> *>(untyped_member);
  return &member[index];
}

void fetch_function__Resolution__framerates(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const theora_webcams::msg::Framerate *>(
    get_const_function__Resolution__framerates(untyped_member, index));
  auto & value = *reinterpret_cast<theora_webcams::msg::Framerate *>(untyped_value);
  value = item;
}

void assign_function__Resolution__framerates(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<theora_webcams::msg::Framerate *>(
    get_function__Resolution__framerates(untyped_member, index));
  const auto & value = *reinterpret_cast<const theora_webcams::msg::Framerate *>(untyped_value);
  item = value;
}

void resize_function__Resolution__framerates(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<theora_webcams::msg::Framerate> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Resolution_message_member_array[3] = {
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams::msg::Resolution, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "height",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams::msg::Resolution, height),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "framerates",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<theora_webcams::msg::Framerate>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams::msg::Resolution, framerates),  // bytes offset in struct
    nullptr,  // default value
    size_function__Resolution__framerates,  // size() function pointer
    get_const_function__Resolution__framerates,  // get_const(index) function pointer
    get_function__Resolution__framerates,  // get(index) function pointer
    fetch_function__Resolution__framerates,  // fetch(index, &value) function pointer
    assign_function__Resolution__framerates,  // assign(index, value) function pointer
    resize_function__Resolution__framerates  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Resolution_message_members = {
  "theora_webcams::msg",  // message namespace
  "Resolution",  // message name
  3,  // number of fields
  sizeof(theora_webcams::msg::Resolution),
  Resolution_message_member_array,  // message members
  Resolution_init_function,  // function to initialize message memory (memory has to be allocated)
  Resolution_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Resolution_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Resolution_message_members,
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
get_message_type_support_handle<theora_webcams::msg::Resolution>()
{
  return &::theora_webcams::msg::rosidl_typesupport_introspection_cpp::Resolution_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, theora_webcams, msg, Resolution)() {
  return &::theora_webcams::msg::rosidl_typesupport_introspection_cpp::Resolution_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
