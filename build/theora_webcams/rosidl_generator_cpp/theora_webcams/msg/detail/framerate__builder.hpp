// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from theora_webcams:msg/Framerate.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__BUILDER_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "theora_webcams/msg/detail/framerate__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace theora_webcams
{

namespace msg
{

namespace builder
{

class Init_Framerate_denominator
{
public:
  explicit Init_Framerate_denominator(::theora_webcams::msg::Framerate & msg)
  : msg_(msg)
  {}
  ::theora_webcams::msg::Framerate denominator(::theora_webcams::msg::Framerate::_denominator_type arg)
  {
    msg_.denominator = std::move(arg);
    return std::move(msg_);
  }

private:
  ::theora_webcams::msg::Framerate msg_;
};

class Init_Framerate_numerator
{
public:
  Init_Framerate_numerator()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Framerate_denominator numerator(::theora_webcams::msg::Framerate::_numerator_type arg)
  {
    msg_.numerator = std::move(arg);
    return Init_Framerate_denominator(msg_);
  }

private:
  ::theora_webcams::msg::Framerate msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::msg::Framerate>()
{
  return theora_webcams::msg::builder::Init_Framerate_numerator();
}

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__MSG__DETAIL__FRAMERATE__BUILDER_HPP_
