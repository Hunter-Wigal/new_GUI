// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from science_servo_control:srv/ReadDrumPosition.idl
// generated code does not contain a copyright notice

#ifndef SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__FUNCTIONS_H_
#define SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "science_servo_control/msg/rosidl_generator_c__visibility_control.h"

#include "science_servo_control/srv/detail/read_drum_position__struct.h"

/// Initialize srv/ReadDrumPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * science_servo_control__srv__ReadDrumPosition_Request
 * )) before or use
 * science_servo_control__srv__ReadDrumPosition_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Request__init(science_servo_control__srv__ReadDrumPosition_Request * msg);

/// Finalize srv/ReadDrumPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
void
science_servo_control__srv__ReadDrumPosition_Request__fini(science_servo_control__srv__ReadDrumPosition_Request * msg);

/// Create srv/ReadDrumPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * science_servo_control__srv__ReadDrumPosition_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
science_servo_control__srv__ReadDrumPosition_Request *
science_servo_control__srv__ReadDrumPosition_Request__create();

/// Destroy srv/ReadDrumPosition message.
/**
 * It calls
 * science_servo_control__srv__ReadDrumPosition_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
void
science_servo_control__srv__ReadDrumPosition_Request__destroy(science_servo_control__srv__ReadDrumPosition_Request * msg);

/// Check for srv/ReadDrumPosition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Request__are_equal(const science_servo_control__srv__ReadDrumPosition_Request * lhs, const science_servo_control__srv__ReadDrumPosition_Request * rhs);

/// Copy a srv/ReadDrumPosition message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Request__copy(
  const science_servo_control__srv__ReadDrumPosition_Request * input,
  science_servo_control__srv__ReadDrumPosition_Request * output);

/// Initialize array of srv/ReadDrumPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * science_servo_control__srv__ReadDrumPosition_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Request__Sequence__init(science_servo_control__srv__ReadDrumPosition_Request__Sequence * array, size_t size);

/// Finalize array of srv/ReadDrumPosition messages.
/**
 * It calls
 * science_servo_control__srv__ReadDrumPosition_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
void
science_servo_control__srv__ReadDrumPosition_Request__Sequence__fini(science_servo_control__srv__ReadDrumPosition_Request__Sequence * array);

/// Create array of srv/ReadDrumPosition messages.
/**
 * It allocates the memory for the array and calls
 * science_servo_control__srv__ReadDrumPosition_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
science_servo_control__srv__ReadDrumPosition_Request__Sequence *
science_servo_control__srv__ReadDrumPosition_Request__Sequence__create(size_t size);

/// Destroy array of srv/ReadDrumPosition messages.
/**
 * It calls
 * science_servo_control__srv__ReadDrumPosition_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
void
science_servo_control__srv__ReadDrumPosition_Request__Sequence__destroy(science_servo_control__srv__ReadDrumPosition_Request__Sequence * array);

/// Check for srv/ReadDrumPosition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Request__Sequence__are_equal(const science_servo_control__srv__ReadDrumPosition_Request__Sequence * lhs, const science_servo_control__srv__ReadDrumPosition_Request__Sequence * rhs);

/// Copy an array of srv/ReadDrumPosition messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Request__Sequence__copy(
  const science_servo_control__srv__ReadDrumPosition_Request__Sequence * input,
  science_servo_control__srv__ReadDrumPosition_Request__Sequence * output);

/// Initialize srv/ReadDrumPosition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * science_servo_control__srv__ReadDrumPosition_Response
 * )) before or use
 * science_servo_control__srv__ReadDrumPosition_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Response__init(science_servo_control__srv__ReadDrumPosition_Response * msg);

/// Finalize srv/ReadDrumPosition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
void
science_servo_control__srv__ReadDrumPosition_Response__fini(science_servo_control__srv__ReadDrumPosition_Response * msg);

/// Create srv/ReadDrumPosition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * science_servo_control__srv__ReadDrumPosition_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
science_servo_control__srv__ReadDrumPosition_Response *
science_servo_control__srv__ReadDrumPosition_Response__create();

/// Destroy srv/ReadDrumPosition message.
/**
 * It calls
 * science_servo_control__srv__ReadDrumPosition_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
void
science_servo_control__srv__ReadDrumPosition_Response__destroy(science_servo_control__srv__ReadDrumPosition_Response * msg);

/// Check for srv/ReadDrumPosition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Response__are_equal(const science_servo_control__srv__ReadDrumPosition_Response * lhs, const science_servo_control__srv__ReadDrumPosition_Response * rhs);

/// Copy a srv/ReadDrumPosition message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Response__copy(
  const science_servo_control__srv__ReadDrumPosition_Response * input,
  science_servo_control__srv__ReadDrumPosition_Response * output);

/// Initialize array of srv/ReadDrumPosition messages.
/**
 * It allocates the memory for the number of elements and calls
 * science_servo_control__srv__ReadDrumPosition_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Response__Sequence__init(science_servo_control__srv__ReadDrumPosition_Response__Sequence * array, size_t size);

/// Finalize array of srv/ReadDrumPosition messages.
/**
 * It calls
 * science_servo_control__srv__ReadDrumPosition_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
void
science_servo_control__srv__ReadDrumPosition_Response__Sequence__fini(science_servo_control__srv__ReadDrumPosition_Response__Sequence * array);

/// Create array of srv/ReadDrumPosition messages.
/**
 * It allocates the memory for the array and calls
 * science_servo_control__srv__ReadDrumPosition_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
science_servo_control__srv__ReadDrumPosition_Response__Sequence *
science_servo_control__srv__ReadDrumPosition_Response__Sequence__create(size_t size);

/// Destroy array of srv/ReadDrumPosition messages.
/**
 * It calls
 * science_servo_control__srv__ReadDrumPosition_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
void
science_servo_control__srv__ReadDrumPosition_Response__Sequence__destroy(science_servo_control__srv__ReadDrumPosition_Response__Sequence * array);

/// Check for srv/ReadDrumPosition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Response__Sequence__are_equal(const science_servo_control__srv__ReadDrumPosition_Response__Sequence * lhs, const science_servo_control__srv__ReadDrumPosition_Response__Sequence * rhs);

/// Copy an array of srv/ReadDrumPosition messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_science_servo_control
bool
science_servo_control__srv__ReadDrumPosition_Response__Sequence__copy(
  const science_servo_control__srv__ReadDrumPosition_Response__Sequence * input,
  science_servo_control__srv__ReadDrumPosition_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // SCIENCE_SERVO_CONTROL__SRV__DETAIL__READ_DRUM_POSITION__FUNCTIONS_H_
