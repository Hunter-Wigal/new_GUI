// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from theora_webcams:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__STATUS__TRAITS_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__STATUS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "theora_webcams/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace theora_webcams
{

namespace msg
{

inline void to_flow_style_yaml(
  const Status & msg,
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

  // member: framerate_numerator
  {
    out << "framerate_numerator: ";
    rosidl_generator_traits::value_to_yaml(msg.framerate_numerator, out);
    out << ", ";
  }

  // member: framerate_denominator
  {
    out << "framerate_denominator: ";
    rosidl_generator_traits::value_to_yaml(msg.framerate_denominator, out);
    out << ", ";
  }

  // member: exposure
  {
    out << "exposure: ";
    rosidl_generator_traits::value_to_yaml(msg.exposure, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Status & msg,
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

  // member: framerate_numerator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "framerate_numerator: ";
    rosidl_generator_traits::value_to_yaml(msg.framerate_numerator, out);
    out << "\n";
  }

  // member: framerate_denominator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "framerate_denominator: ";
    rosidl_generator_traits::value_to_yaml(msg.framerate_denominator, out);
    out << "\n";
  }

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

inline std::string to_yaml(const Status & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace theora_webcams

namespace rosidl_generator_traits
{

[[deprecated("use theora_webcams::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const theora_webcams::msg::Status & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::msg::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::msg::Status & msg)
{
  return theora_webcams::msg::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::msg::Status>()
{
  return "theora_webcams::msg::Status";
}

template<>
inline const char * name<theora_webcams::msg::Status>()
{
  return "theora_webcams/msg/Status";
}

template<>
struct has_fixed_size<theora_webcams::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<theora_webcams::msg::Status>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<theora_webcams::msg::Status>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THEORA_WEBCAMS__MSG__DETAIL__STATUS__TRAITS_HPP_
