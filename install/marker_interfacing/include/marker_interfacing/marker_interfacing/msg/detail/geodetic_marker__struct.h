// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from marker_interfacing:msg/GeodeticMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER__STRUCT_H_
#define MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'gps'
#include "geographic_msgs/msg/detail/geo_point__struct.h"
// Member 'marker_type'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/GeodeticMarker in the package marker_interfacing.
typedef struct marker_interfacing__msg__GeodeticMarker
{
  geographic_msgs__msg__GeoPoint gps;
  float waypoint_error;
  rosidl_runtime_c__String marker_type;
  uint8_t aruco_id;
  uint8_t aruco_id_2;
  uint8_t marker_id;
} marker_interfacing__msg__GeodeticMarker;

// Struct for a sequence of marker_interfacing__msg__GeodeticMarker.
typedef struct marker_interfacing__msg__GeodeticMarker__Sequence
{
  marker_interfacing__msg__GeodeticMarker * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} marker_interfacing__msg__GeodeticMarker__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MARKER_INTERFACING__MSG__DETAIL__GEODETIC_MARKER__STRUCT_H_
