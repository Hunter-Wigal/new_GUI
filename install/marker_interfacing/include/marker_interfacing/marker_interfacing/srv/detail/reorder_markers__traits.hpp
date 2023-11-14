// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from marker_interfacing:srv/ReorderMarkers.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKERS__TRAITS_HPP_
#define MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKERS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "marker_interfacing/srv/detail/reorder_markers__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace marker_interfacing
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReorderMarkers_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: marker_ids
  {
    if (msg.marker_ids.size() == 0) {
      out << "marker_ids: []";
    } else {
      out << "marker_ids: [";
      size_t pending_items = msg.marker_ids.size();
      for (auto item : msg.marker_ids) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReorderMarkers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: marker_ids
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.marker_ids.size() == 0) {
      out << "marker_ids: []\n";
    } else {
      out << "marker_ids:\n";
      for (auto item : msg.marker_ids) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReorderMarkers_Request & msg, bool use_flow_style = false)
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
  const marker_interfacing::srv::ReorderMarkers_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  marker_interfacing::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marker_interfacing::srv::to_yaml() instead")]]
inline std::string to_yaml(const marker_interfacing::srv::ReorderMarkers_Request & msg)
{
  return marker_interfacing::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marker_interfacing::srv::ReorderMarkers_Request>()
{
  return "marker_interfacing::srv::ReorderMarkers_Request";
}

template<>
inline const char * name<marker_interfacing::srv::ReorderMarkers_Request>()
{
  return "marker_interfacing/srv/ReorderMarkers_Request";
}

template<>
struct has_fixed_size<marker_interfacing::srv::ReorderMarkers_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<marker_interfacing::srv::ReorderMarkers_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<marker_interfacing::srv::ReorderMarkers_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace marker_interfacing
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReorderMarkers_Response & msg,
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
  const ReorderMarkers_Response & msg,
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

inline std::string to_yaml(const ReorderMarkers_Response & msg, bool use_flow_style = false)
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
  const marker_interfacing::srv::ReorderMarkers_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  marker_interfacing::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use marker_interfacing::srv::to_yaml() instead")]]
inline std::string to_yaml(const marker_interfacing::srv::ReorderMarkers_Response & msg)
{
  return marker_interfacing::srv::to_yaml(msg);
}

template<>
inline const char * data_type<marker_interfacing::srv::ReorderMarkers_Response>()
{
  return "marker_interfacing::srv::ReorderMarkers_Response";
}

template<>
inline const char * name<marker_interfacing::srv::ReorderMarkers_Response>()
{
  return "marker_interfacing/srv/ReorderMarkers_Response";
}

template<>
struct has_fixed_size<marker_interfacing::srv::ReorderMarkers_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<marker_interfacing::srv::ReorderMarkers_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<marker_interfacing::srv::ReorderMarkers_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<marker_interfacing::srv::ReorderMarkers>()
{
  return "marker_interfacing::srv::ReorderMarkers";
}

template<>
inline const char * name<marker_interfacing::srv::ReorderMarkers>()
{
  return "marker_interfacing/srv/ReorderMarkers";
}

template<>
struct has_fixed_size<marker_interfacing::srv::ReorderMarkers>
  : std::integral_constant<
    bool,
    has_fixed_size<marker_interfacing::srv::ReorderMarkers_Request>::value &&
    has_fixed_size<marker_interfacing::srv::ReorderMarkers_Response>::value
  >
{
};

template<>
struct has_bounded_size<marker_interfacing::srv::ReorderMarkers>
  : std::integral_constant<
    bool,
    has_bounded_size<marker_interfacing::srv::ReorderMarkers_Request>::value &&
    has_bounded_size<marker_interfacing::srv::ReorderMarkers_Response>::value
  >
{
};

template<>
struct is_service<marker_interfacing::srv::ReorderMarkers>
  : std::true_type
{
};

template<>
struct is_service_request<marker_interfacing::srv::ReorderMarkers_Request>
  : std::true_type
{
};

template<>
struct is_service_response<marker_interfacing::srv::ReorderMarkers_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKERS__TRAITS_HPP_
