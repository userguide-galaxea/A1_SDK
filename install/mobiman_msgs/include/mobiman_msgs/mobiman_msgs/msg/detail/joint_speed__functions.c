// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobiman_msgs:msg/JointSpeed.idl
// generated code does not contain a copyright notice
#include "mobiman_msgs/msg/detail/joint_speed__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `speed`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mobiman_msgs__msg__JointSpeed__init(mobiman_msgs__msg__JointSpeed * msg)
{
  if (!msg) {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__float__Sequence__init(&msg->speed, 0)) {
    mobiman_msgs__msg__JointSpeed__fini(msg);
    return false;
  }
  return true;
}

void
mobiman_msgs__msg__JointSpeed__fini(mobiman_msgs__msg__JointSpeed * msg)
{
  if (!msg) {
    return;
  }
  // speed
  rosidl_runtime_c__float__Sequence__fini(&msg->speed);
}

bool
mobiman_msgs__msg__JointSpeed__are_equal(const mobiman_msgs__msg__JointSpeed * lhs, const mobiman_msgs__msg__JointSpeed * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->speed), &(rhs->speed)))
  {
    return false;
  }
  return true;
}

bool
mobiman_msgs__msg__JointSpeed__copy(
  const mobiman_msgs__msg__JointSpeed * input,
  mobiman_msgs__msg__JointSpeed * output)
{
  if (!input || !output) {
    return false;
  }
  // speed
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->speed), &(output->speed)))
  {
    return false;
  }
  return true;
}

mobiman_msgs__msg__JointSpeed *
mobiman_msgs__msg__JointSpeed__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__JointSpeed * msg = (mobiman_msgs__msg__JointSpeed *)allocator.allocate(sizeof(mobiman_msgs__msg__JointSpeed), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobiman_msgs__msg__JointSpeed));
  bool success = mobiman_msgs__msg__JointSpeed__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobiman_msgs__msg__JointSpeed__destroy(mobiman_msgs__msg__JointSpeed * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobiman_msgs__msg__JointSpeed__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobiman_msgs__msg__JointSpeed__Sequence__init(mobiman_msgs__msg__JointSpeed__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__JointSpeed * data = NULL;

  if (size) {
    data = (mobiman_msgs__msg__JointSpeed *)allocator.zero_allocate(size, sizeof(mobiman_msgs__msg__JointSpeed), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobiman_msgs__msg__JointSpeed__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobiman_msgs__msg__JointSpeed__fini(&data[i - 1]);
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
mobiman_msgs__msg__JointSpeed__Sequence__fini(mobiman_msgs__msg__JointSpeed__Sequence * array)
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
      mobiman_msgs__msg__JointSpeed__fini(&array->data[i]);
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

mobiman_msgs__msg__JointSpeed__Sequence *
mobiman_msgs__msg__JointSpeed__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__JointSpeed__Sequence * array = (mobiman_msgs__msg__JointSpeed__Sequence *)allocator.allocate(sizeof(mobiman_msgs__msg__JointSpeed__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobiman_msgs__msg__JointSpeed__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobiman_msgs__msg__JointSpeed__Sequence__destroy(mobiman_msgs__msg__JointSpeed__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobiman_msgs__msg__JointSpeed__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobiman_msgs__msg__JointSpeed__Sequence__are_equal(const mobiman_msgs__msg__JointSpeed__Sequence * lhs, const mobiman_msgs__msg__JointSpeed__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobiman_msgs__msg__JointSpeed__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobiman_msgs__msg__JointSpeed__Sequence__copy(
  const mobiman_msgs__msg__JointSpeed__Sequence * input,
  mobiman_msgs__msg__JointSpeed__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobiman_msgs__msg__JointSpeed);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobiman_msgs__msg__JointSpeed * data =
      (mobiman_msgs__msg__JointSpeed *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobiman_msgs__msg__JointSpeed__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobiman_msgs__msg__JointSpeed__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobiman_msgs__msg__JointSpeed__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
