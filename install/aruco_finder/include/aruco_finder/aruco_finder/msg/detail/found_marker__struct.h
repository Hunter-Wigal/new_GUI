// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_finder:msg/FoundMarker.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__STRUCT_H_
#define ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'marker_enu'
#include "geometry_msgs/msg/detail/point__struct.h"

/// Struct defined in msg/FoundMarker in the package aruco_finder.
typedef struct aruco_finder__msg__FoundMarker
{
  geometry_msgs__msg__Point marker_enu;
  uint8_t aruco_id;
} aruco_finder__msg__FoundMarker;

// Struct for a sequence of aruco_finder__msg__FoundMarker.
typedef struct aruco_finder__msg__FoundMarker__Sequence
{
  aruco_finder__msg__FoundMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_finder__msg__FoundMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER__STRUCT_H_
