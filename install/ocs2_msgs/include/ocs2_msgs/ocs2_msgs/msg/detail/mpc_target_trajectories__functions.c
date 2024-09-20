// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ocs2_msgs:msg/MpcTargetTrajectories.idl
// generated code does not contain a copyright notice
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `time_trajectory`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `state_trajectory`
#include "ocs2_msgs/msg/detail/mpc_state__functions.h"
// Member `input_trajectory`
#include "ocs2_msgs/msg/detail/mpc_input__functions.h"

bool
ocs2_msgs__msg__MpcTargetTrajectories__init(ocs2_msgs__msg__MpcTargetTrajectories * msg)
{
  if (!msg) {
    return false;
  }
  // time_trajectory
  if (!rosidl_runtime_c__double__Sequence__init(&msg->time_trajectory, 0)) {
    ocs2_msgs__msg__MpcTargetTrajectories__fini(msg);
    return false;
  }
  // state_trajectory
  if (!ocs2_msgs__msg__MpcState__Sequence__init(&msg->state_trajectory, 0)) {
    ocs2_msgs__msg__MpcTargetTrajectories__fini(msg);
    return false;
  }
  // input_trajectory
  if (!ocs2_msgs__msg__MpcInput__Sequence__init(&msg->input_trajectory, 0)) {
    ocs2_msgs__msg__MpcTargetTrajectories__fini(msg);
    return false;
  }
  return true;
}

void
ocs2_msgs__msg__MpcTargetTrajectories__fini(ocs2_msgs__msg__MpcTargetTrajectories * msg)
{
  if (!msg) {
    return;
  }
  // time_trajectory
  rosidl_runtime_c__double__Sequence__fini(&msg->time_trajectory);
  // state_trajectory
  ocs2_msgs__msg__MpcState__Sequence__fini(&msg->state_trajectory);
  // input_trajectory
  ocs2_msgs__msg__MpcInput__Sequence__fini(&msg->input_trajectory);
}

bool
ocs2_msgs__msg__MpcTargetTrajectories__are_equal(const ocs2_msgs__msg__MpcTargetTrajectories * lhs, const ocs2_msgs__msg__MpcTargetTrajectories * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // time_trajectory
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->time_trajectory), &(rhs->time_trajectory)))
  {
    return false;
  }
  // state_trajectory
  if (!ocs2_msgs__msg__MpcState__Sequence__are_equal(
      &(lhs->state_trajectory), &(rhs->state_trajectory)))
  {
    return false;
  }
  // input_trajectory
  if (!ocs2_msgs__msg__MpcInput__Sequence__are_equal(
      &(lhs->input_trajectory), &(rhs->input_trajectory)))
  {
    return false;
  }
  return true;
}

bool
ocs2_msgs__msg__MpcTargetTrajectories__copy(
  const ocs2_msgs__msg__MpcTargetTrajectories * input,
  ocs2_msgs__msg__MpcTargetTrajectories * output)
{
  if (!input || !output) {
    return false;
  }
  // time_trajectory
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->time_trajectory), &(output->time_trajectory)))
  {
    return false;
  }
  // state_trajectory
  if (!ocs2_msgs__msg__MpcState__Sequence__copy(
      &(input->state_trajectory), &(output->state_trajectory)))
  {
    return false;
  }
  // input_trajectory
  if (!ocs2_msgs__msg__MpcInput__Sequence__copy(
      &(input->input_trajectory), &(output->input_trajectory)))
  {
    return false;
  }
  return true;
}

ocs2_msgs__msg__MpcTargetTrajectories *
ocs2_msgs__msg__MpcTargetTrajectories__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcTargetTrajectories * msg = (ocs2_msgs__msg__MpcTargetTrajectories *)allocator.allocate(sizeof(ocs2_msgs__msg__MpcTargetTrajectories), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocs2_msgs__msg__MpcTargetTrajectories));
  bool success = ocs2_msgs__msg__MpcTargetTrajectories__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocs2_msgs__msg__MpcTargetTrajectories__destroy(ocs2_msgs__msg__MpcTargetTrajectories * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocs2_msgs__msg__MpcTargetTrajectories__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocs2_msgs__msg__MpcTargetTrajectories__Sequence__init(ocs2_msgs__msg__MpcTargetTrajectories__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcTargetTrajectories * data = NULL;

  if (size) {
    data = (ocs2_msgs__msg__MpcTargetTrajectories *)allocator.zero_allocate(size, sizeof(ocs2_msgs__msg__MpcTargetTrajectories), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocs2_msgs__msg__MpcTargetTrajectories__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocs2_msgs__msg__MpcTargetTrajectories__fini(&data[i - 1]);
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
ocs2_msgs__msg__MpcTargetTrajectories__Sequence__fini(ocs2_msgs__msg__MpcTargetTrajectories__Sequence * array)
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
      ocs2_msgs__msg__MpcTargetTrajectories__fini(&array->data[i]);
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

ocs2_msgs__msg__MpcTargetTrajectories__Sequence *
ocs2_msgs__msg__MpcTargetTrajectories__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcTargetTrajectories__Sequence * array = (ocs2_msgs__msg__MpcTargetTrajectories__Sequence *)allocator.allocate(sizeof(ocs2_msgs__msg__MpcTargetTrajectories__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocs2_msgs__msg__MpcTargetTrajectories__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocs2_msgs__msg__MpcTargetTrajectories__Sequence__destroy(ocs2_msgs__msg__MpcTargetTrajectories__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocs2_msgs__msg__MpcTargetTrajectories__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocs2_msgs__msg__MpcTargetTrajectories__Sequence__are_equal(const ocs2_msgs__msg__MpcTargetTrajectories__Sequence * lhs, const ocs2_msgs__msg__MpcTargetTrajectories__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocs2_msgs__msg__MpcTargetTrajectories__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocs2_msgs__msg__MpcTargetTrajectories__Sequence__copy(
  const ocs2_msgs__msg__MpcTargetTrajectories__Sequence * input,
  ocs2_msgs__msg__MpcTargetTrajectories__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocs2_msgs__msg__MpcTargetTrajectories);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocs2_msgs__msg__MpcTargetTrajectories * data =
      (ocs2_msgs__msg__MpcTargetTrajectories *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocs2_msgs__msg__MpcTargetTrajectories__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocs2_msgs__msg__MpcTargetTrajectories__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocs2_msgs__msg__MpcTargetTrajectories__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
