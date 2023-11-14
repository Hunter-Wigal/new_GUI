// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from marker_interfacing:srv/EditMarker.idl
// generated code does not contain a copyright notice
#include "marker_interfacing/srv/detail/edit_marker__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "marker_interfacing/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marker_interfacing/srv/detail/edit_marker__struct.h"
#include "marker_interfacing/srv/detail/edit_marker__functions.h"
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

#include "rosidl_runtime_c/string.h"  // marker_type
#include "rosidl_runtime_c/string_functions.h"  // marker_type

// forward declare type support functions


using _EditMarker_Request__ros_msg_type = marker_interfacing__srv__EditMarker_Request;

static bool _EditMarker_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EditMarker_Request__ros_msg_type * ros_message = static_cast<const _EditMarker_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: lat
  {
    cdr << ros_message->lat;
  }

  // Field name: lon
  {
    cdr << ros_message->lon;
  }

  // Field name: alt
  {
    cdr << ros_message->alt;
  }

  // Field name: waypoint_error
  {
    cdr << ros_message->waypoint_error;
  }

  // Field name: marker_type
  {
    const rosidl_runtime_c__String * str = &ros_message->marker_type;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  // Field name: aruco_id
  {
    cdr << ros_message->aruco_id;
  }

  // Field name: aruco_id_2
  {
    cdr << ros_message->aruco_id_2;
  }

  // Field name: marker_id
  {
    cdr << ros_message->marker_id;
  }

  return true;
}

static bool _EditMarker_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EditMarker_Request__ros_msg_type * ros_message = static_cast<_EditMarker_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: lat
  {
    cdr >> ros_message->lat;
  }

  // Field name: lon
  {
    cdr >> ros_message->lon;
  }

  // Field name: alt
  {
    cdr >> ros_message->alt;
  }

  // Field name: waypoint_error
  {
    cdr >> ros_message->waypoint_error;
  }

  // Field name: marker_type
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->marker_type.data) {
      rosidl_runtime_c__String__init(&ros_message->marker_type);
    }
    bool succeeded = rosidl_runtime_c__String__assign(
      &ros_message->marker_type,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'marker_type'\n");
      return false;
    }
  }

  // Field name: aruco_id
  {
    cdr >> ros_message->aruco_id;
  }

  // Field name: aruco_id_2
  {
    cdr >> ros_message->aruco_id_2;
  }

  // Field name: marker_id
  {
    cdr >> ros_message->marker_id;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marker_interfacing
size_t get_serialized_size_marker_interfacing__srv__EditMarker_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EditMarker_Request__ros_msg_type * ros_message = static_cast<const _EditMarker_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name lat
  {
    size_t item_size = sizeof(ros_message->lat);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name lon
  {
    size_t item_size = sizeof(ros_message->lon);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name alt
  {
    size_t item_size = sizeof(ros_message->alt);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name waypoint_error
  {
    size_t item_size = sizeof(ros_message->waypoint_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name marker_type
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->marker_type.size + 1);
  // field.name aruco_id
  {
    size_t item_size = sizeof(ros_message->aruco_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name aruco_id_2
  {
    size_t item_size = sizeof(ros_message->aruco_id_2);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name marker_id
  {
    size_t item_size = sizeof(ros_message->marker_id);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EditMarker_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marker_interfacing__srv__EditMarker_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marker_interfacing
size_t max_serialized_size_marker_interfacing__srv__EditMarker_Request(
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

  // member: lat
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: lon
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: alt
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: waypoint_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: marker_type
  {
    size_t array_size = 1;

    full_bounded = false;
    is_plain = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }
  // member: aruco_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: aruco_id_2
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: marker_id
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EditMarker_Request__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marker_interfacing__srv__EditMarker_Request(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EditMarker_Request = {
  "marker_interfacing::srv",
  "EditMarker_Request",
  _EditMarker_Request__cdr_serialize,
  _EditMarker_Request__cdr_deserialize,
  _EditMarker_Request__get_serialized_size,
  _EditMarker_Request__max_serialized_size
};

static rosidl_message_type_support_t _EditMarker_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EditMarker_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, srv, EditMarker_Request)() {
  return &_EditMarker_Request__type_support;
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
// #include "marker_interfacing/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "marker_interfacing/srv/detail/edit_marker__struct.h"
// already included above
// #include "marker_interfacing/srv/detail/edit_marker__functions.h"
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


// forward declare type support functions


using _EditMarker_Response__ros_msg_type = marker_interfacing__srv__EditMarker_Response;

static bool _EditMarker_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _EditMarker_Response__ros_msg_type * ros_message = static_cast<const _EditMarker_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    cdr << (ros_message->success ? true : false);
  }

  return true;
}

static bool _EditMarker_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _EditMarker_Response__ros_msg_type * ros_message = static_cast<_EditMarker_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: success
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->success = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marker_interfacing
size_t get_serialized_size_marker_interfacing__srv__EditMarker_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _EditMarker_Response__ros_msg_type * ros_message = static_cast<const _EditMarker_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name success
  {
    size_t item_size = sizeof(ros_message->success);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _EditMarker_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_marker_interfacing__srv__EditMarker_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_marker_interfacing
size_t max_serialized_size_marker_interfacing__srv__EditMarker_Response(
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

  // member: success
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _EditMarker_Response__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_marker_interfacing__srv__EditMarker_Response(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_EditMarker_Response = {
  "marker_interfacing::srv",
  "EditMarker_Response",
  _EditMarker_Response__cdr_serialize,
  _EditMarker_Response__cdr_deserialize,
  _EditMarker_Response__get_serialized_size,
  _EditMarker_Response__max_serialized_size
};

static rosidl_message_type_support_t _EditMarker_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_EditMarker_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, srv, EditMarker_Response)() {
  return &_EditMarker_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "marker_interfacing/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "marker_interfacing/srv/edit_marker.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t EditMarker__callbacks = {
  "marker_interfacing::srv",
  "EditMarker",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, srv, EditMarker_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, srv, EditMarker_Response)(),
};

static rosidl_service_type_support_t EditMarker__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &EditMarker__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, marker_interfacing, srv, EditMarker)() {
  return &EditMarker__handle;
}

#if defined(__cplusplus)
}
#endif
