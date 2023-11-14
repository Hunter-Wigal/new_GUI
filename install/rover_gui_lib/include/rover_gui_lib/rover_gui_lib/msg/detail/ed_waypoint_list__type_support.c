// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from rover_gui_lib:msg/EDWaypointList.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "rover_gui_lib/msg/detail/ed_waypoint_list__rosidl_typesupport_introspection_c.h"
#include "rover_gui_lib/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "rover_gui_lib/msg/detail/ed_waypoint_list__functions.h"
#include "rover_gui_lib/msg/detail/ed_waypoint_list__struct.h"


// Include directives for member types
// Member `waypoints`
#include "rover_gui_lib/msg/ed_waypoint.h"
// Member `waypoints`
#include "rover_gui_lib/msg/detail/ed_waypoint__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  rover_gui_lib__msg__EDWaypointList__init(message_memory);
}

void rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_fini_function(void * message_memory)
{
  rover_gui_lib__msg__EDWaypointList__fini(message_memory);
}

size_t rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__size_function__EDWaypointList__waypoints(
  const void * untyped_member)
{
  const rover_gui_lib__msg__EDWaypoint__Sequence * member =
    (const rover_gui_lib__msg__EDWaypoint__Sequence *)(untyped_member);
  return member->size;
}

const void * rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__get_const_function__EDWaypointList__waypoints(
  const void * untyped_member, size_t index)
{
  const rover_gui_lib__msg__EDWaypoint__Sequence * member =
    (const rover_gui_lib__msg__EDWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void * rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__get_function__EDWaypointList__waypoints(
  void * untyped_member, size_t index)
{
  rover_gui_lib__msg__EDWaypoint__Sequence * member =
    (rover_gui_lib__msg__EDWaypoint__Sequence *)(untyped_member);
  return &member->data[index];
}

void rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__fetch_function__EDWaypointList__waypoints(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rover_gui_lib__msg__EDWaypoint * item =
    ((const rover_gui_lib__msg__EDWaypoint *)
    rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__get_const_function__EDWaypointList__waypoints(untyped_member, index));
  rover_gui_lib__msg__EDWaypoint * value =
    (rover_gui_lib__msg__EDWaypoint *)(untyped_value);
  *value = *item;
}

void rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__assign_function__EDWaypointList__waypoints(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rover_gui_lib__msg__EDWaypoint * item =
    ((rover_gui_lib__msg__EDWaypoint *)
    rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__get_function__EDWaypointList__waypoints(untyped_member, index));
  const rover_gui_lib__msg__EDWaypoint * value =
    (const rover_gui_lib__msg__EDWaypoint *)(untyped_value);
  *item = *value;
}

bool rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__resize_function__EDWaypointList__waypoints(
  void * untyped_member, size_t size)
{
  rover_gui_lib__msg__EDWaypoint__Sequence * member =
    (rover_gui_lib__msg__EDWaypoint__Sequence *)(untyped_member);
  rover_gui_lib__msg__EDWaypoint__Sequence__fini(member);
  return rover_gui_lib__msg__EDWaypoint__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_message_member_array[2] = {
  {
    "waypoints",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_gui_lib__msg__EDWaypointList, waypoints),  // bytes offset in struct
    NULL,  // default value
    rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__size_function__EDWaypointList__waypoints,  // size() function pointer
    rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__get_const_function__EDWaypointList__waypoints,  // get_const(index) function pointer
    rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__get_function__EDWaypointList__waypoints,  // get(index) function pointer
    rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__fetch_function__EDWaypointList__waypoints,  // fetch(index, &value) function pointer
    rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__assign_function__EDWaypointList__waypoints,  // assign(index, value) function pointer
    rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__resize_function__EDWaypointList__waypoints  // resize(index) function pointer
  },
  {
    "count",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(rover_gui_lib__msg__EDWaypointList, count),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_message_members = {
  "rover_gui_lib__msg",  // message namespace
  "EDWaypointList",  // message name
  2,  // number of fields
  sizeof(rover_gui_lib__msg__EDWaypointList),
  rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_message_member_array,  // message members
  rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_init_function,  // function to initialize message memory (memory has to be allocated)
  rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_message_type_support_handle = {
  0,
  &rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_rover_gui_lib
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_gui_lib, msg, EDWaypointList)() {
  rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, rover_gui_lib, msg, EDWaypoint)();
  if (!rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_message_type_support_handle.typesupport_identifier) {
    rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &rover_gui_lib__msg__EDWaypointList__rosidl_typesupport_introspection_c__EDWaypointList_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
