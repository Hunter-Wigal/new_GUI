// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from hockey_stick_arm:srv/Calibrate.idl
// generated code does not contain a copyright notice

#ifndef HOCKEY_STICK_ARM__SRV__DETAIL__CALIBRATE__TRAITS_HPP_
#define HOCKEY_STICK_ARM__SRV__DETAIL__CALIBRATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "hockey_stick_arm/srv/detail/calibrate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace hockey_stick_arm
{

namespace srv
{

inline void to_flow_style_yaml(
  const Calibrate_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: value1
  {
    out << "value1: ";
    rosidl_generator_traits::value_to_yaml(msg.value1, out);
    out << ", ";
  }

  // member: value2
  {
    out << "value2: ";
    rosidl_generator_traits::value_to_yaml(msg.value2, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Calibrate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: value1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value1: ";
    rosidl_generator_traits::value_to_yaml(msg.value1, out);
    out << "\n";
  }

  // member: value2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "value2: ";
    rosidl_generator_traits::value_to_yaml(msg.value2, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Calibrate_Request & msg, bool use_flow_style = false)
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

}  // namespace hockey_stick_arm

namespace rosidl_generator_traits
{

[[deprecated("use hockey_stick_arm::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hockey_stick_arm::srv::Calibrate_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  hockey_stick_arm::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hockey_stick_arm::srv::to_yaml() instead")]]
inline std::string to_yaml(const hockey_stick_arm::srv::Calibrate_Request & msg)
{
  return hockey_stick_arm::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hockey_stick_arm::srv::Calibrate_Request>()
{
  return "hockey_stick_arm::srv::Calibrate_Request";
}

template<>
inline const char * name<hockey_stick_arm::srv::Calibrate_Request>()
{
  return "hockey_stick_arm/srv/Calibrate_Request";
}

template<>
struct has_fixed_size<hockey_stick_arm::srv::Calibrate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<hockey_stick_arm::srv::Calibrate_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<hockey_stick_arm::srv::Calibrate_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace hockey_stick_arm
{

namespace srv
{

inline void to_flow_style_yaml(
  const Calibrate_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: success
  {
    out << "success: ";
    rosidl_generator_traits::value_to_yaml(msg.success, out);
    out << ", ";
  }

  // member: message
  {
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Calibrate_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    rosidl_generator_traits::value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Calibrate_Response & msg, bool use_flow_style = false)
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

}  // namespace hockey_stick_arm

namespace rosidl_generator_traits
{

[[deprecated("use hockey_stick_arm::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const hockey_stick_arm::srv::Calibrate_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  hockey_stick_arm::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use hockey_stick_arm::srv::to_yaml() instead")]]
inline std::string to_yaml(const hockey_stick_arm::srv::Calibrate_Response & msg)
{
  return hockey_stick_arm::srv::to_yaml(msg);
}

template<>
inline const char * data_type<hockey_stick_arm::srv::Calibrate_Response>()
{
  return "hockey_stick_arm::srv::Calibrate_Response";
}

template<>
inline const char * name<hockey_stick_arm::srv::Calibrate_Response>()
{
  return "hockey_stick_arm/srv/Calibrate_Response";
}

template<>
struct has_fixed_size<hockey_stick_arm::srv::Calibrate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<hockey_stick_arm::srv::Calibrate_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<hockey_stick_arm::srv::Calibrate_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<hockey_stick_arm::srv::Calibrate>()
{
  return "hockey_stick_arm::srv::Calibrate";
}

template<>
inline const char * name<hockey_stick_arm::srv::Calibrate>()
{
  return "hockey_stick_arm/srv/Calibrate";
}

template<>
struct has_fixed_size<hockey_stick_arm::srv::Calibrate>
  : std::integral_constant<
    bool,
    has_fixed_size<hockey_stick_arm::srv::Calibrate_Request>::value &&
    has_fixed_size<hockey_stick_arm::srv::Calibrate_Response>::value
  >
{
};

template<>
struct has_bounded_size<hockey_stick_arm::srv::Calibrate>
  : std::integral_constant<
    bool,
    has_bounded_size<hockey_stick_arm::srv::Calibrate_Request>::value &&
    has_bounded_size<hockey_stick_arm::srv::Calibrate_Response>::value
  >
{
};

template<>
struct is_service<hockey_stick_arm::srv::Calibrate>
  : std::true_type
{
};

template<>
struct is_service_request<hockey_stick_arm::srv::Calibrate_Request>
  : std::true_type
{
};

template<>
struct is_service_response<hockey_stick_arm::srv::Calibrate_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // HOCKEY_STICK_ARM__SRV__DETAIL__CALIBRATE__TRAITS_HPP_
