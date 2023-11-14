// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from theora_webcams:msg/VideoFormat.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__BUILDER_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "theora_webcams/msg/detail/video_format__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace theora_webcams
{

namespace msg
{

namespace builder
{

class Init_VideoFormat_resolutions
{
public:
  explicit Init_VideoFormat_resolutions(::theora_webcams::msg::VideoFormat & msg)
  : msg_(msg)
  {}
  ::theora_webcams::msg::VideoFormat resolutions(::theora_webcams::msg::VideoFormat::_resolutions_type arg)
  {
    msg_.resolutions = std::move(arg);
    return std::move(msg_);
  }

private:
  ::theora_webcams::msg::VideoFormat msg_;
};

class Init_VideoFormat_format
{
public:
  Init_VideoFormat_format()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VideoFormat_resolutions format(::theora_webcams::msg::VideoFormat::_format_type arg)
  {
    msg_.format = std::move(arg);
    return Init_VideoFormat_resolutions(msg_);
  }

private:
  ::theora_webcams::msg::VideoFormat msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::msg::VideoFormat>()
{
  return theora_webcams::msg::builder::Init_VideoFormat_format();
}

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT__BUILDER_HPP_
