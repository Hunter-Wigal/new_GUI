// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from science_servo_control:srv/SealDrum.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__SEAL_DRUM__STRUCT_H_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__SEAL_DRUM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/SealDrum in the package science_servo_control.
typedef struct science_servo_control__srv__SealDrum_Request
{
  int32_t drum_id;
} science_servo_control__srv__SealDrum_Request;

// Struct for a sequence of science_servo_control__srv__SealDrum_Request.
typedef struct science_servo_control__srv__SealDrum_Request__Sequence
{
  science_servo_control__srv__SealDrum_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} science_servo_control__srv__SealDrum_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/SealDrum in the package science_servo_control.
typedef struct science_servo_control__srv__SealDrum_Response
{
  uint8_t structure_needs_at_least_one_member;
} science_servo_control__srv__SealDrum_Response;

// Struct for a sequence of science_servo_control__srv__SealDrum_Response.
typedef struct science_servo_control__srv__SealDrum_Response__Sequence
{
  science_servo_control__srv__SealDrum_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} science_servo_control__srv__SealDrum_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__SEAL_DRUM__STRUCT_H_
