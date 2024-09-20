// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobiman_msgs:msg/ChassisCommandStamped.idl
// generated code does not contain a copyright notice
#include "mobiman_msgs/msg/detail/chassis_command_stamped__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `command`
#include "mobiman_msgs/msg/detail/chassis_command__functions.h"

bool
mobiman_msgs__msg__ChassisCommandStamped__init(mobiman_msgs__msg__ChassisCommandStamped * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobiman_msgs__msg__ChassisCommandStamped__fini(msg);
    return false;
  }
  // command
  if (!mobiman_msgs__msg__ChassisCommand__init(&msg->command)) {
    mobiman_msgs__msg__ChassisCommandStamped__fini(msg);
    return false;
  }
  return true;
}

void
mobiman_msgs__msg__ChassisCommandStamped__fini(mobiman_msgs__msg__ChassisCommandStamped * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // command
  mobiman_msgs__msg__ChassisCommand__fini(&msg->command);
}

bool
mobiman_msgs__msg__ChassisCommandStamped__are_equal(const mobiman_msgs__msg__ChassisCommandStamped * lhs, const mobiman_msgs__msg__ChassisCommandStamped * rhs)
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
  // command
  if (!mobiman_msgs__msg__ChassisCommand__are_equal(
      &(lhs->command), &(rhs->command)))
  {
    return false;
  }
  return true;
}

bool
mobiman_msgs__msg__ChassisCommandStamped__copy(
  const mobiman_msgs__msg__ChassisCommandStamped * input,
  mobiman_msgs__msg__ChassisCommandStamped * output)
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
  // command
  if (!mobiman_msgs__msg__ChassisCommand__copy(
      &(input->command), &(output->command)))
  {
    return false;
  }
  return true;
}

mobiman_msgs__msg__ChassisCommandStamped *
mobiman_msgs__msg__ChassisCommandStamped__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ChassisCommandStamped * msg = (mobiman_msgs__msg__ChassisCommandStamped *)allocator.allocate(sizeof(mobiman_msgs__msg__ChassisCommandStamped), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobiman_msgs__msg__ChassisCommandStamped));
  bool success = mobiman_msgs__msg__ChassisCommandStamped__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobiman_msgs__msg__ChassisCommandStamped__destroy(mobiman_msgs__msg__ChassisCommandStamped * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobiman_msgs__msg__ChassisCommandStamped__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobiman_msgs__msg__ChassisCommandStamped__Sequence__init(mobiman_msgs__msg__ChassisCommandStamped__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ChassisCommandStamped * data = NULL;

  if (size) {
    data = (mobiman_msgs__msg__ChassisCommandStamped *)allocator.zero_allocate(size, sizeof(mobiman_msgs__msg__ChassisCommandStamped), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobiman_msgs__msg__ChassisCommandStamped__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobiman_msgs__msg__ChassisCommandStamped__fini(&data[i - 1]);
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
mobiman_msgs__msg__ChassisCommandStamped__Sequence__fini(mobiman_msgs__msg__ChassisCommandStamped__Sequence * array)
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
      mobiman_msgs__msg__ChassisCommandStamped__fini(&array->data[i]);
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

mobiman_msgs__msg__ChassisCommandStamped__Sequence *
mobiman_msgs__msg__ChassisCommandStamped__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ChassisCommandStamped__Sequence * array = (mobiman_msgs__msg__ChassisCommandStamped__Sequence *)allocator.allocate(sizeof(mobiman_msgs__msg__ChassisCommandStamped__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobiman_msgs__msg__ChassisCommandStamped__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobiman_msgs__msg__ChassisCommandStamped__Sequence__destroy(mobiman_msgs__msg__ChassisCommandStamped__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobiman_msgs__msg__ChassisCommandStamped__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobiman_msgs__msg__ChassisCommandStamped__Sequence__are_equal(const mobiman_msgs__msg__ChassisCommandStamped__Sequence * lhs, const mobiman_msgs__msg__ChassisCommandStamped__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobiman_msgs__msg__ChassisCommandStamped__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobiman_msgs__msg__ChassisCommandStamped__Sequence__copy(
  const mobiman_msgs__msg__ChassisCommandStamped__Sequence * input,
  mobiman_msgs__msg__ChassisCommandStamped__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobiman_msgs__msg__ChassisCommandStamped);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobiman_msgs__msg__ChassisCommandStamped * data =
      (mobiman_msgs__msg__ChassisCommandStamped *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobiman_msgs__msg__ChassisCommandStamped__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobiman_msgs__msg__ChassisCommandStamped__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobiman_msgs__msg__ChassisCommandStamped__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
