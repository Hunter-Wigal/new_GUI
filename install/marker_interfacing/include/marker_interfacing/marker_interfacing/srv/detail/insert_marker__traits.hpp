// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marker_interfacing:srv/InsertMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__INSERT_MARKER__TRAITS_HPP_
#define MARKER_INTERFACING__SRV__DETAIL__INSERT_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marker_interfacing/srv/detail/insert_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace marker_interfacing
{

namespace srv
{

inline void to_flow_style_yaml(
  const InsertMarker_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: lat
  {
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << ", ";
  }

  // member: lon
  {
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << ", ";
  }

  // member: alt
  {
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
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

  // member: new_following_marker_id
  {
    out << "new_following_marker_id: ";
    rosidl_generator_traits::value_to_yaml(msg.new_following_marker_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InsertMarker_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: lat
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lat: ";
    rosidl_generator_traits::value_to_yaml(msg.lat, out);
    out << "\n";
  }

  // member: lon
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "lon: ";
    rosidl_generator_traits::value_to_yaml(msg.lon, out);
    out << "\n";
  }

  // member: alt
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alt: ";
    rosidl_generator_traits::value_to_yaml(msg.alt, out);
    out << "\n";
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

  // member: new_following_marker_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "new_following_marker_id: ";
    rosidl_generator_traits::value_to_yaml(msg.new_following_marker_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InsertMarker_Request & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace marker_interfacing

namespace rosidl_generator_traits
{

[[deprecated("use marker_interfacing::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marker_interfacing::srv::InsertMarker_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  marker_interfacing::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marker_interfacing::srv::to_yaml() instead")]]
inline std::string to_yaml(const marker_interfacing::srv::InsertMarker_Request & msg)
{
  return marker_interfacing::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marker_interfacing::srv::InsertMarker_Request>()
{
  return "marker_interfacing::srv::InsertMarker_Request";
}

template<>
inline const char * name<marker_interfacing::srv::InsertMarker_Request>()
{
  return "marker_interfacing/srv/InsertMarker_Request";
}

template<>
struct has_fixed_size<marker_interfacing::srv::InsertMarker_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marker_interfacing::srv::InsertMarker_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marker_interfacing::srv::InsertMarker_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace marker_interfacing
{

namespace srv
{

inline void to_flow_style_yaml(
  const InsertMarker_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const InsertMarker_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const InsertMarker_Response & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace srv

}  // namespace marker_interfacing

namespace rosidl_generator_traits
{

[[deprecated("use marker_interfacing::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const marker_interfacing::srv::InsertMarker_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  marker_interfacing::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marker_interfacing::srv::to_yaml() instead")]]
inline std::string to_yaml(const marker_interfacing::srv::InsertMarker_Response & msg)
{
  return marker_interfacing::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marker_interfacing::srv::InsertMarker_Response>()
{
  return "marker_interfacing::srv::InsertMarker_Response";
}

template<>
inline const char * name<marker_interfacing::srv::InsertMarker_Response>()
{
  return "marker_interfacing/srv/InsertMarker_Response";
}

template<>
struct has_fixed_size<marker_interfacing::srv::InsertMarker_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<marker_interfacing::srv::InsertMarker_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<marker_interfacing::srv::InsertMarker_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<marker_interfacing::srv::InsertMarker>()
{
  return "marker_interfacing::srv::InsertMarker";
}

template<>
inline const char * name<marker_interfacing::srv::InsertMarker>()
{
  return "marker_interfacing/srv/InsertMarker";
}

template<>
struct has_fixed_size<marker_interfacing::srv::InsertMarker>
  : std::integral_constant<
    bool,
    has_fixed_size<marker_interfacing::srv::InsertMarker_Request>::value &&
    has_fixed_size<marker_interfacing::srv::InsertMarker_Response>::value
  >
{
};

template<>
struct has_bounded_size<marker_interfacing::srv::InsertMarker>
  : std::integral_constant<
    bool,
    has_bounded_size<marker_interfacing::srv::InsertMarker_Request>::value &&
    has_bounded_size<marker_interfacing::srv::InsertMarker_Response>::value
  >
{
};

template<>
struct is_service<marker_interfacing::srv::InsertMarker>
  : std::true_type
{
};

template<>
struct is_service_request<marker_interfacing::srv::InsertMarker_Request>
  : std::true_type
{
};

template<>
struct is_service_response<marker_interfacing::srv::InsertMarker_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MARKER_INTERFACING__SRV__DETAIL__INSERT_MARKER__TRAITS_HPP_
