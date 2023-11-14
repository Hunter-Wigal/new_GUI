// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "ocean_optics_spectrometer/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.h"
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__functions.h"
#include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _CaptureSpectrometer_Request__ros_msg_type = ocean_optics_spectrometer__srv__CaptureSpectrometer_Request;

static bool _CaptureSpectrometer_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CaptureSpectrometer_Request__ros_msg_type * ros_message = static_cast<const _CaptureSpectrometer_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: integration_time
  {
    cdr << ros_message->integration_time;
  }

  return true;
}

static bool _CaptureSpectrometer_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CaptureSpectrometer_Request__ros_msg_type * ros_message = static_cast<_CaptureSpectrometer_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: integration_time
  {
    cdr >> ros_message->integration_time;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ocean_optics_spectrometer
size_t get_serialized_size_ocean_optics_spectrometer__srv__CaptureSpectrometer_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CaptureSpectrometer_Request__ros_msg_type * ros_message = static_cast<const _CaptureSpectrometer_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name integration_time
  {
    size_t item_size = sizeof(ros_message->integration_time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CaptureSpectrometer_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ocean_optics_spectrometer__srv__CaptureSpectrometer_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ocean_optics_spectrometer
size_t max_serialized_size_ocean_optics_spectrometer__srv__CaptureSpectrometer_Request(
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

  // member: integration_time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _CaptureSpectrometer_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ocean_optics_spectrometer__srv__CaptureSpectrometer_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CaptureSpectrometer_Request = {
  "ocean_optics_spectrometer::srv",
  "CaptureSpectrometer_Request",
  _CaptureSpectrometer_Request__cdr_serialize,
  _CaptureSpectrometer_Request__cdr_deserialize,
  _CaptureSpectrometer_Request__get_serialized_size,
  _CaptureSpectrometer_Request__max_serialized_size
};

static rosidl_message_type_support_t _CaptureSpectrometer_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CaptureSpectrometer_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)() {
  return &_CaptureSpectrometer_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "ocean_optics_spectrometer/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__struct.h"
// already included above
// #include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

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

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "rosidl_runtime_c/primitives_sequence.h"  // intensities, wavelengths
#include "rosidl_runtime_c/primitives_sequence_functions.h"  // intensities, wavelengths

// forward declare type support functions


using _CaptureSpectrometer_Response__ros_msg_type = ocean_optics_spectrometer__srv__CaptureSpectrometer_Response;

static bool _CaptureSpectrometer_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _CaptureSpectrometer_Response__ros_msg_type * ros_message = static_cast<const _CaptureSpectrometer_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: wavelengths
  {
    size_t size = ros_message->wavelengths.size;
    auto array_ptr = ros_message->wavelengths.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  // Field name: intensities
  {
    size_t size = ros_message->intensities.size;
    auto array_ptr = ros_message->intensities.data;
    cdr << static_cast<uint32_t>(size);
    cdr.serializeArray(array_ptr, size);
  }

  return true;
}

static bool _CaptureSpectrometer_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _CaptureSpectrometer_Response__ros_msg_type * ros_message = static_cast<_CaptureSpectrometer_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: wavelengths
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->wavelengths.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->wavelengths);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->wavelengths, size)) {
      fprintf(stderr, "failed to create array for field 'wavelengths'");
      return false;
    }
    auto array_ptr = ros_message->wavelengths.data;
    cdr.deserializeArray(array_ptr, size);
  }

  // Field name: intensities
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    if (ros_message->intensities.data) {
      rosidl_runtime_c__double__Sequence__fini(&ros_message->intensities);
    }
    if (!rosidl_runtime_c__double__Sequence__init(&ros_message->intensities, size)) {
      fprintf(stderr, "failed to create array for field 'intensities'");
      return false;
    }
    auto array_ptr = ros_message->intensities.data;
    cdr.deserializeArray(array_ptr, size);
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ocean_optics_spectrometer
size_t get_serialized_size_ocean_optics_spectrometer__srv__CaptureSpectrometer_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _CaptureSpectrometer_Response__ros_msg_type * ros_message = static_cast<const _CaptureSpectrometer_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name wavelengths
  {
    size_t array_size = ros_message->wavelengths.size;
    auto array_ptr = ros_message->wavelengths.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name intensities
  {
    size_t array_size = ros_message->intensities.size;
    auto array_ptr = ros_message->intensities.data;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);
    (void)array_ptr;
    size_t item_size = sizeof(array_ptr[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _CaptureSpectrometer_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_ocean_optics_spectrometer__srv__CaptureSpectrometer_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_ocean_optics_spectrometer
size_t max_serialized_size_ocean_optics_spectrometer__srv__CaptureSpectrometer_Response(
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

  // member: wavelengths
  {
    size_t array_size = 0;
    full_bounded = false;
    is_plain = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: intensities
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

static size_t _CaptureSpectrometer_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_ocean_optics_spectrometer__srv__CaptureSpectrometer_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_CaptureSpectrometer_Response = {
  "ocean_optics_spectrometer::srv",
  "CaptureSpectrometer_Response",
  _CaptureSpectrometer_Response__cdr_serialize,
  _CaptureSpectrometer_Response__cdr_deserialize,
  _CaptureSpectrometer_Response__get_serialized_size,
  _CaptureSpectrometer_Response__max_serialized_size
};

static rosidl_message_type_support_t _CaptureSpectrometer_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_CaptureSpectrometer_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)() {
  return &_CaptureSpectrometer_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "ocean_optics_spectrometer/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "ocean_optics_spectrometer/srv/capture_spectrometer.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t CaptureSpectrometer__callbacks = {
  "ocean_optics_spectrometer::srv",
  "CaptureSpectrometer",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ocean_optics_spectrometer, srv, CaptureSpectrometer_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ocean_optics_spectrometer, srv, CaptureSpectrometer_Response)(),
};

static rosidl_service_type_support_t CaptureSpectrometer__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &CaptureSpectrometer__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, ocean_optics_spectrometer, srv, CaptureSpectrometer)() {
  return &CaptureSpectrometer__handle;
}

#if defined(__cplusplus)
}
#endif
