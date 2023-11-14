// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from theora_webcams:msg/Resolution.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__RESOLUTION__BUILDER_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__RESOLUTION__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "theora_webcams/msg/detail/resolution__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace theora_webcams
{

namespace msg
{

namespace builder
{

class Init_Resolution_framerates
{
public:
  explicit Init_Resolution_framerates(::theora_webcams::msg::Resolution & msg)
  : msg_(msg)
  {}
  ::theora_webcams::msg::Resolution framerates(::theora_webcams::msg::Resolution::_framerates_type arg)
  {
    msg_.framerates = std::move(arg);
    return std::move(msg_);
  }

private:
  ::theora_webcams::msg::Resolution msg_;
};

class Init_Resolution_height
{
public:
  explicit Init_Resolution_height(::theora_webcams::msg::Resolution & msg)
  : msg_(msg)
  {}
  Init_Resolution_framerates height(::theora_webcams::msg::Resolution::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Resolution_framerates(msg_);
  }

private:
  ::theora_webcams::msg::Resolution msg_;
};

class Init_Resolution_width
{
public:
  Init_Resolution_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Resolution_height width(::theora_webcams::msg::Resolution::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Resolution_height(msg_);
  }

private:
  ::theora_webcams::msg::Resolution msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::msg::Resolution>()
{
  return theora_webcams::msg::builder::Init_Resolution_width();
}

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__MSG__DETAIL__RESOLUTION__BUILDER_HPP_
