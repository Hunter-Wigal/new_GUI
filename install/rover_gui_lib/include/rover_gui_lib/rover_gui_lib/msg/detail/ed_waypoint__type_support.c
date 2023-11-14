// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rover_gui_lib:msg/EDWaypoint.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rover_gui_lib/msg/detail/ed_waypoint__rosidl_typesupport_introspection_c.h"
#include "rover_gui_lib/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rover_gui_lib/msg/detail/ed_waypoint__functions.h"
#include "rover_gui_lib/msg/detail/ed_waypoint__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_gui_lib__msg__EDWaypoint__init(message_memory);
}

void rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_fini_function(void * message_memory)
{
  rover_gui_lib__msg__EDWaypoint__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_message_member_array[4] = {
  {
    "latitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_gui_lib__msg__EDWaypoint, latitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "longitude",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_gui_lib__msg__EDWaypoint, longitude),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "radius",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_gui_lib__msg__EDWaypoint, radius),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_gui_lib__msg__EDWaypoint, name),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_message_members = {
  "rover_gui_lib__msg",  // message namespace
  "EDWaypoint",  // message name
  4,  // number of fields
  sizeof(rover_gui_lib__msg__EDWaypoint),
  rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_message_member_array,  // message members
  rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_message_type_support_handle = {
  0,
  &rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_gui_lib
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_gui_lib, msg, EDWaypoint)() {
  if (!rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_message_type_support_handle.typesupport_identifier) {
    rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_gui_lib__msg__EDWaypoint__rosidl_typesupport_introspection_c__EDWaypoint_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
