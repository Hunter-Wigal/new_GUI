// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from rover_gui_lib:msg/EDWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "rover_gui_lib/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "rover_gui_lib/msg/detail/ed_waypoint__struct.hpp"

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

namespace rover_gui_lib
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_gui_lib
cdr_serialize(
  const rover_gui_lib::msg::EDWaypoint & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_gui_lib
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  rover_gui_lib::msg::EDWaypoint & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_gui_lib
get_serialized_size(
  const rover_gui_lib::msg::EDWaypoint & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_gui_lib
max_serialized_size_EDWaypoint(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace rover_gui_lib

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_rover_gui_lib
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, rover_gui_lib, msg, EDWaypoint)();

#ifdef __cplusplus
}
#endif

#endif  // ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
