// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from science_servo_control:srv/ReadDrumPosition.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__TRAITS_HPP_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "science_servo_control/srv/detail/read_drum_position__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace science_servo_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadDrumPosition_Request & msg,
  std::ostream & out)
{
  out << "{";
  // member: drum_id
  {
    out << "drum_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drum_id, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadDrumPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drum_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drum_id: ";
    rosidl_generator_traits::value_to_yaml(msg.drum_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadDrumPosition_Request & msg, bool use_flow_style = false)
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
  const science_servo_control::srv::ReadDrumPosition_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  science_servo_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use science_servo_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const science_servo_control::srv::ReadDrumPosition_Request & msg)
{
  return science_servo_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<science_servo_control::srv::ReadDrumPosition_Request>()
{
  return "science_servo_control::srv::ReadDrumPosition_Request";
}

template<>
inline const char * name<science_servo_control::srv::ReadDrumPosition_Request>()
{
  return "science_servo_control/srv/ReadDrumPosition_Request";
}

template<>
struct has_fixed_size<science_servo_control::srv::ReadDrumPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<science_servo_control::srv::ReadDrumPosition_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<science_servo_control::srv::ReadDrumPosition_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace science_servo_control
{

namespace srv
{

inline void to_flow_style_yaml(
  const ReadDrumPosition_Response & msg,
  std::ostream & out)
{
  out << "{";
  // member: drum_pos
  {
    out << "drum_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.drum_pos, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const ReadDrumPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: drum_pos
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drum_pos: ";
    rosidl_generator_traits::value_to_yaml(msg.drum_pos, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ReadDrumPosition_Response & msg, bool use_flow_style = false)
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
  const science_servo_control::srv::ReadDrumPosition_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  science_servo_control::srv::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use science_servo_control::srv::to_yaml() instead")]]
inline std::string to_yaml(const science_servo_control::srv::ReadDrumPosition_Response & msg)
{
  return science_servo_control::srv::to_yaml(msg);
}

template<>
inline const char * data_type<science_servo_control::srv::ReadDrumPosition_Response>()
{
  return "science_servo_control::srv::ReadDrumPosition_Response";
}

template<>
inline const char * name<science_servo_control::srv::ReadDrumPosition_Response>()
{
  return "science_servo_control/srv/ReadDrumPosition_Response";
}

template<>
struct has_fixed_size<science_servo_control::srv::ReadDrumPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<science_servo_control::srv::ReadDrumPosition_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<science_servo_control::srv::ReadDrumPosition_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<science_servo_control::srv::ReadDrumPosition>()
{
  return "science_servo_control::srv::ReadDrumPosition";
}

template<>
inline const char * name<science_servo_control::srv::ReadDrumPosition>()
{
  return "science_servo_control/srv/ReadDrumPosition";
}

template<>
struct has_fixed_size<science_servo_control::srv::ReadDrumPosition>
  : std::integral_constant<
    bool,
    has_fixed_size<science_servo_control::srv::ReadDrumPosition_Request>::value &&
    has_fixed_size<science_servo_control::srv::ReadDrumPosition_Response>::value
  >
{
};

template<>
struct has_bounded_size<science_servo_control::srv::ReadDrumPosition>
  : std::integral_constant<
    bool,
    has_bounded_size<science_servo_control::srv::ReadDrumPosition_Request>::value &&
    has_bounded_size<science_servo_control::srv::ReadDrumPosition_Response>::value
  >
{
};

template<>
struct is_service<science_servo_control::srv::ReadDrumPosition>
  : std::true_type
{
};

template<>
struct is_service_request<science_servo_control::srv::ReadDrumPosition_Request>
  : std::true_type
{
};

template<>
struct is_service_response<science_servo_control::srv::ReadDrumPosition_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__TRAITS_HPP_
