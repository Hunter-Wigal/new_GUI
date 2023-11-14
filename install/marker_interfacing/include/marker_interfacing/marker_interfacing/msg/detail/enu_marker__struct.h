// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marker_interfacing:msg/ENUMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__STRUCT_H_
#define MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'waypoint_enu'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'marker_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/ENUMarker in the package marker_interfacing.
typedef struct marker_interfacing__msg__ENUMarker
{
  geometry_msgs__msg__Point waypoint_enu;
  float waypoint_error;
  rosidl_runtime_c__String marker_type;
  uint8_t aruco_id;
  uint8_t aruco_id_2;
  uint8_t marker_id;
} marker_interfacing__msg__ENUMarker;

// Struct for a sequence of marker_interfacing__msg__ENUMarker.
typedef struct marker_interfacing__msg__ENUMarker__Sequence
{
  marker_interfacing__msg__ENUMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marker_interfacing__msg__ENUMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARKER_INTERFACING__MSG__DETAIL__ENU_MARKER__STRUCT_H_
