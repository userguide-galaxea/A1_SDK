// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobiman_msgs:msg/Button3d.idl
// generated code does not contain a copyright notice
#include "mobiman_msgs/msg/detail/button3d__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"
// Member `button_semantics`
#include "mobiman_msgs/msg/detail/button_semantics__functions.h"

bool
mobiman_msgs__msg__Button3d__init(mobiman_msgs__msg__Button3d * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    mobiman_msgs__msg__Button3d__fini(msg);
    return false;
  }
  // button_semantics
  if (!mobiman_msgs__msg__ButtonSemantics__init(&msg->button_semantics)) {
    mobiman_msgs__msg__Button3d__fini(msg);
    return false;
  }
  return true;
}

void
mobiman_msgs__msg__Button3d__fini(mobiman_msgs__msg__Button3d * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
  // button_semantics
  mobiman_msgs__msg__ButtonSemantics__fini(&msg->button_semantics);
}

bool
mobiman_msgs__msg__Button3d__are_equal(const mobiman_msgs__msg__Button3d * lhs, const mobiman_msgs__msg__Button3d * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__are_equal(
      &(lhs->pose), &(rhs->pose)))
  {
    return false;
  }
  // button_semantics
  if (!mobiman_msgs__msg__ButtonSemantics__are_equal(
      &(lhs->button_semantics), &(rhs->button_semantics)))
  {
    return false;
  }
  return true;
}

bool
mobiman_msgs__msg__Button3d__copy(
  const mobiman_msgs__msg__Button3d * input,
  mobiman_msgs__msg__Button3d * output)
{
  if (!input || !output) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__copy(
      &(input->pose), &(output->pose)))
  {
    return false;
  }
  // button_semantics
  if (!mobiman_msgs__msg__ButtonSemantics__copy(
      &(input->button_semantics), &(output->button_semantics)))
  {
    return false;
  }
  return true;
}

mobiman_msgs__msg__Button3d *
mobiman_msgs__msg__Button3d__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__Button3d * msg = (mobiman_msgs__msg__Button3d *)allocator.allocate(sizeof(mobiman_msgs__msg__Button3d), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobiman_msgs__msg__Button3d));
  bool success = mobiman_msgs__msg__Button3d__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobiman_msgs__msg__Button3d__destroy(mobiman_msgs__msg__Button3d * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobiman_msgs__msg__Button3d__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobiman_msgs__msg__Button3d__Sequence__init(mobiman_msgs__msg__Button3d__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__Button3d * data = NULL;

  if (size) {
    data = (mobiman_msgs__msg__Button3d *)allocator.zero_allocate(size, sizeof(mobiman_msgs__msg__Button3d), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobiman_msgs__msg__Button3d__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobiman_msgs__msg__Button3d__fini(&data[i - 1]);
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
mobiman_msgs__msg__Button3d__Sequence__fini(mobiman_msgs__msg__Button3d__Sequence * array)
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
      mobiman_msgs__msg__Button3d__fini(&array->data[i]);
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

mobiman_msgs__msg__Button3d__Sequence *
mobiman_msgs__msg__Button3d__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__Button3d__Sequence * array = (mobiman_msgs__msg__Button3d__Sequence *)allocator.allocate(sizeof(mobiman_msgs__msg__Button3d__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobiman_msgs__msg__Button3d__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobiman_msgs__msg__Button3d__Sequence__destroy(mobiman_msgs__msg__Button3d__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobiman_msgs__msg__Button3d__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobiman_msgs__msg__Button3d__Sequence__are_equal(const mobiman_msgs__msg__Button3d__Sequence * lhs, const mobiman_msgs__msg__Button3d__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobiman_msgs__msg__Button3d__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobiman_msgs__msg__Button3d__Sequence__copy(
  const mobiman_msgs__msg__Button3d__Sequence * input,
  mobiman_msgs__msg__Button3d__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobiman_msgs__msg__Button3d);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobiman_msgs__msg__Button3d * data =
      (mobiman_msgs__msg__Button3d *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobiman_msgs__msg__Button3d__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobiman_msgs__msg__Button3d__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobiman_msgs__msg__Button3d__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}