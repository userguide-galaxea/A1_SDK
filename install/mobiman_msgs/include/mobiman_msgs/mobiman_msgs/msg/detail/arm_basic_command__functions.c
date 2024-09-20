// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobiman_msgs:msg/ArmBasicCommand.idl
// generated code does not contain a copyright notice
#include "mobiman_msgs/msg/detail/arm_basic_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `jpos`
#include "mobiman_msgs/msg/detail/joint_position__functions.h"
// Member `jspeed`
#include "mobiman_msgs/msg/detail/joint_speed__functions.h"

bool
mobiman_msgs__msg__ArmBasicCommand__init(mobiman_msgs__msg__ArmBasicCommand * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobiman_msgs__msg__ArmBasicCommand__fini(msg);
    return false;
  }
  // jpos
  if (!mobiman_msgs__msg__JointPosition__init(&msg->jpos)) {
    mobiman_msgs__msg__ArmBasicCommand__fini(msg);
    return false;
  }
  // jspeed
  if (!mobiman_msgs__msg__JointSpeed__init(&msg->jspeed)) {
    mobiman_msgs__msg__ArmBasicCommand__fini(msg);
    return false;
  }
  return true;
}

void
mobiman_msgs__msg__ArmBasicCommand__fini(mobiman_msgs__msg__ArmBasicCommand * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // jpos
  mobiman_msgs__msg__JointPosition__fini(&msg->jpos);
  // jspeed
  mobiman_msgs__msg__JointSpeed__fini(&msg->jspeed);
}

bool
mobiman_msgs__msg__ArmBasicCommand__are_equal(const mobiman_msgs__msg__ArmBasicCommand * lhs, const mobiman_msgs__msg__ArmBasicCommand * rhs)
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
  // jpos
  if (!mobiman_msgs__msg__JointPosition__are_equal(
      &(lhs->jpos), &(rhs->jpos)))
  {
    return false;
  }
  // jspeed
  if (!mobiman_msgs__msg__JointSpeed__are_equal(
      &(lhs->jspeed), &(rhs->jspeed)))
  {
    return false;
  }
  return true;
}

bool
mobiman_msgs__msg__ArmBasicCommand__copy(
  const mobiman_msgs__msg__ArmBasicCommand * input,
  mobiman_msgs__msg__ArmBasicCommand * output)
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
  // jpos
  if (!mobiman_msgs__msg__JointPosition__copy(
      &(input->jpos), &(output->jpos)))
  {
    return false;
  }
  // jspeed
  if (!mobiman_msgs__msg__JointSpeed__copy(
      &(input->jspeed), &(output->jspeed)))
  {
    return false;
  }
  return true;
}

mobiman_msgs__msg__ArmBasicCommand *
mobiman_msgs__msg__ArmBasicCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ArmBasicCommand * msg = (mobiman_msgs__msg__ArmBasicCommand *)allocator.allocate(sizeof(mobiman_msgs__msg__ArmBasicCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobiman_msgs__msg__ArmBasicCommand));
  bool success = mobiman_msgs__msg__ArmBasicCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobiman_msgs__msg__ArmBasicCommand__destroy(mobiman_msgs__msg__ArmBasicCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobiman_msgs__msg__ArmBasicCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobiman_msgs__msg__ArmBasicCommand__Sequence__init(mobiman_msgs__msg__ArmBasicCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ArmBasicCommand * data = NULL;

  if (size) {
    data = (mobiman_msgs__msg__ArmBasicCommand *)allocator.zero_allocate(size, sizeof(mobiman_msgs__msg__ArmBasicCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobiman_msgs__msg__ArmBasicCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobiman_msgs__msg__ArmBasicCommand__fini(&data[i - 1]);
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
mobiman_msgs__msg__ArmBasicCommand__Sequence__fini(mobiman_msgs__msg__ArmBasicCommand__Sequence * array)
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
      mobiman_msgs__msg__ArmBasicCommand__fini(&array->data[i]);
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

mobiman_msgs__msg__ArmBasicCommand__Sequence *
mobiman_msgs__msg__ArmBasicCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ArmBasicCommand__Sequence * array = (mobiman_msgs__msg__ArmBasicCommand__Sequence *)allocator.allocate(sizeof(mobiman_msgs__msg__ArmBasicCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobiman_msgs__msg__ArmBasicCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobiman_msgs__msg__ArmBasicCommand__Sequence__destroy(mobiman_msgs__msg__ArmBasicCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobiman_msgs__msg__ArmBasicCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobiman_msgs__msg__ArmBasicCommand__Sequence__are_equal(const mobiman_msgs__msg__ArmBasicCommand__Sequence * lhs, const mobiman_msgs__msg__ArmBasicCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobiman_msgs__msg__ArmBasicCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobiman_msgs__msg__ArmBasicCommand__Sequence__copy(
  const mobiman_msgs__msg__ArmBasicCommand__Sequence * input,
  mobiman_msgs__msg__ArmBasicCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobiman_msgs__msg__ArmBasicCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobiman_msgs__msg__ArmBasicCommand * data =
      (mobiman_msgs__msg__ArmBasicCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobiman_msgs__msg__ArmBasicCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobiman_msgs__msg__ArmBasicCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobiman_msgs__msg__ArmBasicCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
