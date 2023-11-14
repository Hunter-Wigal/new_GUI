// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from theora_webcams:srv/GetExposureBounds.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__GET_EXPOSURE_BOUNDS__TRAITS_HPP_
#define THEORA_WEBCAMS__SRV__DETAIL__GET_EXPOSURE_BOUNDS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "theora_webcams/srv/detail/get_exposure_bounds__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace theora_webcams
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetExposureBounds_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetExposureBounds_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetExposureBounds_Request & msg, bool use_flow_style = false)
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

}  // namespace theora_webcams

namespace rosidl_generator_traits
{

[[deprecated("use theora_webcams::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const theora_webcams::srv::GetExposureBounds_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::srv::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::srv::GetExposureBounds_Request & msg)
{
  return theora_webcams::srv::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::srv::GetExposureBounds_Request>()
{
  return "theora_webcams::srv::GetExposureBounds_Request";
}

template<>
inline const char * name<theora_webcams::srv::GetExposureBounds_Request>()
{
  return "theora_webcams/srv/GetExposureBounds_Request";
}

template<>
struct has_fixed_size<theora_webcams::srv::GetExposureBounds_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<theora_webcams::srv::GetExposureBounds_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<theora_webcams::srv::GetExposureBounds_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace theora_webcams
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetExposureBounds_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: exposure_bounds
  {
    if (msg.exposure_bounds.size() == 0) {
      out << "exposure_bounds: []";
    } else {
      out << "exposure_bounds: [";
      size_t pending_items = msg.exposure_bounds.size();
      for (auto item : msg.exposure_bounds) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: supports_manual_exposure
  {
    out << "supports_manual_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.supports_manual_exposure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetExposureBounds_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exposure_bounds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.exposure_bounds.size() == 0) {
      out << "exposure_bounds: []\n";
    } else {
      out << "exposure_bounds:\n";
      for (auto item : msg.exposure_bounds) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: supports_manual_exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "supports_manual_exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.supports_manual_exposure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetExposureBounds_Response & msg, bool use_flow_style = false)
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

}  // namespace theora_webcams

namespace rosidl_generator_traits
{

[[deprecated("use theora_webcams::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const theora_webcams::srv::GetExposureBounds_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::srv::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::srv::GetExposureBounds_Response & msg)
{
  return theora_webcams::srv::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::srv::GetExposureBounds_Response>()
{
  return "theora_webcams::srv::GetExposureBounds_Response";
}

template<>
inline const char * name<theora_webcams::srv::GetExposureBounds_Response>()
{
  return "theora_webcams/srv/GetExposureBounds_Response";
}

template<>
struct has_fixed_size<theora_webcams::srv::GetExposureBounds_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<theora_webcams::srv::GetExposureBounds_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<theora_webcams::srv::GetExposureBounds_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<theora_webcams::srv::GetExposureBounds>()
{
  return "theora_webcams::srv::GetExposureBounds";
}

template<>
inline const char * name<theora_webcams::srv::GetExposureBounds>()
{
  return "theora_webcams/srv/GetExposureBounds";
}

template<>
struct has_fixed_size<theora_webcams::srv::GetExposureBounds>
  : std::integral_constant<
    bool,
    has_fixed_size<theora_webcams::srv::GetExposureBounds_Request>::value &&
    has_fixed_size<theora_webcams::srv::GetExposureBounds_Response>::value
  >
{
};

template<>
struct has_bounded_size<theora_webcams::srv::GetExposureBounds>
  : std::integral_constant<
    bool,
    has_bounded_size<theora_webcams::srv::GetExposureBounds_Request>::value &&
    has_bounded_size<theora_webcams::srv::GetExposureBounds_Response>::value
  >
{
};

template<>
struct is_service<theora_webcams::srv::GetExposureBounds>
  : std::true_type
{
};

template<>
struct is_service_request<theora_webcams::srv::GetExposureBounds_Request>
  : std::true_type
{
};

template<>
struct is_service_response<theora_webcams::srv::GetExposureBounds_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // THEORA_WEBCAMS__SRV__DETAIL__GET_EXPOSURE_BOUNDS__TRAITS_HPP_
