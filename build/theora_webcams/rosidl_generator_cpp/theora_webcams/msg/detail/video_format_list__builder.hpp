// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from theora_webcams:msg/VideoFormatList.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__BUILDER_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "theora_webcams/msg/detail/video_format_list__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace theora_webcams
{

namespace msg
{

namespace builder
{

class Init_VideoFormatList_formats
{
public:
  Init_VideoFormatList_formats()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::theora_webcams::msg::VideoFormatList formats(::theora_webcams::msg::VideoFormatList::_formats_type arg)
  {
    msg_.formats = std::move(arg);
    return std::move(msg_);
  }

private:
  ::theora_webcams::msg::VideoFormatList msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::msg::VideoFormatList>()
{
  return theora_webcams::msg::builder::Init_VideoFormatList_formats();
}

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__MSG__DETAIL__VIDEO_FORMAT_LIST__BUILDER_HPP_
