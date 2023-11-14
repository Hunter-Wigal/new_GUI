// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from hockey_stick_arm:srv/Calibrate.idl
// generated code does not contain a copyright notice
#include "hockey_stick_arm/srv/detail/calibrate__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
hockey_stick_arm__srv__Calibrate_Request__init(hockey_stick_arm__srv__Calibrate_Request * msg)
{
  if (!msg) {
    return false;
  }
  // value1
  // value2
  return true;
}

void
hockey_stick_arm__srv__Calibrate_Request__fini(hockey_stick_arm__srv__Calibrate_Request * msg)
{
  if (!msg) {
    return;
  }
  // value1
  // value2
}

bool
hockey_stick_arm__srv__Calibrate_Request__are_equal(const hockey_stick_arm__srv__Calibrate_Request * lhs, const hockey_stick_arm__srv__Calibrate_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // value1
  if (lhs->value1 != rhs->value1) {
    return false;
  }
  // value2
  if (lhs->value2 != rhs->value2) {
    return false;
  }
  return true;
}

bool
hockey_stick_arm__srv__Calibrate_Request__copy(
  const hockey_stick_arm__srv__Calibrate_Request * input,
  hockey_stick_arm__srv__Calibrate_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // value1
  output->value1 = input->value1;
  // value2
  output->value2 = input->value2;
  return true;
}

hockey_stick_arm__srv__Calibrate_Request *
hockey_stick_arm__srv__Calibrate_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hockey_stick_arm__srv__Calibrate_Request * msg = (hockey_stick_arm__srv__Calibrate_Request *)allocator.allocate(sizeof(hockey_stick_arm__srv__Calibrate_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hockey_stick_arm__srv__Calibrate_Request));
  bool success = hockey_stick_arm__srv__Calibrate_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hockey_stick_arm__srv__Calibrate_Request__destroy(hockey_stick_arm__srv__Calibrate_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hockey_stick_arm__srv__Calibrate_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hockey_stick_arm__srv__Calibrate_Request__Sequence__init(hockey_stick_arm__srv__Calibrate_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hockey_stick_arm__srv__Calibrate_Request * data = NULL;

  if (size) {
    data = (hockey_stick_arm__srv__Calibrate_Request *)allocator.zero_allocate(size, sizeof(hockey_stick_arm__srv__Calibrate_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hockey_stick_arm__srv__Calibrate_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hockey_stick_arm__srv__Calibrate_Request__fini(&data[i - 1]);
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
hockey_stick_arm__srv__Calibrate_Request__Sequence__fini(hockey_stick_arm__srv__Calibrate_Request__Sequence * array)
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
      hockey_stick_arm__srv__Calibrate_Request__fini(&array->data[i]);
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

hockey_stick_arm__srv__Calibrate_Request__Sequence *
hockey_stick_arm__srv__Calibrate_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hockey_stick_arm__srv__Calibrate_Request__Sequence * array = (hockey_stick_arm__srv__Calibrate_Request__Sequence *)allocator.allocate(sizeof(hockey_stick_arm__srv__Calibrate_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hockey_stick_arm__srv__Calibrate_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hockey_stick_arm__srv__Calibrate_Request__Sequence__destroy(hockey_stick_arm__srv__Calibrate_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hockey_stick_arm__srv__Calibrate_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hockey_stick_arm__srv__Calibrate_Request__Sequence__are_equal(const hockey_stick_arm__srv__Calibrate_Request__Sequence * lhs, const hockey_stick_arm__srv__Calibrate_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hockey_stick_arm__srv__Calibrate_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hockey_stick_arm__srv__Calibrate_Request__Sequence__copy(
  const hockey_stick_arm__srv__Calibrate_Request__Sequence * input,
  hockey_stick_arm__srv__Calibrate_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hockey_stick_arm__srv__Calibrate_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hockey_stick_arm__srv__Calibrate_Request * data =
      (hockey_stick_arm__srv__Calibrate_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hockey_stick_arm__srv__Calibrate_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hockey_stick_arm__srv__Calibrate_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hockey_stick_arm__srv__Calibrate_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
hockey_stick_arm__srv__Calibrate_Response__init(hockey_stick_arm__srv__Calibrate_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    hockey_stick_arm__srv__Calibrate_Response__fini(msg);
    return false;
  }
  return true;
}

void
hockey_stick_arm__srv__Calibrate_Response__fini(hockey_stick_arm__srv__Calibrate_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
hockey_stick_arm__srv__Calibrate_Response__are_equal(const hockey_stick_arm__srv__Calibrate_Response * lhs, const hockey_stick_arm__srv__Calibrate_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
hockey_stick_arm__srv__Calibrate_Response__copy(
  const hockey_stick_arm__srv__Calibrate_Response * input,
  hockey_stick_arm__srv__Calibrate_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

hockey_stick_arm__srv__Calibrate_Response *
hockey_stick_arm__srv__Calibrate_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hockey_stick_arm__srv__Calibrate_Response * msg = (hockey_stick_arm__srv__Calibrate_Response *)allocator.allocate(sizeof(hockey_stick_arm__srv__Calibrate_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(hockey_stick_arm__srv__Calibrate_Response));
  bool success = hockey_stick_arm__srv__Calibrate_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
hockey_stick_arm__srv__Calibrate_Response__destroy(hockey_stick_arm__srv__Calibrate_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    hockey_stick_arm__srv__Calibrate_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
hockey_stick_arm__srv__Calibrate_Response__Sequence__init(hockey_stick_arm__srv__Calibrate_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hockey_stick_arm__srv__Calibrate_Response * data = NULL;

  if (size) {
    data = (hockey_stick_arm__srv__Calibrate_Response *)allocator.zero_allocate(size, sizeof(hockey_stick_arm__srv__Calibrate_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = hockey_stick_arm__srv__Calibrate_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        hockey_stick_arm__srv__Calibrate_Response__fini(&data[i - 1]);
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
hockey_stick_arm__srv__Calibrate_Response__Sequence__fini(hockey_stick_arm__srv__Calibrate_Response__Sequence * array)
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
      hockey_stick_arm__srv__Calibrate_Response__fini(&array->data[i]);
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

hockey_stick_arm__srv__Calibrate_Response__Sequence *
hockey_stick_arm__srv__Calibrate_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  hockey_stick_arm__srv__Calibrate_Response__Sequence * array = (hockey_stick_arm__srv__Calibrate_Response__Sequence *)allocator.allocate(sizeof(hockey_stick_arm__srv__Calibrate_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = hockey_stick_arm__srv__Calibrate_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
hockey_stick_arm__srv__Calibrate_Response__Sequence__destroy(hockey_stick_arm__srv__Calibrate_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    hockey_stick_arm__srv__Calibrate_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
hockey_stick_arm__srv__Calibrate_Response__Sequence__are_equal(const hockey_stick_arm__srv__Calibrate_Response__Sequence * lhs, const hockey_stick_arm__srv__Calibrate_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!hockey_stick_arm__srv__Calibrate_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
hockey_stick_arm__srv__Calibrate_Response__Sequence__copy(
  const hockey_stick_arm__srv__Calibrate_Response__Sequence * input,
  hockey_stick_arm__srv__Calibrate_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(hockey_stick_arm__srv__Calibrate_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    hockey_stick_arm__srv__Calibrate_Response * data =
      (hockey_stick_arm__srv__Calibrate_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!hockey_stick_arm__srv__Calibrate_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          hockey_stick_arm__srv__Calibrate_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!hockey_stick_arm__srv__Calibrate_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
