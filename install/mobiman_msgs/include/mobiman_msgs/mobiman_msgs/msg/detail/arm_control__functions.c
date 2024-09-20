// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobiman_msgs:msg/ArmControl.idl
// generated code does not contain a copyright notice
#include "mobiman_msgs/msg/detail/arm_control__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `p_des`
// Member `v_des`
// Member `kp`
// Member `kd`
// Member `t_ff`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
mobiman_msgs__msg__ArmControl__init(mobiman_msgs__msg__ArmControl * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobiman_msgs__msg__ArmControl__fini(msg);
    return false;
  }
  // p_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->p_des, 0)) {
    mobiman_msgs__msg__ArmControl__fini(msg);
    return false;
  }
  // v_des
  if (!rosidl_runtime_c__float__Sequence__init(&msg->v_des, 0)) {
    mobiman_msgs__msg__ArmControl__fini(msg);
    return false;
  }
  // kp
  if (!rosidl_runtime_c__float__Sequence__init(&msg->kp, 0)) {
    mobiman_msgs__msg__ArmControl__fini(msg);
    return false;
  }
  // kd
  if (!rosidl_runtime_c__float__Sequence__init(&msg->kd, 0)) {
    mobiman_msgs__msg__ArmControl__fini(msg);
    return false;
  }
  // t_ff
  if (!rosidl_runtime_c__float__Sequence__init(&msg->t_ff, 0)) {
    mobiman_msgs__msg__ArmControl__fini(msg);
    return false;
  }
  // mode
  return true;
}

void
mobiman_msgs__msg__ArmControl__fini(mobiman_msgs__msg__ArmControl * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
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
  // mode
}

bool
mobiman_msgs__msg__ArmControl__are_equal(const mobiman_msgs__msg__ArmControl * lhs, const mobiman_msgs__msg__ArmControl * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__are_equal(
      &(lhs->header), &(rhs->header)))
  {
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
  // mode
  if (lhs->mode != rhs->mode) {
    return false;
  }
  return true;
}

bool
mobiman_msgs__msg__ArmControl__copy(
  const mobiman_msgs__msg__ArmControl * input,
  mobiman_msgs__msg__ArmControl * output)
{
  if (!input || !output) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__copy(
      &(input->header), &(output->header)))
  {
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
  // mode
  output->mode = input->mode;
  return true;
}

mobiman_msgs__msg__ArmControl *
mobiman_msgs__msg__ArmControl__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ArmControl * msg = (mobiman_msgs__msg__ArmControl *)allocator.allocate(sizeof(mobiman_msgs__msg__ArmControl), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobiman_msgs__msg__ArmControl));
  bool success = mobiman_msgs__msg__ArmControl__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobiman_msgs__msg__ArmControl__destroy(mobiman_msgs__msg__ArmControl * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobiman_msgs__msg__ArmControl__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobiman_msgs__msg__ArmControl__Sequence__init(mobiman_msgs__msg__ArmControl__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ArmControl * data = NULL;

  if (size) {
    data = (mobiman_msgs__msg__ArmControl *)allocator.zero_allocate(size, sizeof(mobiman_msgs__msg__ArmControl), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobiman_msgs__msg__ArmControl__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobiman_msgs__msg__ArmControl__fini(&data[i - 1]);
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
mobiman_msgs__msg__ArmControl__Sequence__fini(mobiman_msgs__msg__ArmControl__Sequence * array)
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
      mobiman_msgs__msg__ArmControl__fini(&array->data[i]);
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

mobiman_msgs__msg__ArmControl__Sequence *
mobiman_msgs__msg__ArmControl__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ArmControl__Sequence * array = (mobiman_msgs__msg__ArmControl__Sequence *)allocator.allocate(sizeof(mobiman_msgs__msg__ArmControl__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobiman_msgs__msg__ArmControl__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobiman_msgs__msg__ArmControl__Sequence__destroy(mobiman_msgs__msg__ArmControl__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobiman_msgs__msg__ArmControl__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobiman_msgs__msg__ArmControl__Sequence__are_equal(const mobiman_msgs__msg__ArmControl__Sequence * lhs, const mobiman_msgs__msg__ArmControl__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobiman_msgs__msg__ArmControl__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobiman_msgs__msg__ArmControl__Sequence__copy(
  const mobiman_msgs__msg__ArmControl__Sequence * input,
  mobiman_msgs__msg__ArmControl__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobiman_msgs__msg__ArmControl);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobiman_msgs__msg__ArmControl * data =
      (mobiman_msgs__msg__ArmControl *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobiman_msgs__msg__ArmControl__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobiman_msgs__msg__ArmControl__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobiman_msgs__msg__ArmControl__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
