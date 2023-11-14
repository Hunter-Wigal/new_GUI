// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from science_servo_control:srv/RaiseLinearActuator.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__RAISE_LINEAR_ACTUATOR__TRAITS_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__RAISE_LINEAR_ACTUATOR__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "science_servo_control/srv/detail/raise_linear_actuator__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace science_servo_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const RaiseLinearActuator_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: actuator_id
  {
    out << "actuator_id: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RaiseLinearActuator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: actuator_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "actuator_id: ";
    rosidl_generator_traits::value_to_yaml(msg.actuator_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RaiseLinearActuator_Request & msg, bool use_flow_style = false)
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

}  // namespace science_servo_control

namespace rosidl_generator_traits
{

[[deprecated("use science_servo_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const science_servo_control::srv::RaiseLinearActuator_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  science_servo_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use science_servo_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const science_servo_control::srv::RaiseLinearActuator_Request & msg)
{
  return science_servo_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<science_servo_control::srv::RaiseLinearActuator_Request>()
{
  return "science_servo_control::srv::RaiseLinearActuator_Request";
}

template<>
inline const char * name<science_servo_control::srv::RaiseLinearActuator_Request>()
{
  return "science_servo_control/srv/RaiseLinearActuator_Request";
}

template<>
struct has_fixed_size<science_servo_control::srv::RaiseLinearActuator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<science_servo_control::srv::RaiseLinearActuator_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<science_servo_control::srv::RaiseLinearActuator_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace science_servo_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const RaiseLinearActuator_Response & msg,
  std::ostream & out)
{
  (void)msg;
  out << "null";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const RaiseLinearActuator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  (void)msg;
  (void)indentation;
  out << "null\n";
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const RaiseLinearActuator_Response & msg, bool use_flow_style = false)
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

}  // namespace science_servo_control

namespace rosidl_generator_traits
{

[[deprecated("use science_servo_control::srv::to_block_style_yaml() instead")]]
inline void to_yaml(
  const science_servo_control::srv::RaiseLinearActuator_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  science_servo_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use science_servo_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const science_servo_control::srv::RaiseLinearActuator_Response & msg)
{
  return science_servo_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<science_servo_control::srv::RaiseLinearActuator_Response>()
{
  return "science_servo_control::srv::RaiseLinearActuator_Response";
}

template<>
inline const char * name<science_servo_control::srv::RaiseLinearActuator_Response>()
{
  return "science_servo_control/srv/RaiseLinearActuator_Response";
}

template<>
struct has_fixed_size<science_servo_control::srv::RaiseLinearActuator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<science_servo_control::srv::RaiseLinearActuator_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<science_servo_control::srv::RaiseLinearActuator_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<science_servo_control::srv::RaiseLinearActuator>()
{
  return "science_servo_control::srv::RaiseLinearActuator";
}

template<>
inline const char * name<science_servo_control::srv::RaiseLinearActuator>()
{
  return "science_servo_control/srv/RaiseLinearActuator";
}

template<>
struct has_fixed_size<science_servo_control::srv::RaiseLinearActuator>
  : std::integral_constant<
    bool,
    has_fixed_size<science_servo_control::srv::RaiseLinearActuator_Request>::value &&
    has_fixed_size<science_servo_control::srv::RaiseLinearActuator_Response>::value
  >
{
};

template<>
struct has_bounded_size<science_servo_control::srv::RaiseLinearActuator>
  : std::integral_constant<
    bool,
    has_bounded_size<science_servo_control::srv::RaiseLinearActuator_Request>::value &&
    has_bounded_size<science_servo_control::srv::RaiseLinearActuator_Response>::value
  >
{
};

template<>
struct is_service<science_servo_control::srv::RaiseLinearActuator>
  : std::true_type
{
};

template<>
struct is_service_request<science_servo_control::srv::RaiseLinearActuator_Request>
  : std::true_type
{
};

template<>
struct is_service_response<science_servo_control::srv::RaiseLinearActuator_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__RAISE_LINEAR_ACTUATOR__TRAITS_HPP_
