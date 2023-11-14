// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from theora_webcams:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__MSG__DETAIL__STATUS__BUILDER_HPP_
#define THEORA_WEBCAMS__MSG__DETAIL__STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "theora_webcams/msg/detail/status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace theora_webcams
{

namespace msg
{

namespace builder
{

class Init_Status_exposure
{
public:
  explicit Init_Status_exposure(::theora_webcams::msg::Status & msg)
  : msg_(msg)
  {}
  ::theora_webcams::msg::Status exposure(::theora_webcams::msg::Status::_exposure_type arg)
  {
    msg_.exposure = std::move(arg);
    return std::move(msg_);
  }

private:
  ::theora_webcams::msg::Status msg_;
};

class Init_Status_framerate_denominator
{
public:
  explicit Init_Status_framerate_denominator(::theora_webcams::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_exposure framerate_denominator(::theora_webcams::msg::Status::_framerate_denominator_type arg)
  {
    msg_.framerate_denominator = std::move(arg);
    return Init_Status_exposure(msg_);
  }

private:
  ::theora_webcams::msg::Status msg_;
};

class Init_Status_framerate_numerator
{
public:
  explicit Init_Status_framerate_numerator(::theora_webcams::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_framerate_denominator framerate_numerator(::theora_webcams::msg::Status::_framerate_numerator_type arg)
  {
    msg_.framerate_numerator = std::move(arg);
    return Init_Status_framerate_denominator(msg_);
  }

private:
  ::theora_webcams::msg::Status msg_;
};

class Init_Status_height
{
public:
  explicit Init_Status_height(::theora_webcams::msg::Status & msg)
  : msg_(msg)
  {}
  Init_Status_framerate_numerator height(::theora_webcams::msg::Status::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_Status_framerate_numerator(msg_);
  }

private:
  ::theora_webcams::msg::Status msg_;
};

class Init_Status_width
{
public:
  Init_Status_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Status_height width(::theora_webcams::msg::Status::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_Status_height(msg_);
  }

private:
  ::theora_webcams::msg::Status msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::msg::Status>()
{
  return theora_webcams::msg::builder::Init_Status_width();
}

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__MSG__DETAIL__STATUS__BUILDER_HPP_
