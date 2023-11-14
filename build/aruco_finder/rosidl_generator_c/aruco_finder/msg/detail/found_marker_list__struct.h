// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from aruco_finder:msg/FoundMarkerList.idl
// generated code does not contain a copyright notice

#ifndef ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__STRUCT_H_
#define ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'markers'
#include "aruco_finder/msg/detail/found_marker__struct.h"

/// Struct defined in msg/FoundMarkerList in the package aruco_finder.
typedef struct aruco_finder__msg__FoundMarkerList
{
  aruco_finder__msg__FoundMarker__Sequence markers;
  uint8_t count;
} aruco_finder__msg__FoundMarkerList;

// Struct for a sequence of aruco_finder__msg__FoundMarkerList.
typedef struct aruco_finder__msg__FoundMarkerList__Sequence
{
  aruco_finder__msg__FoundMarkerList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} aruco_finder__msg__FoundMarkerList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARUCO_FINDER__MSG__DETAIL__FOUND_MARKER_LIST__STRUCT_H_
