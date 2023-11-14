// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from science_servo_control:srv/MovePump.idl
// generated code does not contain a copyright notice
#include "science_servo_control/srv/detail/move_pump__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
science_servo_control__srv__MovePump_Request__init(science_servo_control__srv__MovePump_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pump_id
  // ppm_speed
  // duration
  return true;
}

void
science_servo_control__srv__MovePump_Request__fini(science_servo_control__srv__MovePump_Request * msg)
{
  if (!msg) {
    return;
  }
  // pump_id
  // ppm_speed
  // duration
}

bool
science_servo_control__srv__MovePump_Request__are_equal(const science_servo_control__srv__MovePump_Request * lhs, const science_servo_control__srv__MovePump_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pump_id
  if (lhs->pump_id != rhs->pump_id) {
    return false;
  }
  // ppm_speed
  if (lhs->ppm_speed != rhs->ppm_speed) {
    return false;
  }
  // duration
  if (lhs->duration != rhs->duration) {
    return false;
  }
  return true;
}

bool
science_servo_control__srv__MovePump_Request__copy(
  const science_servo_control__srv__MovePump_Request * input,
  science_servo_control__srv__MovePump_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // pump_id
  output->pump_id = input->pump_id;
  // ppm_speed
  output->ppm_speed = input->ppm_speed;
  // duration
  output->duration = input->duration;
  return true;
}

science_servo_control__srv__MovePump_Request *
science_servo_control__srv__MovePump_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  science_servo_control__srv__MovePump_Request * msg = (science_servo_control__srv__MovePump_Request *)allocator.allocate(sizeof(science_servo_control__srv__MovePump_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(science_servo_control__srv__MovePump_Request));
  bool success = science_servo_control__srv__MovePump_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
science_servo_control__srv__MovePump_Request__destroy(science_servo_control__srv__MovePump_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    science_servo_control__srv__MovePump_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
science_servo_control__srv__MovePump_Request__Sequence__init(science_servo_control__srv__MovePump_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  science_servo_control__srv__MovePump_Request * data = NULL;

  if (size) {
    data = (science_servo_control__srv__MovePump_Request *)allocator.zero_allocate(size, sizeof(science_servo_control__srv__MovePump_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = science_servo_control__srv__MovePump_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        science_servo_control__srv__MovePump_Request__fini(&data[i - 1]);
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
science_servo_control__srv__MovePump_Request__Sequence__fini(science_servo_control__srv__MovePump_Request__Sequence * array)
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
      science_servo_control__srv__MovePump_Request__fini(&array->data[i]);
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

science_servo_control__srv__MovePump_Request__Sequence *
science_servo_control__srv__MovePump_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  science_servo_control__srv__MovePump_Request__Sequence * array = (science_servo_control__srv__MovePump_Request__Sequence *)allocator.allocate(sizeof(science_servo_control__srv__MovePump_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = science_servo_control__srv__MovePump_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
science_servo_control__srv__MovePump_Request__Sequence__destroy(science_servo_control__srv__MovePump_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    science_servo_control__srv__MovePump_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
science_servo_control__srv__MovePump_Request__Sequence__are_equal(const science_servo_control__srv__MovePump_Request__Sequence * lhs, const science_servo_control__srv__MovePump_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!science_servo_control__srv__MovePump_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
science_servo_control__srv__MovePump_Request__Sequence__copy(
  const science_servo_control__srv__MovePump_Request__Sequence * input,
  science_servo_control__srv__MovePump_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(science_servo_control__srv__MovePump_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    science_servo_control__srv__MovePump_Request * data =
      (science_servo_control__srv__MovePump_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!science_servo_control__srv__MovePump_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          science_servo_control__srv__MovePump_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!science_servo_control__srv__MovePump_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
science_servo_control__srv__MovePump_Response__init(science_servo_control__srv__MovePump_Response * msg)
{
  if (!msg) {
    return false;
  }
  // structure_needs_at_least_one_member
  return true;
}

void
science_servo_control__srv__MovePump_Response__fini(science_servo_control__srv__MovePump_Response * msg)
{
  if (!msg) {
    return;
  }
  // structure_needs_at_least_one_member
}

bool
science_servo_control__srv__MovePump_Response__are_equal(const science_servo_control__srv__MovePump_Response * lhs, const science_servo_control__srv__MovePump_Response * rhs)
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
science_servo_control__srv__MovePump_Response__copy(
  const science_servo_control__srv__MovePump_Response * input,
  science_servo_control__srv__MovePump_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // structure_needs_at_least_one_member
  output->structure_needs_at_least_one_member = input->structure_needs_at_least_one_member;
  return true;
}

science_servo_control__srv__MovePump_Response *
science_servo_control__srv__MovePump_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  science_servo_control__srv__MovePump_Response * msg = (science_servo_control__srv__MovePump_Response *)allocator.allocate(sizeof(science_servo_control__srv__MovePump_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(science_servo_control__srv__MovePump_Response));
  bool success = science_servo_control__srv__MovePump_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
science_servo_control__srv__MovePump_Response__destroy(science_servo_control__srv__MovePump_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    science_servo_control__srv__MovePump_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
science_servo_control__srv__MovePump_Response__Sequence__init(science_servo_control__srv__MovePump_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  science_servo_control__srv__MovePump_Response * data = NULL;

  if (size) {
    data = (science_servo_control__srv__MovePump_Response *)allocator.zero_allocate(size, sizeof(science_servo_control__srv__MovePump_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = science_servo_control__srv__MovePump_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        science_servo_control__srv__MovePump_Response__fini(&data[i - 1]);
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
science_servo_control__srv__MovePump_Response__Sequence__fini(science_servo_control__srv__MovePump_Response__Sequence * array)
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
      science_servo_control__srv__MovePump_Response__fini(&array->data[i]);
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

science_servo_control__srv__MovePump_Response__Sequence *
science_servo_control__srv__MovePump_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  science_servo_control__srv__MovePump_Response__Sequence * array = (science_servo_control__srv__MovePump_Response__Sequence *)allocator.allocate(sizeof(science_servo_control__srv__MovePump_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = science_servo_control__srv__MovePump_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
science_servo_control__srv__MovePump_Response__Sequence__destroy(science_servo_control__srv__MovePump_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    science_servo_control__srv__MovePump_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
science_servo_control__srv__MovePump_Response__Sequence__are_equal(const science_servo_control__srv__MovePump_Response__Sequence * lhs, const science_servo_control__srv__MovePump_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!science_servo_control__srv__MovePump_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
science_servo_control__srv__MovePump_Response__Sequence__copy(
  const science_servo_control__srv__MovePump_Response__Sequence * input,
  science_servo_control__srv__MovePump_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(science_servo_control__srv__MovePump_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    science_servo_control__srv__MovePump_Response * data =
      (science_servo_control__srv__MovePump_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!science_servo_control__srv__MovePump_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          science_servo_control__srv__MovePump_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!science_servo_control__srv__MovePump_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
