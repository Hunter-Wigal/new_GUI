// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from theora_webcams:srv/ChangeVideo.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__STRUCT_HPP_
#define THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__theora_webcams__srv__ChangeVideo_Request __attribute__((deprecated))
#else
# define DEPRECATED__theora_webcams__srv__ChangeVideo_Request __declspec(deprecated)
#endif

namespace theora_webcams
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeVideo_Request_
{
  using Type = ChangeVideo_Request_<ContainerAllocator>;

  explicit ChangeVideo_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
      this->fps_num = 0l;
      this->fps_den = 0l;
      this->start = false;
      this->force_restart = false;
    }
  }

  explicit ChangeVideo_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->width = 0l;
      this->height = 0l;
      this->fps_num = 0l;
      this->fps_den = 0l;
      this->start = false;
      this->force_restart = false;
    }
  }

  // field types and members
  using _width_type =
    int32_t;
  _width_type width;
  using _height_type =
    int32_t;
  _height_type height;
  using _fps_num_type =
    int32_t;
  _fps_num_type fps_num;
  using _fps_den_type =
    int32_t;
  _fps_den_type fps_den;
  using _start_type =
    bool;
  _start_type start;
  using _force_restart_type =
    bool;
  _force_restart_type force_restart;

  // setters for named parameter idiom
  Type & set__width(
    const int32_t & _arg)
  {
    this->width = _arg;
    return *this;
  }
  Type & set__height(
    const int32_t & _arg)
  {
    this->height = _arg;
    return *this;
  }
  Type & set__fps_num(
    const int32_t & _arg)
  {
    this->fps_num = _arg;
    return *this;
  }
  Type & set__fps_den(
    const int32_t & _arg)
  {
    this->fps_den = _arg;
    return *this;
  }
  Type & set__start(
    const bool & _arg)
  {
    this->start = _arg;
    return *this;
  }
  Type & set__force_restart(
    const bool & _arg)
  {
    this->force_restart = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__theora_webcams__srv__ChangeVideo_Request
    std::shared_ptr<theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__theora_webcams__srv__ChangeVideo_Request
    std::shared_ptr<theora_webcams::srv::ChangeVideo_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeVideo_Request_ & other) const
  {
    if (this->width != other.width) {
      return false;
    }
    if (this->height != other.height) {
      return false;
    }
    if (this->fps_num != other.fps_num) {
      return false;
    }
    if (this->fps_den != other.fps_den) {
      return false;
    }
    if (this->start != other.start) {
      return false;
    }
    if (this->force_restart != other.force_restart) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeVideo_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeVideo_Request_

// alias to use template instance with default allocator
using ChangeVideo_Request =
  theora_webcams::srv::ChangeVideo_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace theora_webcams


#ifndef _WIN32
# define DEPRECATED__theora_webcams__srv__ChangeVideo_Response __attribute__((deprecated))
#else
# define DEPRECATED__theora_webcams__srv__ChangeVideo_Response __declspec(deprecated)
#endif

namespace theora_webcams
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct ChangeVideo_Response_
{
  using Type = ChangeVideo_Response_<ContainerAllocator>;

  explicit ChangeVideo_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  explicit ChangeVideo_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->success = false;
    }
  }

  // field types and members
  using _success_type =
    bool;
  _success_type success;

  // setters for named parameter idiom
  Type & set__success(
    const bool & _arg)
  {
    this->success = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__theora_webcams__srv__ChangeVideo_Response
    std::shared_ptr<theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__theora_webcams__srv__ChangeVideo_Response
    std::shared_ptr<theora_webcams::srv::ChangeVideo_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ChangeVideo_Response_ & other) const
  {
    if (this->success != other.success) {
      return false;
    }
    return true;
  }
  bool operator!=(const ChangeVideo_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ChangeVideo_Response_

// alias to use template instance with default allocator
using ChangeVideo_Response =
  theora_webcams::srv::ChangeVideo_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace theora_webcams

namespace theora_webcams
{

namespace srv
{

struct ChangeVideo
{
  using Request = theora_webcams::srv::ChangeVideo_Request;
  using Response = theora_webcams::srv::ChangeVideo_Response;
};

}  // namespace srv

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__SRV__DETAIL__CHANGE_VIDEO__STRUCT_HPP_
