// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from aruco_finder:msg/FoundMarker.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__TRAITS_HPP_
#define ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "aruco_finder/msg/detail/found_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'marker_enu'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace aruco_finder
{

namespace msg
{

inline void to_flow_style_yaml(
  const FoundMarker & msg,
  std::ostream & out)
{
  out << "{";
  // member: marker_enu
  {
    out << "marker_enu: ";
    to_flow_style_yaml(msg.marker_enu, out);
    out << ", ";
  }

  // member: aruco_id
  {
    out << "aruco_id: ";
    rosidl_generator_traits::value_to_yaml(msg.aruco_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const FoundMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: marker_enu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_enu:\n";
    to_block_style_yaml(msg.marker_enu, out, indentation + 2);
  }

  // member: aruco_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aruco_id: ";
    rosidl_generator_traits::value_to_yaml(msg.aruco_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const FoundMarker & msg, bool use_flow_style = false)
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

}  // namespace aruco_finder

namespace rosidl_generator_traits
{

[[deprecated("use aruco_finder::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const aruco_finder::msg::FoundMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  aruco_finder::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use aruco_finder::msg::to_yaml() instead")]]
inline std::string to_yaml(const aruco_finder::msg::FoundMarker & msg)
{
  return aruco_finder::msg::to_yaml(msg);
}

template<>
inline const char * data_type<aruco_finder::msg::FoundMarker>()
{
  return "aruco_finder::msg::FoundMarker";
}

template<>
inline const char * name<aruco_finder::msg::FoundMarker>()
{
  return "aruco_finder/msg/FoundMarker";
}

template<>
struct has_fixed_size<aruco_finder::msg::FoundMarker>
  : std::integral_constant<bool, has_fixed_size<geometry_msgs::msg::Point>::value> {};

template<>
struct has_bounded_size<aruco_finder::msg::FoundMarker>
  : std::integral_constant<bool, has_bounded_size<geometry_msgs::msg::Point>::value> {};

template<>
struct is_message<aruco_finder::msg::FoundMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__TRAITS_HPP_
