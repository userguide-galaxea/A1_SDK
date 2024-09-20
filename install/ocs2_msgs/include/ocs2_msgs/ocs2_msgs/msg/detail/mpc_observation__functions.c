// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ocs2_msgs:msg/MpcObservation.idl
// generated code does not contain a copyright notice
#include "ocs2_msgs/msg/detail/mpc_observation__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `state`
#include "ocs2_msgs/msg/detail/mpc_state__functions.h"
// Member `input`
#include "ocs2_msgs/msg/detail/mpc_input__functions.h"

bool
ocs2_msgs__msg__MpcObservation__init(ocs2_msgs__msg__MpcObservation * msg)
{
  if (!msg) {
    return false;
  }
  // time
  // state
  if (!ocs2_msgs__msg__MpcState__init(&msg->state)) {
    ocs2_msgs__msg__MpcObservation__fini(msg);
    return false;
  }
  // input
  if (!ocs2_msgs__msg__MpcInput__init(&msg->input)) {
    ocs2_msgs__msg__MpcObservation__fini(msg);
    return false;
  }
  // mode
  return true;
}

void
ocs2_msgs__msg__MpcObservation__fini(ocs2_msgs__msg__MpcObservation * msg)
{
  if (!msg) {
    return;
  }
  // time
  // state
  ocs2_msgs__msg__MpcState__fini(&msg->state);
  // input
  ocs2_msgs__msg__MpcInput__fini(&msg->input);
  // mode
}

bool
ocs2_msgs__msg__MpcObservation__are_equal(const ocs2_msgs__msg__MpcObservation * lhs, const ocs2_msgs__msg__MpcObservation * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time
  if (lhs->time != rhs->time) {
    return false;
  }
  // state
  if (!ocs2_msgs__msg__MpcState__are_equal(
      &(lhs->state), &(rhs->state)))
  {
    return false;
  }
  // input
  if (!ocs2_msgs__msg__MpcInput__are_equal(
      &(lhs->input), &(rhs->input)))
  {
    return false;
  }
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
ocs2_msgs__msg__MpcObservation__copy(
  const ocs2_msgs__msg__MpcObservation * input,
  ocs2_msgs__msg__MpcObservation * output)
{
  if (!input || !output) {
    return false;
  }
  // time
  output->time = input->time;
  // state
  if (!ocs2_msgs__msg__MpcState__copy(
      &(input->state), &(output->state)))
  {
    return false;
  }
  // input
  if (!ocs2_msgs__msg__MpcInput__copy(
      &(input->input), &(output->input)))
  {
    return false;
  }
  // mode
  output->mode = input->mode;
  return true;
}

ocs2_msgs__msg__MpcObservation *
ocs2_msgs__msg__MpcObservation__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcObservation * msg = (ocs2_msgs__msg__MpcObservation *)allocator.allocate(sizeof(ocs2_msgs__msg__MpcObservation), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocs2_msgs__msg__MpcObservation));
  bool success = ocs2_msgs__msg__MpcObservation__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocs2_msgs__msg__MpcObservation__destroy(ocs2_msgs__msg__MpcObservation * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocs2_msgs__msg__MpcObservation__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocs2_msgs__msg__MpcObservation__Sequence__init(ocs2_msgs__msg__MpcObservation__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcObservation * data = NULL;

  if (size) {
    data = (ocs2_msgs__msg__MpcObservation *)allocator.zero_allocate(size, sizeof(ocs2_msgs__msg__MpcObservation), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocs2_msgs__msg__MpcObservation__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocs2_msgs__msg__MpcObservation__fini(&data[i - 1]);
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
ocs2_msgs__msg__MpcObservation__Sequence__fini(ocs2_msgs__msg__MpcObservation__Sequence * array)
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
      ocs2_msgs__msg__MpcObservation__fini(&array->data[i]);
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

ocs2_msgs__msg__MpcObservation__Sequence *
ocs2_msgs__msg__MpcObservation__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcObservation__Sequence * array = (ocs2_msgs__msg__MpcObservation__Sequence *)allocator.allocate(sizeof(ocs2_msgs__msg__MpcObservation__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocs2_msgs__msg__MpcObservation__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocs2_msgs__msg__MpcObservation__Sequence__destroy(ocs2_msgs__msg__MpcObservation__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocs2_msgs__msg__MpcObservation__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocs2_msgs__msg__MpcObservation__Sequence__are_equal(const ocs2_msgs__msg__MpcObservation__Sequence * lhs, const ocs2_msgs__msg__MpcObservation__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocs2_msgs__msg__MpcObservation__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocs2_msgs__msg__MpcObservation__Sequence__copy(
  const ocs2_msgs__msg__MpcObservation__Sequence * input,
  ocs2_msgs__msg__MpcObservation__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocs2_msgs__msg__MpcObservation);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocs2_msgs__msg__MpcObservation * data =
      (ocs2_msgs__msg__MpcObservation *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocs2_msgs__msg__MpcObservation__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocs2_msgs__msg__MpcObservation__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocs2_msgs__msg__MpcObservation__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
