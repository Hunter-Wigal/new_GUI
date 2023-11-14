// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__rosidl_typesupport_fastrtps_cpp.hpp.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice

#ifndef OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
#define OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_

#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "ocean_optics_spectrometer/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

#include "fastcdr/Cdr.h"

namespace ocean_optics_spectrometer
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
cdr_serialize(
  const ocean_optics_spectrometer::srv::CaptureSpectrometer_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ocean_optics_spectrometer::srv::CaptureSpectrometer_Request & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
get_serialized_size(
  const ocean_optics_spectrometer::srv::CaptureSpectrometer_Request & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
max_serialized_size_CaptureSpectrometer_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ocean_optics_spectrometer

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)();

#ifdef __cplusplus
}
#endif

// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ocean_optics_spectrometer/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"
// already included above
// #include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.hpp"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// already included above
// #include "fastcdr/Cdr.h"

namespace ocean_optics_spectrometer
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
cdr_serialize(
  const ocean_optics_spectrometer::srv::CaptureSpectrometer_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr);

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ocean_optics_spectrometer::srv::CaptureSpectrometer_Response & ros_message);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
get_serialized_size(
  const ocean_optics_spectrometer::srv::CaptureSpectrometer_Response & ros_message,
  size_t current_alignment);

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
max_serialized_size_CaptureSpectrometer_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ocean_optics_spectrometer

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)();

#ifdef __cplusplus
}
#endif

#include "rmw/types.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_interface/macros.h"
// already included above
// #include "ocean_optics_spectrometer/msg/rosidl_typesupport_fastrtps_cpp__visibility_control.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
const rosidl_service_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer)();

#ifdef __cplusplus
}
#endif

#endif  // OCEAN_OPTICS_SPECTROMETER__SRV__DETAIL__CAPTURE_SPECTROMETER__ROSIDL_TYPESUPPORT_FASTRTPS_CPP_HPP_
