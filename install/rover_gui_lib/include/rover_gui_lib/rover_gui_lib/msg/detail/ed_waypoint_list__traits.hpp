// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rover_gui_lib:msg/EDWaypointList.idl
// generated code does not contain a copyright notice

#ifndef ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__TRAITS_HPP_
#define ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rover_gui_lib/msg/detail/ed_waypoint_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoints'
#include "rover_gui_lib/msg/detail/ed_waypoint__traits.hpp"

namespace rover_gui_lib
{

namespace msg
{

inline void to_flow_style_yaml(
  const EDWaypointList & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoints
  {
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []";
    } else {
      out << "waypoints: [";
      size_t pending_items = msg.waypoints.size();
      for (auto item : msg.waypoints) {
        to_flow_style_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: count
  {
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EDWaypointList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoints
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.waypoints.size() == 0) {
      out << "waypoints: []\n";
    } else {
      out << "waypoints:\n";
      for (auto item : msg.waypoints) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: count
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "count: ";
    rosidl_generator_traits::value_to_yaml(msg.count, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EDWaypointList & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace rover_gui_lib

namespace rosidl_generator_traits
{

[[deprecated("use rover_gui_lib::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const rover_gui_lib::msg::EDWaypointList & msg,
  std::ostream & out, size_t indentation = 0)
{
  rover_gui_lib::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rover_gui_lib::msg::to_yaml() instead")]]
inline std::string to_yaml(const rover_gui_lib::msg::EDWaypointList & msg)
{
  return rover_gui_lib::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rover_gui_lib::msg::EDWaypointList>()
{
  return "rover_gui_lib::msg::EDWaypointList";
}

template<>
inline const char * name<rover_gui_lib::msg::EDWaypointList>()
{
  return "rover_gui_lib/msg/EDWaypointList";
}

template<>
struct has_fixed_size<rover_gui_lib::msg::EDWaypointList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rover_gui_lib::msg::EDWaypointList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rover_gui_lib::msg::EDWaypointList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__TRAITS_HPP_
