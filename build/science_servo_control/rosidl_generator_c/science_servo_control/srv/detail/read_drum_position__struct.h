// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from science_servo_control:srv/ReadDrumPosition.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__STRUCT_H_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/ReadDrumPosition in the package science_servo_control.
typedef struct science_servo_control__srv__ReadDrumPosition_Request
{
  int32_t drum_id;
} science_servo_control__srv__ReadDrumPosition_Request;

// Struct for a sequence of science_servo_control__srv__ReadDrumPosition_Request.
typedef struct science_servo_control__srv__ReadDrumPosition_Request__Sequence
{
  science_servo_control__srv__ReadDrumPosition_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} science_servo_control__srv__ReadDrumPosition_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/ReadDrumPosition in the package science_servo_control.
typedef struct science_servo_control__srv__ReadDrumPosition_Response
{
  int32_t drum_pos;
} science_servo_control__srv__ReadDrumPosition_Response;

// Struct for a sequence of science_servo_control__srv__ReadDrumPosition_Response.
typedef struct science_servo_control__srv__ReadDrumPosition_Response__Sequence
{
  science_servo_control__srv__ReadDrumPosition_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} science_servo_control__srv__ReadDrumPosition_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__STRUCT_H_
