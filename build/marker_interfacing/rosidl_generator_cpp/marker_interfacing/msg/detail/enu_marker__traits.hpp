// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marker_interfacing:msg/ENUMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__TRAITS_HPP_
#define MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marker_interfacing/msg/detail/enu_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'waypoint_enu'
#include "geometry_msgs/msg/detail/point__traits.hpp"

namespace marker_interfacing
{

namespace msg
{

inline void to_flow_style_yaml(
  const ENUMarker & msg,
  std::ostream & out)
{
  out << "{";
  // member: waypoint_enu
  {
    out << "waypoint_enu: ";
    to_flow_style_yaml(msg.waypoint_enu, out);
    out << ", ";
  }

  // member: waypoint_error
  {
    out << "waypoint_error: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_error, out);
    out << ", ";
  }

  // member: marker_type
  {
    out << "marker_type: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_type, out);
    out << ", ";
  }

  // member: aruco_id
  {
    out << "aruco_id: ";
    rosidl_generator_traits::value_to_yaml(msg.aruco_id, out);
    out << ", ";
  }

  // member: aruco_id_2
  {
    out << "aruco_id_2: ";
    rosidl_generator_traits::value_to_yaml(msg.aruco_id_2, out);
    out << ", ";
  }

  // member: marker_id
  {
    out << "marker_id: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ENUMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: waypoint_enu
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_enu:\n";
    to_block_style_yaml(msg.waypoint_enu, out, indentation + 2);
  }

  // member: waypoint_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "waypoint_error: ";
    rosidl_generator_traits::value_to_yaml(msg.waypoint_error, out);
    out << "\n";
  }

  // member: marker_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_type: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_type, out);
    out << "\n";
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

  // member: aruco_id_2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "aruco_id_2: ";
    rosidl_generator_traits::value_to_yaml(msg.aruco_id_2, out);
    out << "\n";
  }

  // member: marker_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_id: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ENUMarker & msg, bool use_flow_style = false)
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

}  // namespace marker_interfacing

namespace rosidl_generator_traits
{

[[deprecated("use marker_interfacing::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marker_interfacing::msg::ENUMarker & msg,
  std::ostream & out, size_t indentation = 0)
{
  marker_interfacing::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marker_interfacing::msg::to_yaml() instead")]]
inline std::string to_yaml(const marker_interfacing::msg::ENUMarker & msg)
{
  return marker_interfacing::msg::to_yaml(msg);
}

template<>
inline const char * data_type<marker_interfacing::msg::ENUMarker>()
{
  return "marker_interfacing::msg::ENUMarker";
}

template<>
inline const char * name<marker_interfacing::msg::ENUMarker>()
{
  return "marker_interfacing/msg/ENUMarker";
}

template<>
struct has_fixed_size<marker_interfacing::msg::ENUMarker>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marker_interfacing::msg::ENUMarker>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marker_interfacing::msg::ENUMarker>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__TRAITS_HPP_
