// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from rover_gui_lib:msg/EDWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__TRAITS_HPP_
#define ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "rover_gui_lib/msg/detail/ed_waypoint__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace rover_gui_lib
{

namespace msg
{

inline void to_flow_style_yaml(
  const EDWaypoint & msg,
  std::ostream & out)
{
  out << "{";
  // member: latitude
  {
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << ", ";
  }

  // member: longitude
  {
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << ", ";
  }

  // member: radius
  {
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << ", ";
  }

  // member: name
  {
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const EDWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: latitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "latitude: ";
    rosidl_generator_traits::value_to_yaml(msg.latitude, out);
    out << "\n";
  }

  // member: longitude
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "longitude: ";
    rosidl_generator_traits::value_to_yaml(msg.longitude, out);
    out << "\n";
  }

  // member: radius
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "radius: ";
    rosidl_generator_traits::value_to_yaml(msg.radius, out);
    out << "\n";
  }

  // member: name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "name: ";
    rosidl_generator_traits::value_to_yaml(msg.name, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const EDWaypoint & msg, bool use_flow_style = false)
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
  const rover_gui_lib::msg::EDWaypoint & msg,
  std::ostream & out, size_t indentation = 0)
{
  rover_gui_lib::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use rover_gui_lib::msg::to_yaml() instead")]]
inline std::string to_yaml(const rover_gui_lib::msg::EDWaypoint & msg)
{
  return rover_gui_lib::msg::to_yaml(msg);
}

template<>
inline const char * data_type<rover_gui_lib::msg::EDWaypoint>()
{
  return "rover_gui_lib::msg::EDWaypoint";
}

template<>
inline const char * name<rover_gui_lib::msg::EDWaypoint>()
{
  return "rover_gui_lib/msg/EDWaypoint";
}

template<>
struct has_fixed_size<rover_gui_lib::msg::EDWaypoint>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<rover_gui_lib::msg::EDWaypoint>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<rover_gui_lib::msg::EDWaypoint>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__TRAITS_HPP_
