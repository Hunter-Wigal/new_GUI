// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from theora_webcams:srv/ChangeVideo.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__BUILDER_HPP_
#define THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "theora_webcams/srv/detail/change_video__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace theora_webcams
{

namespace srv
{

namespace builder
{

class Init_ChangeVideo_Request_force_restart
{
public:
  explicit Init_ChangeVideo_Request_force_restart(::theora_webcams::srv::ChangeVideo_Request & msg)
  : msg_(msg)
  {}
  ::theora_webcams::srv::ChangeVideo_Request force_restart(::theora_webcams::srv::ChangeVideo_Request::_force_restart_type arg)
  {
    msg_.force_restart = std::move(arg);
    return std::move(msg_);
  }

private:
  ::theora_webcams::srv::ChangeVideo_Request msg_;
};

class Init_ChangeVideo_Request_start
{
public:
  explicit Init_ChangeVideo_Request_start(::theora_webcams::srv::ChangeVideo_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeVideo_Request_force_restart start(::theora_webcams::srv::ChangeVideo_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_ChangeVideo_Request_force_restart(msg_);
  }

private:
  ::theora_webcams::srv::ChangeVideo_Request msg_;
};

class Init_ChangeVideo_Request_fps_den
{
public:
  explicit Init_ChangeVideo_Request_fps_den(::theora_webcams::srv::ChangeVideo_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeVideo_Request_start fps_den(::theora_webcams::srv::ChangeVideo_Request::_fps_den_type arg)
  {
    msg_.fps_den = std::move(arg);
    return Init_ChangeVideo_Request_start(msg_);
  }

private:
  ::theora_webcams::srv::ChangeVideo_Request msg_;
};

class Init_ChangeVideo_Request_fps_num
{
public:
  explicit Init_ChangeVideo_Request_fps_num(::theora_webcams::srv::ChangeVideo_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeVideo_Request_fps_den fps_num(::theora_webcams::srv::ChangeVideo_Request::_fps_num_type arg)
  {
    msg_.fps_num = std::move(arg);
    return Init_ChangeVideo_Request_fps_den(msg_);
  }

private:
  ::theora_webcams::srv::ChangeVideo_Request msg_;
};

class Init_ChangeVideo_Request_height
{
public:
  explicit Init_ChangeVideo_Request_height(::theora_webcams::srv::ChangeVideo_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeVideo_Request_fps_num height(::theora_webcams::srv::ChangeVideo_Request::_height_type arg)
  {
    msg_.height = std::move(arg);
    return Init_ChangeVideo_Request_fps_num(msg_);
  }

private:
  ::theora_webcams::srv::ChangeVideo_Request msg_;
};

class Init_ChangeVideo_Request_width
{
public:
  Init_ChangeVideo_Request_width()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeVideo_Request_height width(::theora_webcams::srv::ChangeVideo_Request::_width_type arg)
  {
    msg_.width = std::move(arg);
    return Init_ChangeVideo_Request_height(msg_);
  }

private:
  ::theora_webcams::srv::ChangeVideo_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::srv::ChangeVideo_Request>()
{
  return theora_webcams::srv::builder::Init_ChangeVideo_Request_width();
}

}  // namespace theora_webcams


namespace theora_webcams
{

namespace srv
{

namespace builder
{

class Init_ChangeVideo_Response_success
{
public:
  Init_ChangeVideo_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::theora_webcams::srv::ChangeVideo_Response success(::theora_webcams::srv::ChangeVideo_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::theora_webcams::srv::ChangeVideo_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::theora_webcams::srv::ChangeVideo_Response>()
{
  return theora_webcams::srv::builder::Init_ChangeVideo_Response_success();
}

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__BUILDER_HPP_
