// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ocean_optics_spectrometer:srv/CaptureSpectrometer.idl
// generated code does not contain a copyright notice
#include "ocean_optics_spectrometer/srv/detail/capture_spectrometer__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__init(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * msg)
{
  if (!msg) {
    return false;
  }
  // integration_time
  return true;
}

void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__fini(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * msg)
{
  if (!msg) {
    return;
  }
  // integration_time
}

bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__are_equal(const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * lhs, const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // integration_time
  if (lhs->integration_time != rhs->integration_time) {
    return false;
  }
  return true;
}

bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__copy(
  const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * input,
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // integration_time
  output->integration_time = input->integration_time;
  return true;
}

ocean_optics_spectrometer__srv__CaptureSpectrometer_Request *
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * msg = (ocean_optics_spectrometer__srv__CaptureSpectrometer_Request *)allocator.allocate(sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request));
  bool success = ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__destroy(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__init(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * data = NULL;

  if (size) {
    data = (ocean_optics_spectrometer__srv__CaptureSpectrometer_Request *)allocator.zero_allocate(size, sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__fini(&data[i - 1]);
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
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__fini(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * array)
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
      ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__fini(&array->data[i]);
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

ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence *
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * array = (ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence *)allocator.allocate(sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__destroy(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__are_equal(const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * lhs, const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence__copy(
  const ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * input,
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Request * data =
      (ocean_optics_spectrometer__srv__CaptureSpectrometer_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocean_optics_spectrometer__srv__CaptureSpectrometer_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `wavelengths`
// Member `intensities`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__init(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * msg)
{
  if (!msg) {
    return false;
  }
  // wavelengths
  if (!rosidl_runtime_c__double__Sequence__init(&msg->wavelengths, 0)) {
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__fini(msg);
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__double__Sequence__init(&msg->intensities, 0)) {
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__fini(msg);
    return false;
  }
  return true;
}

void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__fini(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * msg)
{
  if (!msg) {
    return;
  }
  // wavelengths
  rosidl_runtime_c__double__Sequence__fini(&msg->wavelengths);
  // intensities
  rosidl_runtime_c__double__Sequence__fini(&msg->intensities);
}

bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__are_equal(const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * lhs, const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // wavelengths
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->wavelengths), &(rhs->wavelengths)))
  {
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->intensities), &(rhs->intensities)))
  {
    return false;
  }
  return true;
}

bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__copy(
  const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * input,
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // wavelengths
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->wavelengths), &(output->wavelengths)))
  {
    return false;
  }
  // intensities
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->intensities), &(output->intensities)))
  {
    return false;
  }
  return true;
}

ocean_optics_spectrometer__srv__CaptureSpectrometer_Response *
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * msg = (ocean_optics_spectrometer__srv__CaptureSpectrometer_Response *)allocator.allocate(sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response));
  bool success = ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__destroy(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__init(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * data = NULL;

  if (size) {
    data = (ocean_optics_spectrometer__srv__CaptureSpectrometer_Response *)allocator.zero_allocate(size, sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__fini(&data[i - 1]);
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
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__fini(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * array)
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
      ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__fini(&array->data[i]);
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

ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence *
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * array = (ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence *)allocator.allocate(sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__destroy(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__are_equal(const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * lhs, const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence__copy(
  const ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * input,
  ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocean_optics_spectrometer__srv__CaptureSpectrometer_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocean_optics_spectrometer__srv__CaptureSpectrometer_Response * data =
      (ocean_optics_spectrometer__srv__CaptureSpectrometer_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocean_optics_spectrometer__srv__CaptureSpectrometer_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
