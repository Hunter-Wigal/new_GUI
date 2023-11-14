// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from theora_webcams:srv/SetExposure.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__SET_EXPOSURE__TRAITS_HPP_
#define THEORA_WEBCAMS__SRV__DETAIL__SET_EXPOSURE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "theora_webcams/srv/detail/set_exposure__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace theora_webcams
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetExposure_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: exposure
  {
    out << "exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const SetExposure_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: exposure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const SetExposure_Request & msg, bool use_flow_style = false)
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
  const theora_webcams::srv::SetExposure_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::srv::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::srv::SetExposure_Request & msg)
{
  return theora_webcams::srv::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::srv::SetExposure_Request>()
{
  return "theora_webcams::srv::SetExposure_Request";
}

template<>
inline const char * name<theora_webcams::srv::SetExposure_Request>()
{
  return "theora_webcams/srv/SetExposure_Request";
}

template<>
struct has_fixed_size<theora_webcams::srv::SetExposure_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<theora_webcams::srv::SetExposure_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<theora_webcams::srv::SetExposure_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace theora_webcams
{

namespace srv
{

inline void to_flow_style_yaml(
  const SetExposure_Response & msg,
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
  const SetExposure_Response & msg,
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

inline std::string to_yaml(const SetExposure_Response & msg, bool use_flow_style = false)
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
  const theora_webcams::srv::SetExposure_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::srv::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::srv::SetExposure_Response & msg)
{
  return theora_webcams::srv::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::srv::SetExposure_Response>()
{
  return "theora_webcams::srv::SetExposure_Response";
}

template<>
inline const char * name<theora_webcams::srv::SetExposure_Response>()
{
  return "theora_webcams/srv/SetExposure_Response";
}

template<>
struct has_fixed_size<theora_webcams::srv::SetExposure_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<theora_webcams::srv::SetExposure_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<theora_webcams::srv::SetExposure_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<theora_webcams::srv::SetExposure>()
{
  return "theora_webcams::srv::SetExposure";
}

template<>
inline const char * name<theora_webcams::srv::SetExposure>()
{
  return "theora_webcams/srv/SetExposure";
}

template<>
struct has_fixed_size<theora_webcams::srv::SetExposure>
  : std::integral_constant<
    bool,
    has_fixed_size<theora_webcams::srv::SetExposure_Request>::value &&
    has_fixed_size<theora_webcams::srv::SetExposure_Response>::value
  >
{
};

template<>
struct has_bounded_size<theora_webcams::srv::SetExposure>
  : std::integral_constant<
    bool,
    has_bounded_size<theora_webcams::srv::SetExposure_Request>::value &&
    has_bounded_size<theora_webcams::srv::SetExposure_Response>::value
  >
{
};

template<>
struct is_service<theora_webcams::srv::SetExposure>
  : std::true_type
{
};

template<>
struct is_service_request<theora_webcams::srv::SetExposure_Request>
  : std::true_type
{
};

template<>
struct is_service_response<theora_webcams::srv::SetExposure_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // THEORA_WEBCAMS__SRV__DETAIL__SET_EXPOSURE__TRAITS_HPP_
