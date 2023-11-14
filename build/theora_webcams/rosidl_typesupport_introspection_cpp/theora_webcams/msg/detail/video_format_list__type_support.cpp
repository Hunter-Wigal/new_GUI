// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from theora_webcams:msg/VideoFormatList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "theora_webcams/msg/detail/video_format_list__struct.hpp"
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

void VideoFormatList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) theora_webcams::msg::VideoFormatList(_init);
}

void VideoFormatList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<theora_webcams::msg::VideoFormatList *>(message_memory);
  typed_message->~VideoFormatList();
}

size_t size_function__VideoFormatList__formats(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<theora_webcams::msg::VideoFormat> *>(untyped_member);
  return member->size();
}

const void * get_const_function__VideoFormatList__formats(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<theora_webcams::msg::VideoFormat> *>(untyped_member);
  return &member[index];
}

void * get_function__VideoFormatList__formats(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<theora_webcams::msg::VideoFormat> *>(untyped_member);
  return &member[index];
}

void fetch_function__VideoFormatList__formats(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const theora_webcams::msg::VideoFormat *>(
    get_const_function__VideoFormatList__formats(untyped_member, index));
  auto & value = *reinterpret_cast<theora_webcams::msg::VideoFormat *>(untyped_value);
  value = item;
}

void assign_function__VideoFormatList__formats(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<theora_webcams::msg::VideoFormat *>(
    get_function__VideoFormatList__formats(untyped_member, index));
  const auto & value = *reinterpret_cast<const theora_webcams::msg::VideoFormat *>(untyped_value);
  item = value;
}

void resize_function__VideoFormatList__formats(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<theora_webcams::msg::VideoFormat> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember VideoFormatList_message_member_array[1] = {
  {
    "formats",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<theora_webcams::msg::VideoFormat>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(theora_webcams::msg::VideoFormatList, formats),  // bytes offset in struct
    nullptr,  // default value
    size_function__VideoFormatList__formats,  // size() function pointer
    get_const_function__VideoFormatList__formats,  // get_const(index) function pointer
    get_function__VideoFormatList__formats,  // get(index) function pointer
    fetch_function__VideoFormatList__formats,  // fetch(index, &value) function pointer
    assign_function__VideoFormatList__formats,  // assign(index, value) function pointer
    resize_function__VideoFormatList__formats  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers VideoFormatList_message_members = {
  "theora_webcams::msg",  // message namespace
  "VideoFormatList",  // message name
  1,  // number of fields
  sizeof(theora_webcams::msg::VideoFormatList),
  VideoFormatList_message_member_array,  // message members
  VideoFormatList_init_function,  // function to initialize message memory (memory has to be allocated)
  VideoFormatList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t VideoFormatList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &VideoFormatList_message_members,
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
get_message_type_support_handle<theora_webcams::msg::VideoFormatList>()
{
  return &::theora_webcams::msg::rosidl_typesupport_introspection_cpp::VideoFormatList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, theora_webcams, msg, VideoFormatList)() {
  return &::theora_webcams::msg::rosidl_typesupport_introspection_cpp::VideoFormatList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
