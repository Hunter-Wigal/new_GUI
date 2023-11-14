// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from theora_webcams:srv/GetResolutions.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__TRAITS_HPP_
#define THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "theora_webcams/srv/detail/get_resolutions__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace theora_webcams
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetResolutions_Request & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const GetResolutions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetResolutions_Request & msg, bool use_flow_style = false)
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
  const theora_webcams::srv::GetResolutions_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::srv::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::srv::GetResolutions_Request & msg)
{
  return theora_webcams::srv::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::srv::GetResolutions_Request>()
{
  return "theora_webcams::srv::GetResolutions_Request";
}

template<>
inline const char * name<theora_webcams::srv::GetResolutions_Request>()
{
  return "theora_webcams/srv/GetResolutions_Request";
}

template<>
struct has_fixed_size<theora_webcams::srv::GetResolutions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<theora_webcams::srv::GetResolutions_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<theora_webcams::srv::GetResolutions_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'resolutions'
#include "theora_webcams/msg/detail/resolution__traits.hpp"

namespace theora_webcams
{

namespace srv
{

inline void to_flow_style_yaml(
  const GetResolutions_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: resolutions
  {
    if (msg.resolutions.size() == 0) {
      out << "resolutions: []";
    } else {
      out << "resolutions: [";
      size_t pending_items = msg.resolutions.size();
      for (auto item : msg.resolutions) {
        to_flow_style_yaml(item, out);
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
  const GetResolutions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: resolutions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.resolutions.size() == 0) {
      out << "resolutions: []\n";
    } else {
      out << "resolutions:\n";
      for (auto item : msg.resolutions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const GetResolutions_Response & msg, bool use_flow_style = false)
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
  const theora_webcams::srv::GetResolutions_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::srv::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::srv::GetResolutions_Response & msg)
{
  return theora_webcams::srv::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::srv::GetResolutions_Response>()
{
  return "theora_webcams::srv::GetResolutions_Response";
}

template<>
inline const char * name<theora_webcams::srv::GetResolutions_Response>()
{
  return "theora_webcams/srv/GetResolutions_Response";
}

template<>
struct has_fixed_size<theora_webcams::srv::GetResolutions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<theora_webcams::srv::GetResolutions_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<theora_webcams::srv::GetResolutions_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<theora_webcams::srv::GetResolutions>()
{
  return "theora_webcams::srv::GetResolutions";
}

template<>
inline const char * name<theora_webcams::srv::GetResolutions>()
{
  return "theora_webcams/srv/GetResolutions";
}

template<>
struct has_fixed_size<theora_webcams::srv::GetResolutions>
  : std::integral_constant<
    bool,
    has_fixed_size<theora_webcams::srv::GetResolutions_Request>::value &&
    has_fixed_size<theora_webcams::srv::GetResolutions_Response>::value
  >
{
};

template<>
struct has_bounded_size<theora_webcams::srv::GetResolutions>
  : std::integral_constant<
    bool,
    has_bounded_size<theora_webcams::srv::GetResolutions_Request>::value &&
    has_bounded_size<theora_webcams::srv::GetResolutions_Response>::value
  >
{
};

template<>
struct is_service<theora_webcams::srv::GetResolutions>
  : std::true_type
{
};

template<>
struct is_service_request<theora_webcams::srv::GetResolutions_Request>
  : std::true_type
{
};

template<>
struct is_service_response<theora_webcams::srv::GetResolutions_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__TRAITS_HPP_
