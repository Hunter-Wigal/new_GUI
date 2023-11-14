// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from theora_webcams:msg/VideoFormat.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__TRAITS_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "theora_webcams/msg/detail/video_format__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'resolutions'
#include "theora_webcams/msg/detail/resolution__traits.hpp"

namespace theora_webcams
{

namespace msg
{

inline void to_flow_style_yaml(
  const VideoFormat & msg,
  std::ostream & out)
{
  out << "{";
  // member: format
  {
    out << "format: ";
    rosidl_generator_traits::value_to_yaml(msg.format, out);
    out << ", ";
  }

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
  const VideoFormat & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: format
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "format: ";
    rosidl_generator_traits::value_to_yaml(msg.format, out);
    out << "\n";
  }

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

inline std::string to_yaml(const VideoFormat & msg, bool use_flow_style = false)
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
  const theora_webcams::msg::VideoFormat & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::msg::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::msg::VideoFormat & msg)
{
  return theora_webcams::msg::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::msg::VideoFormat>()
{
  return "theora_webcams::msg::VideoFormat";
}

template<>
inline const char * name<theora_webcams::msg::VideoFormat>()
{
  return "theora_webcams/msg/VideoFormat";
}

template<>
struct has_fixed_size<theora_webcams::msg::VideoFormat>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<theora_webcams::msg::VideoFormat>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<theora_webcams::msg::VideoFormat>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__TRAITS_HPP_
