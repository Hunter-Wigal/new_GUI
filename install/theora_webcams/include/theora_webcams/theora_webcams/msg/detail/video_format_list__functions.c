// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from theora_webcams:msg/VideoFormatList.idl
// generated code does not contain a copyright notice
#include "theora_webcams/msg/detail/video_format_list__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `formats`
#include "theora_webcams/msg/detail/video_format__functions.h"

bool
theora_webcams__msg__VideoFormatList__init(theora_webcams__msg__VideoFormatList * msg)
{
  if (!msg) {
    return false;
  }
  // formats
  if (!theora_webcams__msg__VideoFormat__Sequence__init(&msg->formats, 0)) {
    theora_webcams__msg__VideoFormatList__fini(msg);
    return false;
  }
  return true;
}

void
theora_webcams__msg__VideoFormatList__fini(theora_webcams__msg__VideoFormatList * msg)
{
  if (!msg) {
    return;
  }
  // formats
  theora_webcams__msg__VideoFormat__Sequence__fini(&msg->formats);
}

bool
theora_webcams__msg__VideoFormatList__are_equal(const theora_webcams__msg__VideoFormatList * lhs, const theora_webcams__msg__VideoFormatList * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // formats
  if (!theora_webcams__msg__VideoFormat__Sequence__are_equal(
      &(lhs->formats), &(rhs->formats)))
  {
    return false;
  }
  return true;
}

bool
theora_webcams__msg__VideoFormatList__copy(
  const theora_webcams__msg__VideoFormatList * input,
  theora_webcams__msg__VideoFormatList * output)
{
  if (!input || !output) {
    return false;
  }
  // formats
  if (!theora_webcams__msg__VideoFormat__Sequence__copy(
      &(input->formats), &(output->formats)))
  {
    return false;
  }
  return true;
}

theora_webcams__msg__VideoFormatList *
theora_webcams__msg__VideoFormatList__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__msg__VideoFormatList * msg = (theora_webcams__msg__VideoFormatList *)allocator.allocate(sizeof(theora_webcams__msg__VideoFormatList), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(theora_webcams__msg__VideoFormatList));
  bool success = theora_webcams__msg__VideoFormatList__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
theora_webcams__msg__VideoFormatList__destroy(theora_webcams__msg__VideoFormatList * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    theora_webcams__msg__VideoFormatList__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
theora_webcams__msg__VideoFormatList__Sequence__init(theora_webcams__msg__VideoFormatList__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__msg__VideoFormatList * data = NULL;

  if (size) {
    data = (theora_webcams__msg__VideoFormatList *)allocator.zero_allocate(size, sizeof(theora_webcams__msg__VideoFormatList), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = theora_webcams__msg__VideoFormatList__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        theora_webcams__msg__VideoFormatList__fini(&data[i - 1]);
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
theora_webcams__msg__VideoFormatList__Sequence__fini(theora_webcams__msg__VideoFormatList__Sequence * array)
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
      theora_webcams__msg__VideoFormatList__fini(&array->data[i]);
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

theora_webcams__msg__VideoFormatList__Sequence *
theora_webcams__msg__VideoFormatList__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  theora_webcams__msg__VideoFormatList__Sequence * array = (theora_webcams__msg__VideoFormatList__Sequence *)allocator.allocate(sizeof(theora_webcams__msg__VideoFormatList__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = theora_webcams__msg__VideoFormatList__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
theora_webcams__msg__VideoFormatList__Sequence__destroy(theora_webcams__msg__VideoFormatList__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    theora_webcams__msg__VideoFormatList__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
theora_webcams__msg__VideoFormatList__Sequence__are_equal(const theora_webcams__msg__VideoFormatList__Sequence * lhs, const theora_webcams__msg__VideoFormatList__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!theora_webcams__msg__VideoFormatList__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
theora_webcams__msg__VideoFormatList__Sequence__copy(
  const theora_webcams__msg__VideoFormatList__Sequence * input,
  theora_webcams__msg__VideoFormatList__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(theora_webcams__msg__VideoFormatList);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    theora_webcams__msg__VideoFormatList * data =
      (theora_webcams__msg__VideoFormatList *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!theora_webcams__msg__VideoFormatList__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          theora_webcams__msg__VideoFormatList__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!theora_webcams__msg__VideoFormatList__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
