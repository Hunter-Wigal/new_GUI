// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from theora_webcams:srv/GetResolutions.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__STRUCT_HPP_
#define THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__theora_webcams__srv__GetResolutions_Request __attribute__((deprecated))
#else
# define DEPRECATED__theora_webcams__srv__GetResolutions_Request __declspec(deprecated)
#endif

namespace theora_webcams
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetResolutions_Request_
{
  using Type = GetResolutions_Request_<ContainerAllocator>;

  explicit GetResolutions_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->structure_needs_at_least_one_member = 0;
    }
  }

  explicit GetResolutions_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
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
    theora_webcams::srv::GetResolutions_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const theora_webcams::srv::GetResolutions_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<theora_webcams::srv::GetResolutions_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<theora_webcams::srv::GetResolutions_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::GetResolutions_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::GetResolutions_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::GetResolutions_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::GetResolutions_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<theora_webcams::srv::GetResolutions_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<theora_webcams::srv::GetResolutions_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__theora_webcams__srv__GetResolutions_Request
    std::shared_ptr<theora_webcams::srv::GetResolutions_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__theora_webcams__srv__GetResolutions_Request
    std::shared_ptr<theora_webcams::srv::GetResolutions_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetResolutions_Request_ & other) const
  {
    if (this->structure_needs_at_least_one_member != other.structure_needs_at_least_one_member) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetResolutions_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetResolutions_Request_

// alias to use template instance with default allocator
using GetResolutions_Request =
  theora_webcams::srv::GetResolutions_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace theora_webcams


// Include directives for member types
// Member 'resolutions'
#include "theora_webcams/msg/detail/resolution__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__theora_webcams__srv__GetResolutions_Response __attribute__((deprecated))
#else
# define DEPRECATED__theora_webcams__srv__GetResolutions_Response __declspec(deprecated)
#endif

namespace theora_webcams
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct GetResolutions_Response_
{
  using Type = GetResolutions_Response_<ContainerAllocator>;

  explicit GetResolutions_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit GetResolutions_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _resolutions_type =
    std::vector<theora_webcams::msg::Resolution_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<theora_webcams::msg::Resolution_<ContainerAllocator>>>;
  _resolutions_type resolutions;

  // setters for named parameter idiom
  Type & set__resolutions(
    const std::vector<theora_webcams::msg::Resolution_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<theora_webcams::msg::Resolution_<ContainerAllocator>>> & _arg)
  {
    this->resolutions = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    theora_webcams::srv::GetResolutions_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const theora_webcams::srv::GetResolutions_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<theora_webcams::srv::GetResolutions_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<theora_webcams::srv::GetResolutions_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::GetResolutions_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::GetResolutions_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      theora_webcams::srv::GetResolutions_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<theora_webcams::srv::GetResolutions_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<theora_webcams::srv::GetResolutions_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<theora_webcams::srv::GetResolutions_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__theora_webcams__srv__GetResolutions_Response
    std::shared_ptr<theora_webcams::srv::GetResolutions_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__theora_webcams__srv__GetResolutions_Response
    std::shared_ptr<theora_webcams::srv::GetResolutions_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GetResolutions_Response_ & other) const
  {
    if (this->resolutions != other.resolutions) {
      return false;
    }
    return true;
  }
  bool operator!=(const GetResolutions_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GetResolutions_Response_

// alias to use template instance with default allocator
using GetResolutions_Response =
  theora_webcams::srv::GetResolutions_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace theora_webcams

namespace theora_webcams
{

namespace srv
{

struct GetResolutions
{
  using Request = theora_webcams::srv::GetResolutions_Request;
  using Response = theora_webcams::srv::GetResolutions_Response;
};

}  // namespace srv

}  // namespace theora_webcams

#endif  // THEORA_WEBCAMS__SRV__DETAIL__GET_RESOLUTIONS__STRUCT_HPP_
