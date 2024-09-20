// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ocs2_msgs:msg/MpcPerformanceIndices.idl
// generated code does not contain a copyright notice
#include "ocs2_msgs/msg/detail/mpc_performance_indices__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
ocs2_msgs__msg__MpcPerformanceIndices__init(ocs2_msgs__msg__MpcPerformanceIndices * msg)
{
  if (!msg) {
    return false;
  }
  // init_time
  // merit
  // cost
  // dynamics_violation_sse
  // equality_constraints_sse
  // equality_lagrangian
  // inequality_lagrangian
  return true;
}

void
ocs2_msgs__msg__MpcPerformanceIndices__fini(ocs2_msgs__msg__MpcPerformanceIndices * msg)
{
  if (!msg) {
    return;
  }
  // init_time
  // merit
  // cost
  // dynamics_violation_sse
  // equality_constraints_sse
  // equality_lagrangian
  // inequality_lagrangian
}

bool
ocs2_msgs__msg__MpcPerformanceIndices__are_equal(const ocs2_msgs__msg__MpcPerformanceIndices * lhs, const ocs2_msgs__msg__MpcPerformanceIndices * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // init_time
  if (lhs->init_time != rhs->init_time) {
    return false;
  }
  // merit
  if (lhs->merit != rhs->merit) {
    return false;
  }
  // cost
  if (lhs->cost != rhs->cost) {
    return false;
  }
  // dynamics_violation_sse
  if (lhs->dynamics_violation_sse != rhs->dynamics_violation_sse) {
    return false;
  }
  // equality_constraints_sse
  if (lhs->equality_constraints_sse != rhs->equality_constraints_sse) {
    return false;
  }
  // equality_lagrangian
  if (lhs->equality_lagrangian != rhs->equality_lagrangian) {
    return false;
  }
  // inequality_lagrangian
  if (lhs->inequality_lagrangian != rhs->inequality_lagrangian) {
    return false;
  }
  return true;
}

bool
ocs2_msgs__msg__MpcPerformanceIndices__copy(
  const ocs2_msgs__msg__MpcPerformanceIndices * input,
  ocs2_msgs__msg__MpcPerformanceIndices * output)
{
  if (!input || !output) {
    return false;
  }
  // init_time
  output->init_time = input->init_time;
  // merit
  output->merit = input->merit;
  // cost
  output->cost = input->cost;
  // dynamics_violation_sse
  output->dynamics_violation_sse = input->dynamics_violation_sse;
  // equality_constraints_sse
  output->equality_constraints_sse = input->equality_constraints_sse;
  // equality_lagrangian
  output->equality_lagrangian = input->equality_lagrangian;
  // inequality_lagrangian
  output->inequality_lagrangian = input->inequality_lagrangian;
  return true;
}

ocs2_msgs__msg__MpcPerformanceIndices *
ocs2_msgs__msg__MpcPerformanceIndices__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcPerformanceIndices * msg = (ocs2_msgs__msg__MpcPerformanceIndices *)allocator.allocate(sizeof(ocs2_msgs__msg__MpcPerformanceIndices), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocs2_msgs__msg__MpcPerformanceIndices));
  bool success = ocs2_msgs__msg__MpcPerformanceIndices__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocs2_msgs__msg__MpcPerformanceIndices__destroy(ocs2_msgs__msg__MpcPerformanceIndices * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocs2_msgs__msg__MpcPerformanceIndices__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocs2_msgs__msg__MpcPerformanceIndices__Sequence__init(ocs2_msgs__msg__MpcPerformanceIndices__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcPerformanceIndices * data = NULL;

  if (size) {
    data = (ocs2_msgs__msg__MpcPerformanceIndices *)allocator.zero_allocate(size, sizeof(ocs2_msgs__msg__MpcPerformanceIndices), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocs2_msgs__msg__MpcPerformanceIndices__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocs2_msgs__msg__MpcPerformanceIndices__fini(&data[i - 1]);
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
ocs2_msgs__msg__MpcPerformanceIndices__Sequence__fini(ocs2_msgs__msg__MpcPerformanceIndices__Sequence * array)
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
      ocs2_msgs__msg__MpcPerformanceIndices__fini(&array->data[i]);
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

ocs2_msgs__msg__MpcPerformanceIndices__Sequence *
ocs2_msgs__msg__MpcPerformanceIndices__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcPerformanceIndices__Sequence * array = (ocs2_msgs__msg__MpcPerformanceIndices__Sequence *)allocator.allocate(sizeof(ocs2_msgs__msg__MpcPerformanceIndices__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocs2_msgs__msg__MpcPerformanceIndices__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocs2_msgs__msg__MpcPerformanceIndices__Sequence__destroy(ocs2_msgs__msg__MpcPerformanceIndices__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocs2_msgs__msg__MpcPerformanceIndices__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocs2_msgs__msg__MpcPerformanceIndices__Sequence__are_equal(const ocs2_msgs__msg__MpcPerformanceIndices__Sequence * lhs, const ocs2_msgs__msg__MpcPerformanceIndices__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocs2_msgs__msg__MpcPerformanceIndices__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocs2_msgs__msg__MpcPerformanceIndices__Sequence__copy(
  const ocs2_msgs__msg__MpcPerformanceIndices__Sequence * input,
  ocs2_msgs__msg__MpcPerformanceIndices__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocs2_msgs__msg__MpcPerformanceIndices);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocs2_msgs__msg__MpcPerformanceIndices * data =
      (ocs2_msgs__msg__MpcPerformanceIndices *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocs2_msgs__msg__MpcPerformanceIndices__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocs2_msgs__msg__MpcPerformanceIndices__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocs2_msgs__msg__MpcPerformanceIndices__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
