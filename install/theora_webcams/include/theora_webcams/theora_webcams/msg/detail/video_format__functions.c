// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from theora_webcams:msg/VideoFormat.idl
// generated code does not contain a copyright notice
#include "theora_webcams/msg/detail/video_format__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `format`
#include "rosidl_runtime_c/string_functions.h"
// Member `resolutions`
#include "theora_webcams/msg/detail/resolution__functions.h"

bool
theora_webcams__msg__VideoFormat__init(theora_webcams__msg__VideoFormat * msg)
{
  if (!msg) {
    return false;
  }
  // format
  if (!rosidl_runtime_c__String__init(&msg->format)) {
    theora_webcams__msg__VideoFormat__fini(msg);
    return false;
  }
  // resolutions
  if (!theora_webcams__msg__Resolution__Sequence__init(&msg->resolutions, 0)) {
    theora_webcams__msg__VideoFormat__fini(msg);
    return false;
  }
  return true;
}

void
theora_webcams__msg__VideoFormat__fini(theora_webcams__msg__VideoFormat * msg)
{
  if (!msg) {
    return;
  }
  // format
  rosidl_runtime_c__String__fini(&msg->format);
  // resolutions
  theora_webcams__msg__Resolution__Sequence__fini(&msg->resolutions);
}

bool
theora_webcams__msg__VideoFormat__are_equal(const theora_webcams__msg__VideoFormat * lhs, const theora_webcams__msg__VideoFormat * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // format
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->format), &(rhs->format)))
  {
    return false;
  }
  // resolutions
  if (!theora_webcams__msg__Resolution__Sequence__are_equal(
      &(lhs->resolutions), &(rhs->resolutions)))
  {
    return false;
  }
  return true;
}

bool
theora_webcams__msg__VideoFormat__copy(
  const theora_webcams__msg__VideoFormat * input,
  theora_webcams__msg__VideoFormat * output)
{
  if (!input || !output) {
    return false;
  }
  // format
  if (!rosidl_runtime_c__String__copy(
      &(input->format), &(output->format)))
  {
    return false;
  }
  // resolutions
  if (!theora_webcams__msg__Resolution__Sequence__copy(
      &(input->resolutions), &(output->resolutions)))
  {
    return false;
  }
  return true;
}

theora_webcams__msg__VideoFormat *
theora_webcams__msg__VideoFormat__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__msg__VideoFormat * msg = (theora_webcams__msg__VideoFormat *)allocator.allocate(sizeof(theora_webcams__msg__VideoFormat), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(theora_webcams__msg__VideoFormat));
  bool success = theora_webcams__msg__VideoFormat__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
theora_webcams__msg__VideoFormat__destroy(theora_webcams__msg__VideoFormat * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    theora_webcams__msg__VideoFormat__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
theora_webcams__msg__VideoFormat__Sequence__init(theora_webcams__msg__VideoFormat__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__msg__VideoFormat * data = NULL;

  if (size) {
    data = (theora_webcams__msg__VideoFormat *)allocator.zero_allocate(size, sizeof(theora_webcams__msg__VideoFormat), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = theora_webcams__msg__VideoFormat__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        theora_webcams__msg__VideoFormat__fini(&data[i - 1]);
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
theora_webcams__msg__VideoFormat__Sequence__fini(theora_webcams__msg__VideoFormat__Sequence * array)
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
      theora_webcams__msg__VideoFormat__fini(&array->data[i]);
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

theora_webcams__msg__VideoFormat__Sequence *
theora_webcams__msg__VideoFormat__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__msg__VideoFormat__Sequence * array = (theora_webcams__msg__VideoFormat__Sequence *)allocator.allocate(sizeof(theora_webcams__msg__VideoFormat__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = theora_webcams__msg__VideoFormat__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
theora_webcams__msg__VideoFormat__Sequence__destroy(theora_webcams__msg__VideoFormat__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    theora_webcams__msg__VideoFormat__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
theora_webcams__msg__VideoFormat__Sequence__are_equal(const theora_webcams__msg__VideoFormat__Sequence * lhs, const theora_webcams__msg__VideoFormat__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!theora_webcams__msg__VideoFormat__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
theora_webcams__msg__VideoFormat__Sequence__copy(
  const theora_webcams__msg__VideoFormat__Sequence * input,
  theora_webcams__msg__VideoFormat__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(theora_webcams__msg__VideoFormat);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    theora_webcams__msg__VideoFormat * data =
      (theora_webcams__msg__VideoFormat *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!theora_webcams__msg__VideoFormat__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          theora_webcams__msg__VideoFormat__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!theora_webcams__msg__VideoFormat__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
