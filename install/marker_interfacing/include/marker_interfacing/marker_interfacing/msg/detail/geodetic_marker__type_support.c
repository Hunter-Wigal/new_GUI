// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from marker_interfacing:msg/GeodeticMarker.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "marker_interfacing/msg/detail/geodetic_marker__rosidl_typesupport_introspection_c.h"
#include "marker_interfacing/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "marker_interfacing/msg/detail/geodetic_marker__functions.h"
#include "marker_interfacing/msg/detail/geodetic_marker__struct.h"


// Include directives for member types
// Member `gps`
#include "geographic_msgs/msg/geo_point.h"
// Member `gps`
#include "geographic_msgs/msg/detail/geo_point__rosidl_typesupport_introspection_c.h"
// Member `marker_type`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  marker_interfacing__msg__GeodeticMarker__init(message_memory);
}

void marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_fini_function(void * message_memory)
{
  marker_interfacing__msg__GeodeticMarker__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_message_member_array[6] = {
  {
    "gps",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marker_interfacing__msg__GeodeticMarker, gps),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "waypoint_error",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marker_interfacing__msg__GeodeticMarker, waypoint_error),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "marker_type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marker_interfacing__msg__GeodeticMarker, marker_type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aruco_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marker_interfacing__msg__GeodeticMarker, aruco_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "aruco_id_2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marker_interfacing__msg__GeodeticMarker, aruco_id_2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "marker_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(marker_interfacing__msg__GeodeticMarker, marker_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_message_members = {
  "marker_interfacing__msg",  // message namespace
  "GeodeticMarker",  // message name
  6,  // number of fields
  sizeof(marker_interfacing__msg__GeodeticMarker),
  marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_message_member_array,  // message members
  marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_init_function,  // function to initialize message memory (memory has to be allocated)
  marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_message_type_support_handle = {
  0,
  &marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_marker_interfacing
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, marker_interfacing, msg, GeodeticMarker)() {
  marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geographic_msgs, msg, GeoPoint)();
  if (!marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_message_type_support_handle.typesupport_identifier) {
    marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &marker_interfacing__msg__GeodeticMarker__rosidl_typesupport_introspection_c__GeodeticMarker_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
