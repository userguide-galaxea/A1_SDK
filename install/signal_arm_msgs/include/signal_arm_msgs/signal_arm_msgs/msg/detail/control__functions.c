// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from signal_arm_msgs:msg/Control.idl
// generated code does not contain a copyright notice
#include "signal_arm_msgs/msg/detail/control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `p_des`
// Member `v_des`
// Member `kp`
// Member `kd`
// Member `t_ff`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
signal_arm_msgs__msg__Control__init(signal_arm_msgs__msg__Control * msg)
{
  if (!msg) {
    return false;
  }
  // p_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->p_des, 0)) {
    signal_arm_msgs__msg__Control__fini(msg);
    return false;
  }
  // v_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->v_des, 0)) {
    signal_arm_msgs__msg__Control__fini(msg);
    return false;
  }
  // kp
  if (!rosidl_runtime_c__float__Sequence__init(&msg->kp, 0)) {
    signal_arm_msgs__msg__Control__fini(msg);
    return false;
  }
  // kd
  if (!rosidl_runtime_c__float__Sequence__init(&msg->kd, 0)) {
    signal_arm_msgs__msg__Control__fini(msg);
    return false;
  }
  // t_ff
  if (!rosidl_runtime_c__float__Sequence__init(&msg->t_ff, 0)) {
    signal_arm_msgs__msg__Control__fini(msg);
    return false;
  }
  return true;
}

void
signal_arm_msgs__msg__Control__fini(signal_arm_msgs__msg__Control * msg)
{
  if (!msg) {
    return;
  }
  // p_des
  rosidl_runtime_c__float__Sequence__fini(&msg->p_des);
  // v_des
  rosidl_runtime_c__float__Sequence__fini(&msg->v_des);
  // kp
  rosidl_runtime_c__float__Sequence__fini(&msg->kp);
  // kd
  rosidl_runtime_c__float__Sequence__fini(&msg->kd);
  // t_ff
  rosidl_runtime_c__float__Sequence__fini(&msg->t_ff);
}

bool
signal_arm_msgs__msg__Control__are_equal(const signal_arm_msgs__msg__Control * lhs, const signal_arm_msgs__msg__Control * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // p_des
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->p_des), &(rhs->p_des)))
  {
    return false;
  }
  // v_des
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->v_des), &(rhs->v_des)))
  {
    return false;
  }
  // kp
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->kp), &(rhs->kp)))
  {
    return false;
  }
  // kd
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->kd), &(rhs->kd)))
  {
    return false;
  }
  // t_ff
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->t_ff), &(rhs->t_ff)))
  {
    return false;
  }
  return true;
}

bool
signal_arm_msgs__msg__Control__copy(
  const signal_arm_msgs__msg__Control * input,
  signal_arm_msgs__msg__Control * output)
{
  if (!input || !output) {
    return false;
  }
  // p_des
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->p_des), &(output->p_des)))
  {
    return false;
  }
  // v_des
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->v_des), &(output->v_des)))
  {
    return false;
  }
  // kp
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->kp), &(output->kp)))
  {
    return false;
  }
  // kd
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->kd), &(output->kd)))
  {
    return false;
  }
  // t_ff
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->t_ff), &(output->t_ff)))
  {
    return false;
  }
  return true;
}

signal_arm_msgs__msg__Control *
signal_arm_msgs__msg__Control__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__Control * msg = (signal_arm_msgs__msg__Control *)allocator.allocate(sizeof(signal_arm_msgs__msg__Control), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(signal_arm_msgs__msg__Control));
  bool success = signal_arm_msgs__msg__Control__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
signal_arm_msgs__msg__Control__destroy(signal_arm_msgs__msg__Control * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    signal_arm_msgs__msg__Control__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
signal_arm_msgs__msg__Control__Sequence__init(signal_arm_msgs__msg__Control__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__Control * data = NULL;

  if (size) {
    data = (signal_arm_msgs__msg__Control *)allocator.zero_allocate(size, sizeof(signal_arm_msgs__msg__Control), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = signal_arm_msgs__msg__Control__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        signal_arm_msgs__msg__Control__fini(&data[i - 1]);
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
signal_arm_msgs__msg__Control__Sequence__fini(signal_arm_msgs__msg__Control__Sequence * array)
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
      signal_arm_msgs__msg__Control__fini(&array->data[i]);
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

signal_arm_msgs__msg__Control__Sequence *
signal_arm_msgs__msg__Control__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__Control__Sequence * array = (signal_arm_msgs__msg__Control__Sequence *)allocator.allocate(sizeof(signal_arm_msgs__msg__Control__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = signal_arm_msgs__msg__Control__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
signal_arm_msgs__msg__Control__Sequence__destroy(signal_arm_msgs__msg__Control__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    signal_arm_msgs__msg__Control__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
signal_arm_msgs__msg__Control__Sequence__are_equal(const signal_arm_msgs__msg__Control__Sequence * lhs, const signal_arm_msgs__msg__Control__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!signal_arm_msgs__msg__Control__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
signal_arm_msgs__msg__Control__Sequence__copy(
  const signal_arm_msgs__msg__Control__Sequence * input,
  signal_arm_msgs__msg__Control__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(signal_arm_msgs__msg__Control);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    signal_arm_msgs__msg__Control * data =
      (signal_arm_msgs__msg__Control *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!signal_arm_msgs__msg__Control__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          signal_arm_msgs__msg__Control__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!signal_arm_msgs__msg__Control__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
