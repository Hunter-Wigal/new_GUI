// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: integration_time
  cdr << ros_message.integration_time;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ocean_optics_spectrometer::srv::CaptureSpectrometer_Request & ros_message)
{
  // Member: integration_time
  cdr >> ros_message.integration_time;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
get_serialized_size(
  const ocean_optics_spectrometer::srv::CaptureSpectrometer_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: integration_time
  {
    size_t item_size = sizeof(ros_message.integration_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
max_serialized_size_CaptureSpectrometer_Request(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: integration_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CaptureSpectrometer_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ocean_optics_spectrometer::srv::CaptureSpectrometer_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CaptureSpectrometer_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CaptureSpectrometer_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ocean_optics_spectrometer::srv::CaptureSpectrometer_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CaptureSpectrometer_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CaptureSpectrometer_Request(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CaptureSpectrometer_Request__callbacks = {
  "ocean_optics_spectrometer::srv",
  "CaptureSpectrometer_Request",
  _CaptureSpectrometer_Request__cdr_serialize,
  _CaptureSpectrometer_Request__cdr_deserialize,
  _CaptureSpectrometer_Request__get_serialized_size,
  _CaptureSpectrometer_Request__max_serialized_size
};

static rosidl_message_type_support_t _CaptureSpectrometer_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CaptureSpectrometer_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ocean_optics_spectrometer

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ocean_optics_spectrometer
const rosidl_message_type_support_t *
get_message_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer_Request>()
{
  return &ocean_optics_spectrometer::srv::typesupport_fastrtps_cpp::_CaptureSpectrometer_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)() {
  return &ocean_optics_spectrometer::srv::typesupport_fastrtps_cpp::_CaptureSpectrometer_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

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
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: wavelengths
  {
    cdr << ros_message.wavelengths;
  }
  // Member: intensities
  {
    cdr << ros_message.intensities;
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ocean_optics_spectrometer::srv::CaptureSpectrometer_Response & ros_message)
{
  // Member: wavelengths
  {
    cdr >> ros_message.wavelengths;
  }

  // Member: intensities
  {
    cdr >> ros_message.intensities;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
get_serialized_size(
  const ocean_optics_spectrometer::srv::CaptureSpectrometer_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: wavelengths
  {
    size_t array_size = ros_message.wavelengths.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.wavelengths[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: intensities
  {
    size_t array_size = ros_message.intensities.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    size_t item_size = sizeof(ros_message.intensities[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ocean_optics_spectrometer
max_serialized_size_CaptureSpectrometer_Response(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: wavelengths
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: intensities
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static bool _CaptureSpectrometer_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ocean_optics_spectrometer::srv::CaptureSpectrometer_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _CaptureSpectrometer_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _CaptureSpectrometer_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ocean_optics_spectrometer::srv::CaptureSpectrometer_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _CaptureSpectrometer_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_CaptureSpectrometer_Response(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _CaptureSpectrometer_Response__callbacks = {
  "ocean_optics_spectrometer::srv",
  "CaptureSpectrometer_Response",
  _CaptureSpectrometer_Response__cdr_serialize,
  _CaptureSpectrometer_Response__cdr_deserialize,
  _CaptureSpectrometer_Response__get_serialized_size,
  _CaptureSpectrometer_Response__max_serialized_size
};

static rosidl_message_type_support_t _CaptureSpectrometer_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CaptureSpectrometer_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ocean_optics_spectrometer

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ocean_optics_spectrometer
const rosidl_message_type_support_t *
get_message_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer_Response>()
{
  return &ocean_optics_spectrometer::srv::typesupport_fastrtps_cpp::_CaptureSpectrometer_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)() {
  return &ocean_optics_spectrometer::srv::typesupport_fastrtps_cpp::_CaptureSpectrometer_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace ocean_optics_spectrometer
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _CaptureSpectrometer__callbacks = {
  "ocean_optics_spectrometer::srv",
  "CaptureSpectrometer",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)(),
};

static rosidl_service_type_support_t _CaptureSpectrometer__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_CaptureSpectrometer__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace ocean_optics_spectrometer

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ocean_optics_spectrometer
const rosidl_service_type_support_t *
get_service_type_support_handle<ocean_optics_spectrometer::srv::CaptureSpectrometer>()
{
  return &ocean_optics_spectrometer::srv::typesupport_fastrtps_cpp::_CaptureSpectrometer__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ocean_optics_spectrometer, srv, CaptureSpectrometer)() {
  return &ocean_optics_spectrometer::srv::typesupport_fastrtps_cpp::_CaptureSpectrometer__handle;
}

#ifdef __cplusplus
}
#endif
