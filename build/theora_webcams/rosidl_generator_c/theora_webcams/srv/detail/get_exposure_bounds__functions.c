// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from theora_webcams:srv/GetExposureBounds.idl
// generated code does not contain a copyright notice
#include "theora_webcams/srv/detail/get_exposure_bounds__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
theora_webcams__srv__GetExposureBounds_Request__init(theora_webcams__srv__GetExposureBounds_Request * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
theora_webcams__srv__GetExposureBounds_Request__fini(theora_webcams__srv__GetExposureBounds_Request * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
theora_webcams__srv__GetExposureBounds_Request__are_equal(const theora_webcams__srv__GetExposureBounds_Request * lhs, const theora_webcams__srv__GetExposureBounds_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // structure_needs_at_least_one_member
  if (lhs->structure_needs_at_least_one_member != rhs->structure_needs_at_least_one_member) {
    return false;
  }
  return true;
}

bool
theora_webcams__srv__GetExposureBounds_Request__copy(
  const theora_webcams__srv__GetExposureBounds_Request * input,
  theora_webcams__srv__GetExposureBounds_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

theora_webcams__srv__GetExposureBounds_Request *
theora_webcams__srv__GetExposureBounds_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__GetExposureBounds_Request * msg = (theora_webcams__srv__GetExposureBounds_Request *)allocator.allocate(sizeof(theora_webcams__srv__GetExposureBounds_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(theora_webcams__srv__GetExposureBounds_Request));
  bool success = theora_webcams__srv__GetExposureBounds_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
theora_webcams__srv__GetExposureBounds_Request__destroy(theora_webcams__srv__GetExposureBounds_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    theora_webcams__srv__GetExposureBounds_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
theora_webcams__srv__GetExposureBounds_Request__Sequence__init(theora_webcams__srv__GetExposureBounds_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__GetExposureBounds_Request * data = NULL;

  if (size) {
    data = (theora_webcams__srv__GetExposureBounds_Request *)allocator.zero_allocate(size, sizeof(theora_webcams__srv__GetExposureBounds_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = theora_webcams__srv__GetExposureBounds_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        theora_webcams__srv__GetExposureBounds_Request__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
theora_webcams__srv__GetExposureBounds_Request__Sequence__fini(theora_webcams__srv__GetExposureBounds_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      theora_webcams__srv__GetExposureBounds_Request__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

theora_webcams__srv__GetExposureBounds_Request__Sequence *
theora_webcams__srv__GetExposureBounds_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__GetExposureBounds_Request__Sequence * array = (theora_webcams__srv__GetExposureBounds_Request__Sequence *)allocator.allocate(sizeof(theora_webcams__srv__GetExposureBounds_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = theora_webcams__srv__GetExposureBounds_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
theora_webcams__srv__GetExposureBounds_Request__Sequence__destroy(theora_webcams__srv__GetExposureBounds_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    theora_webcams__srv__GetExposureBounds_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
theora_webcams__srv__GetExposureBounds_Request__Sequence__are_equal(const theora_webcams__srv__GetExposureBounds_Request__Sequence * lhs, const theora_webcams__srv__GetExposureBounds_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!theora_webcams__srv__GetExposureBounds_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
theora_webcams__srv__GetExposureBounds_Request__Sequence__copy(
  const theora_webcams__srv__GetExposureBounds_Request__Sequence * input,
  theora_webcams__srv__GetExposureBounds_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(theora_webcams__srv__GetExposureBounds_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    theora_webcams__srv__GetExposureBounds_Request * data =
      (theora_webcams__srv__GetExposureBounds_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!theora_webcams__srv__GetExposureBounds_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          theora_webcams__srv__GetExposureBounds_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!theora_webcams__srv__GetExposureBounds_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `exposure_bounds`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
theora_webcams__srv__GetExposureBounds_Response__init(theora_webcams__srv__GetExposureBounds_Response * msg)
{
  if (!msg) {
    return false;
  }
  // exposure_bounds
  if (!rosidl_runtime_c__float__Sequence__init(&msg->exposure_bounds, 0)) {
    theora_webcams__srv__GetExposureBounds_Response__fini(msg);
    return false;
  }
  // supports_manual_exposure
  return true;
}

void
theora_webcams__srv__GetExposureBounds_Response__fini(theora_webcams__srv__GetExposureBounds_Response * msg)
{
  if (!msg) {
    return;
  }
  // exposure_bounds
  rosidl_runtime_c__float__Sequence__fini(&msg->exposure_bounds);
  // supports_manual_exposure
}

bool
theora_webcams__srv__GetExposureBounds_Response__are_equal(const theora_webcams__srv__GetExposureBounds_Response * lhs, const theora_webcams__srv__GetExposureBounds_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // exposure_bounds
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->exposure_bounds), &(rhs->exposure_bounds)))
  {
    return false;
  }
  // supports_manual_exposure
  if (lhs->supports_manual_exposure != rhs->supports_manual_exposure) {
    return false;
  }
  return true;
}

bool
theora_webcams__srv__GetExposureBounds_Response__copy(
  const theora_webcams__srv__GetExposureBounds_Response * input,
  theora_webcams__srv__GetExposureBounds_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // exposure_bounds
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->exposure_bounds), &(output->exposure_bounds)))
  {
    return false;
  }
  // supports_manual_exposure
  output->supports_manual_exposure = input->supports_manual_exposure;
  return true;
}

theora_webcams__srv__GetExposureBounds_Response *
theora_webcams__srv__GetExposureBounds_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__GetExposureBounds_Response * msg = (theora_webcams__srv__GetExposureBounds_Response *)allocator.allocate(sizeof(theora_webcams__srv__GetExposureBounds_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(theora_webcams__srv__GetExposureBounds_Response));
  bool success = theora_webcams__srv__GetExposureBounds_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
theora_webcams__srv__GetExposureBounds_Response__destroy(theora_webcams__srv__GetExposureBounds_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    theora_webcams__srv__GetExposureBounds_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
theora_webcams__srv__GetExposureBounds_Response__Sequence__init(theora_webcams__srv__GetExposureBounds_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__GetExposureBounds_Response * data = NULL;

  if (size) {
    data = (theora_webcams__srv__GetExposureBounds_Response *)allocator.zero_allocate(size, sizeof(theora_webcams__srv__GetExposureBounds_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = theora_webcams__srv__GetExposureBounds_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        theora_webcams__srv__GetExposureBounds_Response__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
theora_webcams__srv__GetExposureBounds_Response__Sequence__fini(theora_webcams__srv__GetExposureBounds_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      theora_webcams__srv__GetExposureBounds_Response__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

theora_webcams__srv__GetExposureBounds_Response__Sequence *
theora_webcams__srv__GetExposureBounds_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__GetExposureBounds_Response__Sequence * array = (theora_webcams__srv__GetExposureBounds_Response__Sequence *)allocator.allocate(sizeof(theora_webcams__srv__GetExposureBounds_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = theora_webcams__srv__GetExposureBounds_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
theora_webcams__srv__GetExposureBounds_Response__Sequence__destroy(theora_webcams__srv__GetExposureBounds_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    theora_webcams__srv__GetExposureBounds_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
theora_webcams__srv__GetExposureBounds_Response__Sequence__are_equal(const theora_webcams__srv__GetExposureBounds_Response__Sequence * lhs, const theora_webcams__srv__GetExposureBounds_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!theora_webcams__srv__GetExposureBounds_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
theora_webcams__srv__GetExposureBounds_Response__Sequence__copy(
  const theora_webcams__srv__GetExposureBounds_Response__Sequence * input,
  theora_webcams__srv__GetExposureBounds_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(theora_webcams__srv__GetExposureBounds_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    theora_webcams__srv__GetExposureBounds_Response * data =
      (theora_webcams__srv__GetExposureBounds_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!theora_webcams__srv__GetExposureBounds_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          theora_webcams__srv__GetExposureBounds_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!theora_webcams__srv__GetExposureBounds_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
