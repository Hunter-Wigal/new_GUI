// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice

#ifndef OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__BUILDER_HPP_
#define OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace ocean_optics_spectrometer
{

namespace srv
{

namespace builder
{

class Init_CaptureSpectrometer_Request_integration_time
{
public:
  Init_CaptureSpectrometer_Request_integration_time()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ocean_optics_spectrometer::srv::CaptureSpectrometer_Request integration_time(::ocean_optics_spectrometer::srv::CaptureSpectrometer_Request::_integration_time_type arg)
  {
    msg_.integration_time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocean_optics_spectrometer::srv::CaptureSpectrometer_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>()
{
  return ocean_optics_spectrometer::srv::builder::Init_CaptureSpectrometer_Request_integration_time();
}

}  // namespace ocean_optics_spectrometer


namespace ocean_optics_spectrometer
{

namespace srv
{

namespace builder
{

class Init_CaptureSpectrometer_Response_intensities
{
public:
  explicit Init_CaptureSpectrometer_Response_intensities(::ocean_optics_spectrometer::srv::CaptureSpectrometer_Response & msg)
  : msg_(msg)
  {}
  ::ocean_optics_spectrometer::srv::CaptureSpectrometer_Response intensities(::ocean_optics_spectrometer::srv::CaptureSpectrometer_Response::_intensities_type arg)
  {
    msg_.intensities = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ocean_optics_spectrometer::srv::CaptureSpectrometer_Response msg_;
};

class Init_CaptureSpectrometer_Response_wavelengths
{
public:
  Init_CaptureSpectrometer_Response_wavelengths()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CaptureSpectrometer_Response_intensities wavelengths(::ocean_optics_spectrometer::srv::CaptureSpectrometer_Response::_wavelengths_type arg)
  {
    msg_.wavelengths = std::move(arg);
    return Init_CaptureSpectrometer_Response_intensities(msg_);
  }

private:
  ::ocean_optics_spectrometer::srv::CaptureSpectrometer_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>()
{
  return ocean_optics_spectrometer::srv::builder::Init_CaptureSpectrometer_Response_wavelengths();
}

}  // namespace ocean_optics_spectrometer

#endif  // OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__BUILDER_HPP_
