// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from theora_webcams:srv/GetExposureBounds.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__GET_EXPOSURE_BOUNDS__STRUCT_HPP_
#define THEORA_WEBCAMS__SRV__DETAIL__GET_EXPOSURE_BOUNDS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__theora_webcams__srv__GetExposureBounds_Request __attribute__((deprecated))
#else
# define DEPRECATED__theora_webcams__srv__GetExposureBounds_Request __declspec(deprecated)
#endif

namespace theora_webcams
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetExposureBounds_Request_
{
  using Type = GetExposureBounds_Request_<ContainerAllocator>;

  explicit GetExposureBounds_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetExposureBounds_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  // field types and members
  using _structure_needs_at_least_one_member_type =
    uint8_t;
  _structure_needs_at_least_one_member_type structure_needs_at_least_one_member;


  // constant declarations

  // pointer types
  using RawPtr =
    theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__theora_webcams__srv__GetExposureBounds_Request
    std::shared_ptr<theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__theora_webcams__srv__GetExposureBounds_Request
    std::shared_ptr<theora_webcams::srv::GetExposureBounds_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetExposureBounds_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetExposureBounds_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetExposureBounds_Request_

// alias to use template instance with default allocator
using GetExposureBounds_Request =
  theora_webcams::srv::GetExposureBounds_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace theora_webcams


#ifndef _WIN32
# define DEPRECATED__theora_webcams__srv__GetExposureBounds_Response __attribute__((deprecated))
#else
# define DEPRECATED__theora_webcams__srv__GetExposureBounds_Response __declspec(deprecated)
#endif

namespace theora_webcams
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetExposureBounds_Response_
{
  using Type = GetExposureBounds_Response_<ContainerAllocator>;

  explicit GetExposureBounds_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supports_manual_exposure = false;
    }
  }

  explicit GetExposureBounds_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->supports_manual_exposure = false;
    }
  }

  // field types and members
  using _exposure_bounds_type =
    std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>>;
  _exposure_bounds_type exposure_bounds;
  using _supports_manual_exposure_type =
    bool;
  _supports_manual_exposure_type supports_manual_exposure;

  // setters for named parameter idiom
  Type & set__exposure_bounds(
    const std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> & _arg)
  {
    this->exposure_bounds = _arg;
    return *this;
  }
  Type & set__supports_manual_exposure(
    const bool & _arg)
  {
    this->supports_manual_exposure = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__theora_webcams__srv__GetExposureBounds_Response
    std::shared_ptr<theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__theora_webcams__srv__GetExposureBounds_Response
    std::shared_ptr<theora_webcams::srv::GetExposureBounds_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetExposureBounds_Response_ & other) const
  {
    if (this->exposure_bounds != other.exposure_bounds) {
      return false;
    }
    if (this->supports_manual_exposure != other.supports_manual_exposure) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetExposureBounds_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetExposureBounds_Response_

// alias to use template instance with default allocator
using GetExposureBounds_Response =
  theora_webcams::srv::GetExposureBounds_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace theora_webcams

namespace theora_webcams
{

namespace srv
{

struct GetExposureBounds
{
  using Request = theora_webcams::srv::GetExposureBounds_Request;
  using Response = theora_webcams::srv::GetExposureBounds_Response;
};

}  // namespace srv

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__SRV__DETAIL__GET_EXPOSURE_BOUNDS__STRUCT_HPP_
