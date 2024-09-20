// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ocs2_msgs:msg/Multiplier.idl
// generated code does not contain a copyright notice
#include "ocs2_msgs/msg/detail/multiplier__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `lagrangian`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ocs2_msgs__msg__Multiplier__init(ocs2_msgs__msg__Multiplier * msg)
{
  if (!msg) {
    return false;
  }
  // time
  // penalty
  // lagrangian
  if (!rosidl_runtime_c__float__Sequence__init(&msg->lagrangian, 0)) {
    ocs2_msgs__msg__Multiplier__fini(msg);
    return false;
  }
  return true;
}

void
ocs2_msgs__msg__Multiplier__fini(ocs2_msgs__msg__Multiplier * msg)
{
  if (!msg) {
    return;
  }
  // time
  // penalty
  // lagrangian
  rosidl_runtime_c__float__Sequence__fini(&msg->lagrangian);
}

bool
ocs2_msgs__msg__Multiplier__are_equal(const ocs2_msgs__msg__Multiplier * lhs, const ocs2_msgs__msg__Multiplier * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // penalty
  if (lhs->penalty != rhs->penalty) {
    return false;
  }
  // lagrangian
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->lagrangian), &(rhs->lagrangian)))
  {
    return false;
  }
  return true;
}

bool
ocs2_msgs__msg__Multiplier__copy(
  const ocs2_msgs__msg__Multiplier * input,
  ocs2_msgs__msg__Multiplier * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  output->time = input->time;
  // penalty
  output->penalty = input->penalty;
  // lagrangian
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->lagrangian), &(output->lagrangian)))
  {
    return false;
  }
  return true;
}

ocs2_msgs__msg__Multiplier *
ocs2_msgs__msg__Multiplier__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__Multiplier * msg = (ocs2_msgs__msg__Multiplier *)allocator.allocate(sizeof(ocs2_msgs__msg__Multiplier), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocs2_msgs__msg__Multiplier));
  bool success = ocs2_msgs__msg__Multiplier__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocs2_msgs__msg__Multiplier__destroy(ocs2_msgs__msg__Multiplier * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocs2_msgs__msg__Multiplier__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocs2_msgs__msg__Multiplier__Sequence__init(ocs2_msgs__msg__Multiplier__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__Multiplier * data = NULL;

  if (size) {
    data = (ocs2_msgs__msg__Multiplier *)allocator.zero_allocate(size, sizeof(ocs2_msgs__msg__Multiplier), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocs2_msgs__msg__Multiplier__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocs2_msgs__msg__Multiplier__fini(&data[i - 1]);
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
ocs2_msgs__msg__Multiplier__Sequence__fini(ocs2_msgs__msg__Multiplier__Sequence * array)
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
      ocs2_msgs__msg__Multiplier__fini(&array->data[i]);
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

ocs2_msgs__msg__Multiplier__Sequence *
ocs2_msgs__msg__Multiplier__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__Multiplier__Sequence * array = (ocs2_msgs__msg__Multiplier__Sequence *)allocator.allocate(sizeof(ocs2_msgs__msg__Multiplier__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocs2_msgs__msg__Multiplier__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocs2_msgs__msg__Multiplier__Sequence__destroy(ocs2_msgs__msg__Multiplier__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocs2_msgs__msg__Multiplier__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocs2_msgs__msg__Multiplier__Sequence__are_equal(const ocs2_msgs__msg__Multiplier__Sequence * lhs, const ocs2_msgs__msg__Multiplier__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocs2_msgs__msg__Multiplier__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocs2_msgs__msg__Multiplier__Sequence__copy(
  const ocs2_msgs__msg__Multiplier__Sequence * input,
  ocs2_msgs__msg__Multiplier__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocs2_msgs__msg__Multiplier);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocs2_msgs__msg__Multiplier * data =
      (ocs2_msgs__msg__Multiplier *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocs2_msgs__msg__Multiplier__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocs2_msgs__msg__Multiplier__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocs2_msgs__msg__Multiplier__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
