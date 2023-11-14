// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marker_interfacing:msg/GeodeticMarkerList.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER_LIST__STRUCT_H_
#define MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER_LIST__STRUCT_H_

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
#include "marker_interfacing/msg/detail/geodetic_marker__struct.h"

/// Struct defined in msg/GeodeticMarkerList in the package marker_interfacing.
typedef struct marker_interfacing__msg__GeodeticMarkerList
{
  marker_interfacing__msg__GeodeticMarker__Sequence markers;
  uint8_t count;
} marker_interfacing__msg__GeodeticMarkerList;

// Struct for a sequence of marker_interfacing__msg__GeodeticMarkerList.
typedef struct marker_interfacing__msg__GeodeticMarkerList__Sequence
{
  marker_interfacing__msg__GeodeticMarkerList * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marker_interfacing__msg__GeodeticMarkerList__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER_LIST__STRUCT_H_
