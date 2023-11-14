// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from theora_webcams:msg/Framerate.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__TRAITS_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "theora_webcams/msg/detail/framerate__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace theora_webcams
{

namespace msg
{

inline void to_flow_style_yaml(
  const Framerate & msg,
  std::ostream & out)
{
  out << "{";
  // member: numerator
  {
    out << "numerator: ";
    rosidl_generator_traits::value_to_yaml(msg.numerator, out);
    out << ", ";
  }

  // member: denominator
  {
    out << "denominator: ";
    rosidl_generator_traits::value_to_yaml(msg.denominator, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const Framerate & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: numerator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "numerator: ";
    rosidl_generator_traits::value_to_yaml(msg.numerator, out);
    out << "\n";
  }

  // member: denominator
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "denominator: ";
    rosidl_generator_traits::value_to_yaml(msg.denominator, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Framerate & msg, bool use_flow_style = false)
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
  const theora_webcams::msg::Framerate & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::msg::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::msg::Framerate & msg)
{
  return theora_webcams::msg::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::msg::Framerate>()
{
  return "theora_webcams::msg::Framerate";
}

template<>
inline const char * name<theora_webcams::msg::Framerate>()
{
  return "theora_webcams/msg/Framerate";
}

template<>
struct has_fixed_size<theora_webcams::msg::Framerate>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<theora_webcams::msg::Framerate>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<theora_webcams::msg::Framerate>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__TRAITS_HPP_
