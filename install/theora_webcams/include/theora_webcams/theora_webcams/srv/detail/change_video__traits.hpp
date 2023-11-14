// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from theora_webcams:srv/ChangeVideo.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__TRAITS_HPP_
#define THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "theora_webcams/srv/detail/change_video__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace theora_webcams
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeVideo_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: width
  {
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << ", ";
  }

  // member: height
  {
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << ", ";
  }

  // member: fps_num
  {
    out << "fps_num: ";
    rosidl_generator_traits::value_to_yaml(msg.fps_num, out);
    out << ", ";
  }

  // member: fps_den
  {
    out << "fps_den: ";
    rosidl_generator_traits::value_to_yaml(msg.fps_den, out);
    out << ", ";
  }

  // member: start
  {
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << ", ";
  }

  // member: force_restart
  {
    out << "force_restart: ";
    rosidl_generator_traits::value_to_yaml(msg.force_restart, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ChangeVideo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: width
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "width: ";
    rosidl_generator_traits::value_to_yaml(msg.width, out);
    out << "\n";
  }

  // member: height
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "height: ";
    rosidl_generator_traits::value_to_yaml(msg.height, out);
    out << "\n";
  }

  // member: fps_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fps_num: ";
    rosidl_generator_traits::value_to_yaml(msg.fps_num, out);
    out << "\n";
  }

  // member: fps_den
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "fps_den: ";
    rosidl_generator_traits::value_to_yaml(msg.fps_den, out);
    out << "\n";
  }

  // member: start
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "start: ";
    rosidl_generator_traits::value_to_yaml(msg.start, out);
    out << "\n";
  }

  // member: force_restart
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "force_restart: ";
    rosidl_generator_traits::value_to_yaml(msg.force_restart, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ChangeVideo_Request & msg, bool use_flow_style = false)
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
  const theora_webcams::srv::ChangeVideo_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::srv::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::srv::ChangeVideo_Request & msg)
{
  return theora_webcams::srv::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::srv::ChangeVideo_Request>()
{
  return "theora_webcams::srv::ChangeVideo_Request";
}

template<>
inline const char * name<theora_webcams::srv::ChangeVideo_Request>()
{
  return "theora_webcams/srv/ChangeVideo_Request";
}

template<>
struct has_fixed_size<theora_webcams::srv::ChangeVideo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<theora_webcams::srv::ChangeVideo_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<theora_webcams::srv::ChangeVideo_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace theora_webcams
{

namespace srv
{

inline void to_flow_style_yaml(
  const ChangeVideo_Response & msg,
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
  const ChangeVideo_Response & msg,
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

inline std::string to_yaml(const ChangeVideo_Response & msg, bool use_flow_style = false)
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
  const theora_webcams::srv::ChangeVideo_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::srv::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::srv::ChangeVideo_Response & msg)
{
  return theora_webcams::srv::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::srv::ChangeVideo_Response>()
{
  return "theora_webcams::srv::ChangeVideo_Response";
}

template<>
inline const char * name<theora_webcams::srv::ChangeVideo_Response>()
{
  return "theora_webcams/srv/ChangeVideo_Response";
}

template<>
struct has_fixed_size<theora_webcams::srv::ChangeVideo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<theora_webcams::srv::ChangeVideo_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<theora_webcams::srv::ChangeVideo_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<theora_webcams::srv::ChangeVideo>()
{
  return "theora_webcams::srv::ChangeVideo";
}

template<>
inline const char * name<theora_webcams::srv::ChangeVideo>()
{
  return "theora_webcams/srv/ChangeVideo";
}

template<>
struct has_fixed_size<theora_webcams::srv::ChangeVideo>
  : std::integral_constant<
    bool,
    has_fixed_size<theora_webcams::srv::ChangeVideo_Request>::value &&
    has_fixed_size<theora_webcams::srv::ChangeVideo_Response>::value
  >
{
};

template<>
struct has_bounded_size<theora_webcams::srv::ChangeVideo>
  : std::integral_constant<
    bool,
    has_bounded_size<theora_webcams::srv::ChangeVideo_Request>::value &&
    has_bounded_size<theora_webcams::srv::ChangeVideo_Response>::value
  >
{
};

template<>
struct is_service<theora_webcams::srv::ChangeVideo>
  : std::true_type
{
};

template<>
struct is_service_request<theora_webcams::srv::ChangeVideo_Request>
  : std::true_type
{
};

template<>
struct is_service_response<theora_webcams::srv::ChangeVideo_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__TRAITS_HPP_
