// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from theora_webcams:msg/Resolution.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__RESOLUTION__TRAITS_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__RESOLUTION__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "theora_webcams/msg/detail/resolution__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'framerates'
#include "theora_webcams/msg/detail/framerate__traits.hpp"

namespace theora_webcams
{

namespace msg
{

inline void to_flow_style_yaml(
  const Resolution & msg,
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

  // member: framerates
  {
    if (msg.framerates.size() == 0) {
      out << "framerates: []";
    } else {
      out << "framerates: [";
      size_t pending_items = msg.framerates.size();
      for (auto item : msg.framerates) {
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
  const Resolution & msg,
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

  // member: framerates
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.framerates.size() == 0) {
      out << "framerates: []\n";
    } else {
      out << "framerates:\n";
      for (auto item : msg.framerates) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const Resolution & msg, bool use_flow_style = false)
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
  const theora_webcams::msg::Resolution & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::msg::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::msg::Resolution & msg)
{
  return theora_webcams::msg::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::msg::Resolution>()
{
  return "theora_webcams::msg::Resolution";
}

template<>
inline const char * name<theora_webcams::msg::Resolution>()
{
  return "theora_webcams/msg/Resolution";
}

template<>
struct has_fixed_size<theora_webcams::msg::Resolution>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<theora_webcams::msg::Resolution>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<theora_webcams::msg::Resolution>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THEORA_WEBCAMS__MSG__DETAIL__RESOLUTION__TRAITS_HPP_
