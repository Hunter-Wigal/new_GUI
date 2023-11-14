// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice

#ifndef OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__STRUCT_HPP_
#define OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__ocean_optics_spectrometer__srv__CaptureSpectrometer_Request __attribute__((deprecated))
#else
# define DEPRECATED__ocean_optics_spectrometer__srv__CaptureSpectrometer_Request __declspec(deprecated)
#endif

namespace ocean_optics_spectrometer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureSpectrometer_Request_
{
  using Type = CaptureSpectrometer_Request_<ContainerAllocator>;

  explicit CaptureSpectrometer_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->integration_time = 0l;
    }
  }

  explicit CaptureSpectrometer_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->integration_time = 0l;
    }
  }

  // field types and members
  using _integration_time_type =
    int32_t;
  _integration_time_type integration_time;

  // setters for named parameter idiom
  Type & set__integration_time(
    const int32_t & _arg)
  {
    this->integration_time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ocean_optics_spectrometer__srv__CaptureSpectrometer_Request
    std::shared_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ocean_optics_spectrometer__srv__CaptureSpectrometer_Request
    std::shared_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureSpectrometer_Request_ & other) const
  {
    if (this->integration_time != other.integration_time) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureSpectrometer_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureSpectrometer_Request_

// alias to use template instance with default allocator
using CaptureSpectrometer_Request =
  ocean_optics_spectrometer::srv::CaptureSpectrometer_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ocean_optics_spectrometer


#ifndef _WIN32
# define DEPRECATED__ocean_optics_spectrometer__srv__CaptureSpectrometer_Response __attribute__((deprecated))
#else
# define DEPRECATED__ocean_optics_spectrometer__srv__CaptureSpectrometer_Response __declspec(deprecated)
#endif

namespace ocean_optics_spectrometer
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct CaptureSpectrometer_Response_
{
  using Type = CaptureSpectrometer_Response_<ContainerAllocator>;

  explicit CaptureSpectrometer_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit CaptureSpectrometer_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _wavelengths_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _wavelengths_type wavelengths;
  using _intensities_type =
    std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>>;
  _intensities_type intensities;

  // setters for named parameter idiom
  Type & set__wavelengths(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->wavelengths = _arg;
    return *this;
  }
  Type & set__intensities(
    const std::vector<double, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<double>> & _arg)
  {
    this->intensities = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__ocean_optics_spectrometer__srv__CaptureSpectrometer_Response
    std::shared_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__ocean_optics_spectrometer__srv__CaptureSpectrometer_Response
    std::shared_ptr<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CaptureSpectrometer_Response_ & other) const
  {
    if (this->wavelengths != other.wavelengths) {
      return false;
    }
    if (this->intensities != other.intensities) {
      return false;
    }
    return true;
  }
  bool operator!=(const CaptureSpectrometer_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CaptureSpectrometer_Response_

// alias to use template instance with default allocator
using CaptureSpectrometer_Response =
  ocean_optics_spectrometer::srv::CaptureSpectrometer_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace ocean_optics_spectrometer

namespace ocean_optics_spectrometer
{

namespace srv
{

struct CaptureSpectrometer
{
  using Request = ocean_optics_spectrometer::srv::CaptureSpectrometer_Request;
  using Response = ocean_optics_spectrometer::srv::CaptureSpectrometer_Response;
};

}  // namespace srv

}  // namespace ocean_optics_spectrometer

#endif  // OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__STRUCT_HPP_
