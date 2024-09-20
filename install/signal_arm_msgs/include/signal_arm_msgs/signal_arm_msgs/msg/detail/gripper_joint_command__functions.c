// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from signal_arm_msgs:msg/GripperJointCommand.idl
// generated code does not contain a copyright notice
#include "signal_arm_msgs/msg/detail/gripper_joint_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"

bool
signal_arm_msgs__msg__GripperJointCommand__init(signal_arm_msgs__msg__GripperJointCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    signal_arm_msgs__msg__GripperJointCommand__fini(msg);
    return false;
  }
  // gripper_force
  return true;
}

void
signal_arm_msgs__msg__GripperJointCommand__fini(signal_arm_msgs__msg__GripperJointCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // gripper_force
}

bool
signal_arm_msgs__msg__GripperJointCommand__are_equal(const signal_arm_msgs__msg__GripperJointCommand * lhs, const signal_arm_msgs__msg__GripperJointCommand * rhs)
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
  // gripper_force
  if (lhs->gripper_force != rhs->gripper_force) {
    return false;
  }
  return true;
}

bool
signal_arm_msgs__msg__GripperJointCommand__copy(
  const signal_arm_msgs__msg__GripperJointCommand * input,
  signal_arm_msgs__msg__GripperJointCommand * output)
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
  // gripper_force
  output->gripper_force = input->gripper_force;
  return true;
}

signal_arm_msgs__msg__GripperJointCommand *
signal_arm_msgs__msg__GripperJointCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__GripperJointCommand * msg = (signal_arm_msgs__msg__GripperJointCommand *)allocator.allocate(sizeof(signal_arm_msgs__msg__GripperJointCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(signal_arm_msgs__msg__GripperJointCommand));
  bool success = signal_arm_msgs__msg__GripperJointCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
signal_arm_msgs__msg__GripperJointCommand__destroy(signal_arm_msgs__msg__GripperJointCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    signal_arm_msgs__msg__GripperJointCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
signal_arm_msgs__msg__GripperJointCommand__Sequence__init(signal_arm_msgs__msg__GripperJointCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__GripperJointCommand * data = NULL;

  if (size) {
    data = (signal_arm_msgs__msg__GripperJointCommand *)allocator.zero_allocate(size, sizeof(signal_arm_msgs__msg__GripperJointCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = signal_arm_msgs__msg__GripperJointCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        signal_arm_msgs__msg__GripperJointCommand__fini(&data[i - 1]);
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
signal_arm_msgs__msg__GripperJointCommand__Sequence__fini(signal_arm_msgs__msg__GripperJointCommand__Sequence * array)
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
      signal_arm_msgs__msg__GripperJointCommand__fini(&array->data[i]);
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

signal_arm_msgs__msg__GripperJointCommand__Sequence *
signal_arm_msgs__msg__GripperJointCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__msg__GripperJointCommand__Sequence * array = (signal_arm_msgs__msg__GripperJointCommand__Sequence *)allocator.allocate(sizeof(signal_arm_msgs__msg__GripperJointCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = signal_arm_msgs__msg__GripperJointCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
signal_arm_msgs__msg__GripperJointCommand__Sequence__destroy(signal_arm_msgs__msg__GripperJointCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    signal_arm_msgs__msg__GripperJointCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
signal_arm_msgs__msg__GripperJointCommand__Sequence__are_equal(const signal_arm_msgs__msg__GripperJointCommand__Sequence * lhs, const signal_arm_msgs__msg__GripperJointCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!signal_arm_msgs__msg__GripperJointCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
signal_arm_msgs__msg__GripperJointCommand__Sequence__copy(
  const signal_arm_msgs__msg__GripperJointCommand__Sequence * input,
  signal_arm_msgs__msg__GripperJointCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(signal_arm_msgs__msg__GripperJointCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    signal_arm_msgs__msg__GripperJointCommand * data =
      (signal_arm_msgs__msg__GripperJointCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!signal_arm_msgs__msg__GripperJointCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          signal_arm_msgs__msg__GripperJointCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!signal_arm_msgs__msg__GripperJointCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
