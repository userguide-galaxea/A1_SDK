// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from signal_arm_msgs:msg/MotorError.idl
// generated code does not contain a copyright notice
#include "signal_arm_msgs/msg/detail/motor_error__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `error_description`
#include "rosidl_runtime_c/string_functions.h"

bool
signal_arm_msgs__msg__MotorError__init(signal_arm_msgs__msg__MotorError * msg)
{
  if (!msg) {
    return false;
  }
  // error_code
  // error_description
  if (!rosidl_runtime_c__String__Sequence__init(&msg->error_description, 0)) {
    signal_arm_msgs__msg__MotorError__fini(msg);
    return false;
  }
  return true;
}

void
signal_arm_msgs__msg__MotorError__fini(signal_arm_msgs__msg__MotorError * msg)
{
  if (!msg) {
    return;
  }
  // error_code
  // error_description
  rosidl_runtime_c__String__Sequence__fini(&msg->error_description);
}

bool
signal_arm_msgs__msg__MotorError__are_equal(const signal_arm_msgs__msg__MotorError * lhs, const signal_arm_msgs__msg__MotorError * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // error_code
  if (lhs->error_code != rhs->error_code) {
    return false;
  }
  // error_description
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->error_description), &(rhs->error_description)))
  {
    return false;
  }
  return true;
}

bool
signal_arm_msgs__msg__MotorError__copy(
  const signal_arm_msgs__msg__MotorError * input,
  signal_arm_msgs__msg__MotorError * output)
{
  if (!input || !output) {
    return false;
  }
  // error_code
  output->error_code = input->error_code;
  // error_description
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->error_description), &(output->error_description)))
  {
    return false;
  }
  return true;
}

signal_arm_msgs__msg__MotorError *
signal_arm_msgs__msg__MotorError__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__MotorError * msg = (signal_arm_msgs__msg__MotorError *)allocator.allocate(sizeof(signal_arm_msgs__msg__MotorError), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(signal_arm_msgs__msg__MotorError));
  bool success = signal_arm_msgs__msg__MotorError__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
signal_arm_msgs__msg__MotorError__destroy(signal_arm_msgs__msg__MotorError * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    signal_arm_msgs__msg__MotorError__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
signal_arm_msgs__msg__MotorError__Sequence__init(signal_arm_msgs__msg__MotorError__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__MotorError * data = NULL;

  if (size) {
    data = (signal_arm_msgs__msg__MotorError *)allocator.zero_allocate(size, sizeof(signal_arm_msgs__msg__MotorError), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = signal_arm_msgs__msg__MotorError__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        signal_arm_msgs__msg__MotorError__fini(&data[i - 1]);
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
signal_arm_msgs__msg__MotorError__Sequence__fini(signal_arm_msgs__msg__MotorError__Sequence * array)
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
      signal_arm_msgs__msg__MotorError__fini(&array->data[i]);
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

signal_arm_msgs__msg__MotorError__Sequence *
signal_arm_msgs__msg__MotorError__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__MotorError__Sequence * array = (signal_arm_msgs__msg__MotorError__Sequence *)allocator.allocate(sizeof(signal_arm_msgs__msg__MotorError__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = signal_arm_msgs__msg__MotorError__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
signal_arm_msgs__msg__MotorError__Sequence__destroy(signal_arm_msgs__msg__MotorError__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    signal_arm_msgs__msg__MotorError__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
signal_arm_msgs__msg__MotorError__Sequence__are_equal(const signal_arm_msgs__msg__MotorError__Sequence * lhs, const signal_arm_msgs__msg__MotorError__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!signal_arm_msgs__msg__MotorError__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
signal_arm_msgs__msg__MotorError__Sequence__copy(
  const signal_arm_msgs__msg__MotorError__Sequence * input,
  signal_arm_msgs__msg__MotorError__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(signal_arm_msgs__msg__MotorError);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    signal_arm_msgs__msg__MotorError * data =
      (signal_arm_msgs__msg__MotorError *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!signal_arm_msgs__msg__MotorError__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          signal_arm_msgs__msg__MotorError__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!signal_arm_msgs__msg__MotorError__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
