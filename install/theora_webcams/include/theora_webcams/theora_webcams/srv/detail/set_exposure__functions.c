// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from theora_webcams:srv/SetExposure.idl
// generated code does not contain a copyright notice
#include "theora_webcams/srv/detail/set_exposure__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
theora_webcams__srv__SetExposure_Request__init(theora_webcams__srv__SetExposure_Request * msg)
{
  if (!msg) {
    return false;
  }
  // exposure
  return true;
}

void
theora_webcams__srv__SetExposure_Request__fini(theora_webcams__srv__SetExposure_Request * msg)
{
  if (!msg) {
    return;
  }
  // exposure
}

bool
theora_webcams__srv__SetExposure_Request__are_equal(const theora_webcams__srv__SetExposure_Request * lhs, const theora_webcams__srv__SetExposure_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // exposure
  if (lhs->exposure != rhs->exposure) {
    return false;
  }
  return true;
}

bool
theora_webcams__srv__SetExposure_Request__copy(
  const theora_webcams__srv__SetExposure_Request * input,
  theora_webcams__srv__SetExposure_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // exposure
  output->exposure = input->exposure;
  return true;
}

theora_webcams__srv__SetExposure_Request *
theora_webcams__srv__SetExposure_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__SetExposure_Request * msg = (theora_webcams__srv__SetExposure_Request *)allocator.allocate(sizeof(theora_webcams__srv__SetExposure_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(theora_webcams__srv__SetExposure_Request));
  bool success = theora_webcams__srv__SetExposure_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
theora_webcams__srv__SetExposure_Request__destroy(theora_webcams__srv__SetExposure_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    theora_webcams__srv__SetExposure_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
theora_webcams__srv__SetExposure_Request__Sequence__init(theora_webcams__srv__SetExposure_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__SetExposure_Request * data = NULL;

  if (size) {
    data = (theora_webcams__srv__SetExposure_Request *)allocator.zero_allocate(size, sizeof(theora_webcams__srv__SetExposure_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = theora_webcams__srv__SetExposure_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        theora_webcams__srv__SetExposure_Request__fini(&data[i - 1]);
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
theora_webcams__srv__SetExposure_Request__Sequence__fini(theora_webcams__srv__SetExposure_Request__Sequence * array)
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
      theora_webcams__srv__SetExposure_Request__fini(&array->data[i]);
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

theora_webcams__srv__SetExposure_Request__Sequence *
theora_webcams__srv__SetExposure_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__SetExposure_Request__Sequence * array = (theora_webcams__srv__SetExposure_Request__Sequence *)allocator.allocate(sizeof(theora_webcams__srv__SetExposure_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = theora_webcams__srv__SetExposure_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
theora_webcams__srv__SetExposure_Request__Sequence__destroy(theora_webcams__srv__SetExposure_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    theora_webcams__srv__SetExposure_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
theora_webcams__srv__SetExposure_Request__Sequence__are_equal(const theora_webcams__srv__SetExposure_Request__Sequence * lhs, const theora_webcams__srv__SetExposure_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!theora_webcams__srv__SetExposure_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
theora_webcams__srv__SetExposure_Request__Sequence__copy(
  const theora_webcams__srv__SetExposure_Request__Sequence * input,
  theora_webcams__srv__SetExposure_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(theora_webcams__srv__SetExposure_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    theora_webcams__srv__SetExposure_Request * data =
      (theora_webcams__srv__SetExposure_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!theora_webcams__srv__SetExposure_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          theora_webcams__srv__SetExposure_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!theora_webcams__srv__SetExposure_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
theora_webcams__srv__SetExposure_Response__init(theora_webcams__srv__SetExposure_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  return true;
}

void
theora_webcams__srv__SetExposure_Response__fini(theora_webcams__srv__SetExposure_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
}

bool
theora_webcams__srv__SetExposure_Response__are_equal(const theora_webcams__srv__SetExposure_Response * lhs, const theora_webcams__srv__SetExposure_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  return true;
}

bool
theora_webcams__srv__SetExposure_Response__copy(
  const theora_webcams__srv__SetExposure_Response * input,
  theora_webcams__srv__SetExposure_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  return true;
}

theora_webcams__srv__SetExposure_Response *
theora_webcams__srv__SetExposure_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__SetExposure_Response * msg = (theora_webcams__srv__SetExposure_Response *)allocator.allocate(sizeof(theora_webcams__srv__SetExposure_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(theora_webcams__srv__SetExposure_Response));
  bool success = theora_webcams__srv__SetExposure_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
theora_webcams__srv__SetExposure_Response__destroy(theora_webcams__srv__SetExposure_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    theora_webcams__srv__SetExposure_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
theora_webcams__srv__SetExposure_Response__Sequence__init(theora_webcams__srv__SetExposure_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__SetExposure_Response * data = NULL;

  if (size) {
    data = (theora_webcams__srv__SetExposure_Response *)allocator.zero_allocate(size, sizeof(theora_webcams__srv__SetExposure_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = theora_webcams__srv__SetExposure_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        theora_webcams__srv__SetExposure_Response__fini(&data[i - 1]);
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
theora_webcams__srv__SetExposure_Response__Sequence__fini(theora_webcams__srv__SetExposure_Response__Sequence * array)
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
      theora_webcams__srv__SetExposure_Response__fini(&array->data[i]);
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

theora_webcams__srv__SetExposure_Response__Sequence *
theora_webcams__srv__SetExposure_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__srv__SetExposure_Response__Sequence * array = (theora_webcams__srv__SetExposure_Response__Sequence *)allocator.allocate(sizeof(theora_webcams__srv__SetExposure_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = theora_webcams__srv__SetExposure_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
theora_webcams__srv__SetExposure_Response__Sequence__destroy(theora_webcams__srv__SetExposure_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    theora_webcams__srv__SetExposure_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
theora_webcams__srv__SetExposure_Response__Sequence__are_equal(const theora_webcams__srv__SetExposure_Response__Sequence * lhs, const theora_webcams__srv__SetExposure_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!theora_webcams__srv__SetExposure_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
theora_webcams__srv__SetExposure_Response__Sequence__copy(
  const theora_webcams__srv__SetExposure_Response__Sequence * input,
  theora_webcams__srv__SetExposure_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(theora_webcams__srv__SetExposure_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    theora_webcams__srv__SetExposure_Response * data =
      (theora_webcams__srv__SetExposure_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!theora_webcams__srv__SetExposure_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          theora_webcams__srv__SetExposure_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!theora_webcams__srv__SetExposure_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
