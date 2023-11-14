// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marker_interfacing:srv/ReorderMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKER__TRAITS_HPP_
#define MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKER__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marker_interfacing/srv/detail/reorder_marker__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace marker_interfacing
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReorderMarker_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: marker_id
  {
    out << "marker_id: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_id, out);
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
  const ReorderMarker_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: marker_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "marker_id: ";
    rosidl_generator_traits::value_to_yaml(msg.marker_id, out);
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

inline std::string to_yaml(const ReorderMarker_Request & msg, bool use_flow_style = false)
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
  const marker_interfacing::srv::ReorderMarker_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  marker_interfacing::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marker_interfacing::srv::to_yaml() instead")]]
inline std::string to_yaml(const marker_interfacing::srv::ReorderMarker_Request & msg)
{
  return marker_interfacing::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marker_interfacing::srv::ReorderMarker_Request>()
{
  return "marker_interfacing::srv::ReorderMarker_Request";
}

template<>
inline const char * name<marker_interfacing::srv::ReorderMarker_Request>()
{
  return "marker_interfacing/srv/ReorderMarker_Request";
}

template<>
struct has_fixed_size<marker_interfacing::srv::ReorderMarker_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<marker_interfacing::srv::ReorderMarker_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<marker_interfacing::srv::ReorderMarker_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace marker_interfacing
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReorderMarker_Response & msg,
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
  const ReorderMarker_Response & msg,
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

inline std::string to_yaml(const ReorderMarker_Response & msg, bool use_flow_style = false)
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
  const marker_interfacing::srv::ReorderMarker_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  marker_interfacing::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marker_interfacing::srv::to_yaml() instead")]]
inline std::string to_yaml(const marker_interfacing::srv::ReorderMarker_Response & msg)
{
  return marker_interfacing::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marker_interfacing::srv::ReorderMarker_Response>()
{
  return "marker_interfacing::srv::ReorderMarker_Response";
}

template<>
inline const char * name<marker_interfacing::srv::ReorderMarker_Response>()
{
  return "marker_interfacing/srv/ReorderMarker_Response";
}

template<>
struct has_fixed_size<marker_interfacing::srv::ReorderMarker_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<marker_interfacing::srv::ReorderMarker_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<marker_interfacing::srv::ReorderMarker_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<marker_interfacing::srv::ReorderMarker>()
{
  return "marker_interfacing::srv::ReorderMarker";
}

template<>
inline const char * name<marker_interfacing::srv::ReorderMarker>()
{
  return "marker_interfacing/srv/ReorderMarker";
}

template<>
struct has_fixed_size<marker_interfacing::srv::ReorderMarker>
  : std::integral_constant<
    bool,
    has_fixed_size<marker_interfacing::srv::ReorderMarker_Request>::value &&
    has_fixed_size<marker_interfacing::srv::ReorderMarker_Response>::value
  >
{
};

template<>
struct has_bounded_size<marker_interfacing::srv::ReorderMarker>
  : std::integral_constant<
    bool,
    has_bounded_size<marker_interfacing::srv::ReorderMarker_Request>::value &&
    has_bounded_size<marker_interfacing::srv::ReorderMarker_Response>::value
  >
{
};

template<>
struct is_service<marker_interfacing::srv::ReorderMarker>
  : std::true_type
{
};

template<>
struct is_service_request<marker_interfacing::srv::ReorderMarker_Request>
  : std::true_type
{
};

template<>
struct is_service_response<marker_interfacing::srv::ReorderMarker_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKER__TRAITS_HPP_
