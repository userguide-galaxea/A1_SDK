// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobiman_msgs:msg/Mask.idl
// generated code does not contain a copyright notice
#include "mobiman_msgs/msg/detail/mask__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `data`
// Member `mask_types`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `instance_description`
#include "rosidl_runtime_c/string_functions.h"

bool
mobiman_msgs__msg__Mask__init(mobiman_msgs__msg__Mask * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobiman_msgs__msg__Mask__fini(msg);
    return false;
  }
  // height
  // width
  // data
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->data, 0)) {
    mobiman_msgs__msg__Mask__fini(msg);
    return false;
  }
  // mask_types
  if (!rosidl_runtime_c__uint8__Sequence__init(&msg->mask_types, 0)) {
    mobiman_msgs__msg__Mask__fini(msg);
    return false;
  }
  // instance_description
  if (!rosidl_runtime_c__String__Sequence__init(&msg->instance_description, 0)) {
    mobiman_msgs__msg__Mask__fini(msg);
    return false;
  }
  return true;
}

void
mobiman_msgs__msg__Mask__fini(mobiman_msgs__msg__Mask * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // height
  // width
  // data
  rosidl_runtime_c__uint8__Sequence__fini(&msg->data);
  // mask_types
  rosidl_runtime_c__uint8__Sequence__fini(&msg->mask_types);
  // instance_description
  rosidl_runtime_c__String__Sequence__fini(&msg->instance_description);
}

bool
mobiman_msgs__msg__Mask__are_equal(const mobiman_msgs__msg__Mask * lhs, const mobiman_msgs__msg__Mask * rhs)
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
  // height
  if (lhs->height != rhs->height) {
    return false;
  }
  // width
  if (lhs->width != rhs->width) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // mask_types
  if (!rosidl_runtime_c__uint8__Sequence__are_equal(
      &(lhs->mask_types), &(rhs->mask_types)))
  {
    return false;
  }
  // instance_description
  if (!rosidl_runtime_c__String__Sequence__are_equal(
      &(lhs->instance_description), &(rhs->instance_description)))
  {
    return false;
  }
  return true;
}

bool
mobiman_msgs__msg__Mask__copy(
  const mobiman_msgs__msg__Mask * input,
  mobiman_msgs__msg__Mask * output)
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
  // height
  output->height = input->height;
  // width
  output->width = input->width;
  // data
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // mask_types
  if (!rosidl_runtime_c__uint8__Sequence__copy(
      &(input->mask_types), &(output->mask_types)))
  {
    return false;
  }
  // instance_description
  if (!rosidl_runtime_c__String__Sequence__copy(
      &(input->instance_description), &(output->instance_description)))
  {
    return false;
  }
  return true;
}

mobiman_msgs__msg__Mask *
mobiman_msgs__msg__Mask__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__Mask * msg = (mobiman_msgs__msg__Mask *)allocator.allocate(sizeof(mobiman_msgs__msg__Mask), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobiman_msgs__msg__Mask));
  bool success = mobiman_msgs__msg__Mask__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobiman_msgs__msg__Mask__destroy(mobiman_msgs__msg__Mask * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobiman_msgs__msg__Mask__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobiman_msgs__msg__Mask__Sequence__init(mobiman_msgs__msg__Mask__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__Mask * data = NULL;

  if (size) {
    data = (mobiman_msgs__msg__Mask *)allocator.zero_allocate(size, sizeof(mobiman_msgs__msg__Mask), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobiman_msgs__msg__Mask__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobiman_msgs__msg__Mask__fini(&data[i - 1]);
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
mobiman_msgs__msg__Mask__Sequence__fini(mobiman_msgs__msg__Mask__Sequence * array)
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
      mobiman_msgs__msg__Mask__fini(&array->data[i]);
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

mobiman_msgs__msg__Mask__Sequence *
mobiman_msgs__msg__Mask__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__Mask__Sequence * array = (mobiman_msgs__msg__Mask__Sequence *)allocator.allocate(sizeof(mobiman_msgs__msg__Mask__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobiman_msgs__msg__Mask__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobiman_msgs__msg__Mask__Sequence__destroy(mobiman_msgs__msg__Mask__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobiman_msgs__msg__Mask__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobiman_msgs__msg__Mask__Sequence__are_equal(const mobiman_msgs__msg__Mask__Sequence * lhs, const mobiman_msgs__msg__Mask__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobiman_msgs__msg__Mask__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobiman_msgs__msg__Mask__Sequence__copy(
  const mobiman_msgs__msg__Mask__Sequence * input,
  mobiman_msgs__msg__Mask__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobiman_msgs__msg__Mask);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobiman_msgs__msg__Mask * data =
      (mobiman_msgs__msg__Mask *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobiman_msgs__msg__Mask__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobiman_msgs__msg__Mask__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobiman_msgs__msg__Mask__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
