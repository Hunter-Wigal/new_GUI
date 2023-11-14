// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from theora_webcams:msg/VideoFormatList.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__TRAITS_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "theora_webcams/msg/detail/video_format_list__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

// Include directives for member types
// Member 'formats'
#include "theora_webcams/msg/detail/video_format__traits.hpp"

namespace theora_webcams
{

namespace msg
{

inline void to_flow_style_yaml(
  const VideoFormatList & msg,
  std::ostream & out)
{
  out << "{";
  // member: formats
  {
    if (msg.formats.size() == 0) {
      out << "formats: []";
    } else {
      out << "formats: [";
      size_t pending_items = msg.formats.size();
      for (auto item : msg.formats) {
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
  const VideoFormatList & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: formats
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.formats.size() == 0) {
      out << "formats: []\n";
    } else {
      out << "formats:\n";
      for (auto item : msg.formats) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_block_style_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VideoFormatList & msg, bool use_flow_style = false)
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
  const theora_webcams::msg::VideoFormatList & msg,
  std::ostream & out, size_t indentation = 0)
{
  theora_webcams::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use theora_webcams::msg::to_yaml() instead")]]
inline std::string to_yaml(const theora_webcams::msg::VideoFormatList & msg)
{
  return theora_webcams::msg::to_yaml(msg);
}

template<>
inline const char * data_type<theora_webcams::msg::VideoFormatList>()
{
  return "theora_webcams::msg::VideoFormatList";
}

template<>
inline const char * name<theora_webcams::msg::VideoFormatList>()
{
  return "theora_webcams/msg/VideoFormatList";
}

template<>
struct has_fixed_size<theora_webcams::msg::VideoFormatList>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<theora_webcams::msg::VideoFormatList>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<theora_webcams::msg::VideoFormatList>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__TRAITS_HPP_
