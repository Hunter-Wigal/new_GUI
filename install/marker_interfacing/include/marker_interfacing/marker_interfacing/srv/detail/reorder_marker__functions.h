// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from marker_interfacing:srv/ReorderMarker.idl
// generated code does not contain a copyright notice

#ifndef MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKER__FUNCTIONS_H_
#define MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKER__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "marker_interfacing/msg/rosidl_generator_c__visibility_control.h"

#include "marker_interfacing/srv/detail/reorder_marker__struct.h"

/// Initialize srv/ReorderMarker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marker_interfacing__srv__ReorderMarker_Request
 * )) before or use
 * marker_interfacing__srv__ReorderMarker_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Request__init(marker_interfacing__srv__ReorderMarker_Request * msg);

/// Finalize srv/ReorderMarker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__srv__ReorderMarker_Request__fini(marker_interfacing__srv__ReorderMarker_Request * msg);

/// Create srv/ReorderMarker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marker_interfacing__srv__ReorderMarker_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
marker_interfacing__srv__ReorderMarker_Request *
marker_interfacing__srv__ReorderMarker_Request__create();

/// Destroy srv/ReorderMarker message.
/**
 * It calls
 * marker_interfacing__srv__ReorderMarker_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__srv__ReorderMarker_Request__destroy(marker_interfacing__srv__ReorderMarker_Request * msg);

/// Check for srv/ReorderMarker message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Request__are_equal(const marker_interfacing__srv__ReorderMarker_Request * lhs, const marker_interfacing__srv__ReorderMarker_Request * rhs);

/// Copy a srv/ReorderMarker message.
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
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Request__copy(
  const marker_interfacing__srv__ReorderMarker_Request * input,
  marker_interfacing__srv__ReorderMarker_Request * output);

/// Initialize array of srv/ReorderMarker messages.
/**
 * It allocates the memory for the number of elements and calls
 * marker_interfacing__srv__ReorderMarker_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Request__Sequence__init(marker_interfacing__srv__ReorderMarker_Request__Sequence * array, size_t size);

/// Finalize array of srv/ReorderMarker messages.
/**
 * It calls
 * marker_interfacing__srv__ReorderMarker_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__srv__ReorderMarker_Request__Sequence__fini(marker_interfacing__srv__ReorderMarker_Request__Sequence * array);

/// Create array of srv/ReorderMarker messages.
/**
 * It allocates the memory for the array and calls
 * marker_interfacing__srv__ReorderMarker_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
marker_interfacing__srv__ReorderMarker_Request__Sequence *
marker_interfacing__srv__ReorderMarker_Request__Sequence__create(size_t size);

/// Destroy array of srv/ReorderMarker messages.
/**
 * It calls
 * marker_interfacing__srv__ReorderMarker_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__srv__ReorderMarker_Request__Sequence__destroy(marker_interfacing__srv__ReorderMarker_Request__Sequence * array);

/// Check for srv/ReorderMarker message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Request__Sequence__are_equal(const marker_interfacing__srv__ReorderMarker_Request__Sequence * lhs, const marker_interfacing__srv__ReorderMarker_Request__Sequence * rhs);

/// Copy an array of srv/ReorderMarker messages.
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
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Request__Sequence__copy(
  const marker_interfacing__srv__ReorderMarker_Request__Sequence * input,
  marker_interfacing__srv__ReorderMarker_Request__Sequence * output);

/// Initialize srv/ReorderMarker message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * marker_interfacing__srv__ReorderMarker_Response
 * )) before or use
 * marker_interfacing__srv__ReorderMarker_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Response__init(marker_interfacing__srv__ReorderMarker_Response * msg);

/// Finalize srv/ReorderMarker message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__srv__ReorderMarker_Response__fini(marker_interfacing__srv__ReorderMarker_Response * msg);

/// Create srv/ReorderMarker message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * marker_interfacing__srv__ReorderMarker_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
marker_interfacing__srv__ReorderMarker_Response *
marker_interfacing__srv__ReorderMarker_Response__create();

/// Destroy srv/ReorderMarker message.
/**
 * It calls
 * marker_interfacing__srv__ReorderMarker_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__srv__ReorderMarker_Response__destroy(marker_interfacing__srv__ReorderMarker_Response * msg);

/// Check for srv/ReorderMarker message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Response__are_equal(const marker_interfacing__srv__ReorderMarker_Response * lhs, const marker_interfacing__srv__ReorderMarker_Response * rhs);

/// Copy a srv/ReorderMarker message.
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
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Response__copy(
  const marker_interfacing__srv__ReorderMarker_Response * input,
  marker_interfacing__srv__ReorderMarker_Response * output);

/// Initialize array of srv/ReorderMarker messages.
/**
 * It allocates the memory for the number of elements and calls
 * marker_interfacing__srv__ReorderMarker_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Response__Sequence__init(marker_interfacing__srv__ReorderMarker_Response__Sequence * array, size_t size);

/// Finalize array of srv/ReorderMarker messages.
/**
 * It calls
 * marker_interfacing__srv__ReorderMarker_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__srv__ReorderMarker_Response__Sequence__fini(marker_interfacing__srv__ReorderMarker_Response__Sequence * array);

/// Create array of srv/ReorderMarker messages.
/**
 * It allocates the memory for the array and calls
 * marker_interfacing__srv__ReorderMarker_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
marker_interfacing__srv__ReorderMarker_Response__Sequence *
marker_interfacing__srv__ReorderMarker_Response__Sequence__create(size_t size);

/// Destroy array of srv/ReorderMarker messages.
/**
 * It calls
 * marker_interfacing__srv__ReorderMarker_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
void
marker_interfacing__srv__ReorderMarker_Response__Sequence__destroy(marker_interfacing__srv__ReorderMarker_Response__Sequence * array);

/// Check for srv/ReorderMarker message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Response__Sequence__are_equal(const marker_interfacing__srv__ReorderMarker_Response__Sequence * lhs, const marker_interfacing__srv__ReorderMarker_Response__Sequence * rhs);

/// Copy an array of srv/ReorderMarker messages.
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
ROSIDL_GENERATOR_C_PUBLIC_marker_interfacing
bool
marker_interfacing__srv__ReorderMarker_Response__Sequence__copy(
  const marker_interfacing__srv__ReorderMarker_Response__Sequence * input,
  marker_interfacing__srv__ReorderMarker_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // MARKER_INTERFACING__SRV__DETAIL__REORDER_MARKER__FUNCTIONS_H_
