// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from aruco_finder:msg/FoundMarkerList.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "aruco_finder/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "aruco_finder/msg/detail/found_marker_list__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace aruco_finder
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_finder
cdr_serialize(
  const aruco_finder::msg::FoundMarkerList & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_finder
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  aruco_finder::msg::FoundMarkerList & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_finder
get_serialized_size(
  const aruco_finder::msg::FoundMarkerList & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_finder
max_serialized_size_FoundMarkerList(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace aruco_finder

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_aruco_finder
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, aruco_finder, msg, FoundMarkerList)();

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
