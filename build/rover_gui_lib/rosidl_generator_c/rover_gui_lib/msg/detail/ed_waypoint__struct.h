// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from rover_gui_lib:msg/EDWaypoint.idl
// generated code does not contain a copyright notice

#ifndef ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__STRUCT_H_
#define ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/EDWaypoint in the package rover_gui_lib.
typedef struct rover_gui_lib__msg__EDWaypoint
{
  double latitude;
  double longitude;
  double radius;
  rosidl_runtime_c__String name;
} rover_gui_lib__msg__EDWaypoint;

// Struct for a sequence of rover_gui_lib__msg__EDWaypoint.
typedef struct rover_gui_lib__msg__EDWaypoint__Sequence
{
  rover_gui_lib__msg__EDWaypoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} rover_gui_lib__msg__EDWaypoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROVER_GUI_LIB__MSG__DETAIL__ED_WAYPOINT__STRUCT_H_
