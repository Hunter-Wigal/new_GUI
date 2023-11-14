// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from aruco_finder:msg/FoundMarkerList.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "aruco_finder/msg/detail/found_marker_list__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace aruco_finder
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void FoundMarkerList_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) aruco_finder::msg::FoundMarkerList(_init);
}

void FoundMarkerList_fini_function(void * message_memory)
{
  auto typed_message = static_cast<aruco_finder::msg::FoundMarkerList *>(message_memory);
  typed_message->~FoundMarkerList();
}

size_t size_function__FoundMarkerList__markers(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<aruco_finder::msg::FoundMarker> *>(untyped_member);
  return member->size();
}

const void * get_const_function__FoundMarkerList__markers(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<aruco_finder::msg::FoundMarker> *>(untyped_member);
  return &member[index];
}

void * get_function__FoundMarkerList__markers(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<aruco_finder::msg::FoundMarker> *>(untyped_member);
  return &member[index];
}

void fetch_function__FoundMarkerList__markers(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const aruco_finder::msg::FoundMarker *>(
    get_const_function__FoundMarkerList__markers(untyped_member, index));
  auto & value = *reinterpret_cast<aruco_finder::msg::FoundMarker *>(untyped_value);
  value = item;
}

void assign_function__FoundMarkerList__markers(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<aruco_finder::msg::FoundMarker *>(
    get_function__FoundMarkerList__markers(untyped_member, index));
  const auto & value = *reinterpret_cast<const aruco_finder::msg::FoundMarker *>(untyped_value);
  item = value;
}

void resize_function__FoundMarkerList__markers(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<aruco_finder::msg::FoundMarker> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember FoundMarkerList_message_member_array[2] = {
  {
    "markers",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<aruco_finder::msg::FoundMarker>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_finder::msg::FoundMarkerList, markers),  // bytes offset in struct
    nullptr,  // default value
    size_function__FoundMarkerList__markers,  // size() function pointer
    get_const_function__FoundMarkerList__markers,  // get_const(index) function pointer
    get_function__FoundMarkerList__markers,  // get(index) function pointer
    fetch_function__FoundMarkerList__markers,  // fetch(index, &value) function pointer
    assign_function__FoundMarkerList__markers,  // assign(index, value) function pointer
    resize_function__FoundMarkerList__markers  // resize(index) function pointer
  },
  {
    "count",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(aruco_finder::msg::FoundMarkerList, count),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers FoundMarkerList_message_members = {
  "aruco_finder::msg",  // message namespace
  "FoundMarkerList",  // message name
  2,  // number of fields
  sizeof(aruco_finder::msg::FoundMarkerList),
  FoundMarkerList_message_member_array,  // message members
  FoundMarkerList_init_function,  // function to initialize message memory (memory has to be allocated)
  FoundMarkerList_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t FoundMarkerList_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &FoundMarkerList_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace aruco_finder


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<aruco_finder::msg::FoundMarkerList>()
{
  return &::aruco_finder::msg::rosidl_typesupport_introspection_cpp::FoundMarkerList_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, aruco_finder, msg, FoundMarkerList)() {
  return &::aruco_finder::msg::rosidl_typesupport_introspection_cpp::FoundMarkerList_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
