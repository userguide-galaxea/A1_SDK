// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ocs2_msgs:msg/LagrangianMetrics.idl
// generated code does not contain a copyright notice
#include "ocs2_msgs/msg/detail/lagrangian_metrics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `constraint`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ocs2_msgs__msg__LagrangianMetrics__init(ocs2_msgs__msg__LagrangianMetrics * msg)
{
  if (!msg) {
    return false;
  }
  // time
  // penalty
  // constraint
  if (!rosidl_runtime_c__float__Sequence__init(&msg->constraint, 0)) {
    ocs2_msgs__msg__LagrangianMetrics__fini(msg);
    return false;
  }
  return true;
}

void
ocs2_msgs__msg__LagrangianMetrics__fini(ocs2_msgs__msg__LagrangianMetrics * msg)
{
  if (!msg) {
    return;
  }
  // time
  // penalty
  // constraint
  rosidl_runtime_c__float__Sequence__fini(&msg->constraint);
}

bool
ocs2_msgs__msg__LagrangianMetrics__are_equal(const ocs2_msgs__msg__LagrangianMetrics * lhs, const ocs2_msgs__msg__LagrangianMetrics * rhs)
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
  // constraint
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->constraint), &(rhs->constraint)))
  {
    return false;
  }
  return true;
}

bool
ocs2_msgs__msg__LagrangianMetrics__copy(
  const ocs2_msgs__msg__LagrangianMetrics * input,
  ocs2_msgs__msg__LagrangianMetrics * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  output->time = input->time;
  // penalty
  output->penalty = input->penalty;
  // constraint
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->constraint), &(output->constraint)))
  {
    return false;
  }
  return true;
}

ocs2_msgs__msg__LagrangianMetrics *
ocs2_msgs__msg__LagrangianMetrics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__LagrangianMetrics * msg = (ocs2_msgs__msg__LagrangianMetrics *)allocator.allocate(sizeof(ocs2_msgs__msg__LagrangianMetrics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocs2_msgs__msg__LagrangianMetrics));
  bool success = ocs2_msgs__msg__LagrangianMetrics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocs2_msgs__msg__LagrangianMetrics__destroy(ocs2_msgs__msg__LagrangianMetrics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocs2_msgs__msg__LagrangianMetrics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocs2_msgs__msg__LagrangianMetrics__Sequence__init(ocs2_msgs__msg__LagrangianMetrics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__LagrangianMetrics * data = NULL;

  if (size) {
    data = (ocs2_msgs__msg__LagrangianMetrics *)allocator.zero_allocate(size, sizeof(ocs2_msgs__msg__LagrangianMetrics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocs2_msgs__msg__LagrangianMetrics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocs2_msgs__msg__LagrangianMetrics__fini(&data[i - 1]);
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
ocs2_msgs__msg__LagrangianMetrics__Sequence__fini(ocs2_msgs__msg__LagrangianMetrics__Sequence * array)
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
      ocs2_msgs__msg__LagrangianMetrics__fini(&array->data[i]);
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

ocs2_msgs__msg__LagrangianMetrics__Sequence *
ocs2_msgs__msg__LagrangianMetrics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__LagrangianMetrics__Sequence * array = (ocs2_msgs__msg__LagrangianMetrics__Sequence *)allocator.allocate(sizeof(ocs2_msgs__msg__LagrangianMetrics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocs2_msgs__msg__LagrangianMetrics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocs2_msgs__msg__LagrangianMetrics__Sequence__destroy(ocs2_msgs__msg__LagrangianMetrics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocs2_msgs__msg__LagrangianMetrics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocs2_msgs__msg__LagrangianMetrics__Sequence__are_equal(const ocs2_msgs__msg__LagrangianMetrics__Sequence * lhs, const ocs2_msgs__msg__LagrangianMetrics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocs2_msgs__msg__LagrangianMetrics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocs2_msgs__msg__LagrangianMetrics__Sequence__copy(
  const ocs2_msgs__msg__LagrangianMetrics__Sequence * input,
  ocs2_msgs__msg__LagrangianMetrics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocs2_msgs__msg__LagrangianMetrics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocs2_msgs__msg__LagrangianMetrics * data =
      (ocs2_msgs__msg__LagrangianMetrics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocs2_msgs__msg__LagrangianMetrics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocs2_msgs__msg__LagrangianMetrics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocs2_msgs__msg__LagrangianMetrics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
