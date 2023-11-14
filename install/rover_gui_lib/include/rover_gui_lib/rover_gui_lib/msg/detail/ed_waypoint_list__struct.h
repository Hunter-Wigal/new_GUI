// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rover_gui_lib:msg/EDWaypointList.idl
// generated code does not contain a copyright notice

#ifndef ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__STRUCT_H_
#define ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoints'
#include "rover_gui_lib/msg/detail/ed_waypoint__struct.h"

/// Struct defined in msg/EDWaypointList in the package rover_gui_lib.
typedef struct rover_gui_lib__msg__EDWaypointList
{
  rover_gui_lib__msg__EDWaypoint__Sequence waypoints;
  uint8_t count;
} rover_gui_lib__msg__EDWaypointList;

// Struct for a sequence of rover_gui_lib__msg__EDWaypointList.
typedef struct rover_gui_lib__msg__EDWaypointList__Sequence
{
  rover_gui_lib__msg__EDWaypointList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_gui_lib__msg__EDWaypointList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT_LIST__STRUCT_H_
