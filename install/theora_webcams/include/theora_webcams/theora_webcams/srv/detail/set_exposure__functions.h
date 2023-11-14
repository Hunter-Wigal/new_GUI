// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from theora_webcams:srv/SetExposure.idl
// generated code does not contain a copyright notice

#ifndef THEORA_WEBCAMS__SRV__DETAIL__SET_EXPOSURE__FUNCTIONS_H_
#define THEORA_WEBCAMS__SRV__DETAIL__SET_EXPOSURE__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "theora_webcams/msg/rosidl_generator_c__visibility_control.h"

#include "theora_webcams/srv/detail/set_exposure__struct.h"

/// Initialize srv/SetExposure message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * theora_webcams__srv__SetExposure_Request
 * )) before or use
 * theora_webcams__srv__SetExposure_Request__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Request__init(theora_webcams__srv__SetExposure_Request * msg);

/// Finalize srv/SetExposure message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
void
theora_webcams__srv__SetExposure_Request__fini(theora_webcams__srv__SetExposure_Request * msg);

/// Create srv/SetExposure message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * theora_webcams__srv__SetExposure_Request__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
theora_webcams__srv__SetExposure_Request *
theora_webcams__srv__SetExposure_Request__create();

/// Destroy srv/SetExposure message.
/**
 * It calls
 * theora_webcams__srv__SetExposure_Request__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
void
theora_webcams__srv__SetExposure_Request__destroy(theora_webcams__srv__SetExposure_Request * msg);

/// Check for srv/SetExposure message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Request__are_equal(const theora_webcams__srv__SetExposure_Request * lhs, const theora_webcams__srv__SetExposure_Request * rhs);

/// Copy a srv/SetExposure message.
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
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Request__copy(
  const theora_webcams__srv__SetExposure_Request * input,
  theora_webcams__srv__SetExposure_Request * output);

/// Initialize array of srv/SetExposure messages.
/**
 * It allocates the memory for the number of elements and calls
 * theora_webcams__srv__SetExposure_Request__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Request__Sequence__init(theora_webcams__srv__SetExposure_Request__Sequence * array, size_t size);

/// Finalize array of srv/SetExposure messages.
/**
 * It calls
 * theora_webcams__srv__SetExposure_Request__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
void
theora_webcams__srv__SetExposure_Request__Sequence__fini(theora_webcams__srv__SetExposure_Request__Sequence * array);

/// Create array of srv/SetExposure messages.
/**
 * It allocates the memory for the array and calls
 * theora_webcams__srv__SetExposure_Request__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
theora_webcams__srv__SetExposure_Request__Sequence *
theora_webcams__srv__SetExposure_Request__Sequence__create(size_t size);

/// Destroy array of srv/SetExposure messages.
/**
 * It calls
 * theora_webcams__srv__SetExposure_Request__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
void
theora_webcams__srv__SetExposure_Request__Sequence__destroy(theora_webcams__srv__SetExposure_Request__Sequence * array);

/// Check for srv/SetExposure message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Request__Sequence__are_equal(const theora_webcams__srv__SetExposure_Request__Sequence * lhs, const theora_webcams__srv__SetExposure_Request__Sequence * rhs);

/// Copy an array of srv/SetExposure messages.
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
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Request__Sequence__copy(
  const theora_webcams__srv__SetExposure_Request__Sequence * input,
  theora_webcams__srv__SetExposure_Request__Sequence * output);

/// Initialize srv/SetExposure message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * theora_webcams__srv__SetExposure_Response
 * )) before or use
 * theora_webcams__srv__SetExposure_Response__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Response__init(theora_webcams__srv__SetExposure_Response * msg);

/// Finalize srv/SetExposure message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
void
theora_webcams__srv__SetExposure_Response__fini(theora_webcams__srv__SetExposure_Response * msg);

/// Create srv/SetExposure message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * theora_webcams__srv__SetExposure_Response__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
theora_webcams__srv__SetExposure_Response *
theora_webcams__srv__SetExposure_Response__create();

/// Destroy srv/SetExposure message.
/**
 * It calls
 * theora_webcams__srv__SetExposure_Response__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
void
theora_webcams__srv__SetExposure_Response__destroy(theora_webcams__srv__SetExposure_Response * msg);

/// Check for srv/SetExposure message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Response__are_equal(const theora_webcams__srv__SetExposure_Response * lhs, const theora_webcams__srv__SetExposure_Response * rhs);

/// Copy a srv/SetExposure message.
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
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Response__copy(
  const theora_webcams__srv__SetExposure_Response * input,
  theora_webcams__srv__SetExposure_Response * output);

/// Initialize array of srv/SetExposure messages.
/**
 * It allocates the memory for the number of elements and calls
 * theora_webcams__srv__SetExposure_Response__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Response__Sequence__init(theora_webcams__srv__SetExposure_Response__Sequence * array, size_t size);

/// Finalize array of srv/SetExposure messages.
/**
 * It calls
 * theora_webcams__srv__SetExposure_Response__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
void
theora_webcams__srv__SetExposure_Response__Sequence__fini(theora_webcams__srv__SetExposure_Response__Sequence * array);

/// Create array of srv/SetExposure messages.
/**
 * It allocates the memory for the array and calls
 * theora_webcams__srv__SetExposure_Response__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
theora_webcams__srv__SetExposure_Response__Sequence *
theora_webcams__srv__SetExposure_Response__Sequence__create(size_t size);

/// Destroy array of srv/SetExposure messages.
/**
 * It calls
 * theora_webcams__srv__SetExposure_Response__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
void
theora_webcams__srv__SetExposure_Response__Sequence__destroy(theora_webcams__srv__SetExposure_Response__Sequence * array);

/// Check for srv/SetExposure message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Response__Sequence__are_equal(const theora_webcams__srv__SetExposure_Response__Sequence * lhs, const theora_webcams__srv__SetExposure_Response__Sequence * rhs);

/// Copy an array of srv/SetExposure messages.
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
ROSIDL_GENERATOR_C_PUBLIC_theora_webcams
bool
theora_webcams__srv__SetExposure_Response__Sequence__copy(
  const theora_webcams__srv__SetExposure_Response__Sequence * input,
  theora_webcams__srv__SetExposure_Response__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // THEORA_WEBCAMS__SRV__DETAIL__SET_EXPOSURE__FUNCTIONS_H_
