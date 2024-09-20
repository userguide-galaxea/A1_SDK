// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobiman_msgs:msg/ButtonSemantics.idl
// generated code does not contain a copyright notice
#include "mobiman_msgs/msg/detail/button_semantics__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
mobiman_msgs__msg__ButtonSemantics__init(mobiman_msgs__msg__ButtonSemantics * msg)
{
  if (!msg) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    mobiman_msgs__msg__ButtonSemantics__fini(msg);
    return false;
  }
  // button_status
  return true;
}

void
mobiman_msgs__msg__ButtonSemantics__fini(mobiman_msgs__msg__ButtonSemantics * msg)
{
  if (!msg) {
    return;
  }
  // name
  rosidl_runtime_c__String__fini(&msg->name);
  // button_status
}

bool
mobiman_msgs__msg__ButtonSemantics__are_equal(const mobiman_msgs__msg__ButtonSemantics * lhs, const mobiman_msgs__msg__ButtonSemantics * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  // button_status
  if (lhs->button_status != rhs->button_status) {
    return false;
  }
  return true;
}

bool
mobiman_msgs__msg__ButtonSemantics__copy(
  const mobiman_msgs__msg__ButtonSemantics * input,
  mobiman_msgs__msg__ButtonSemantics * output)
{
  if (!input || !output) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  // button_status
  output->button_status = input->button_status;
  return true;
}

mobiman_msgs__msg__ButtonSemantics *
mobiman_msgs__msg__ButtonSemantics__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ButtonSemantics * msg = (mobiman_msgs__msg__ButtonSemantics *)allocator.allocate(sizeof(mobiman_msgs__msg__ButtonSemantics), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobiman_msgs__msg__ButtonSemantics));
  bool success = mobiman_msgs__msg__ButtonSemantics__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobiman_msgs__msg__ButtonSemantics__destroy(mobiman_msgs__msg__ButtonSemantics * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobiman_msgs__msg__ButtonSemantics__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobiman_msgs__msg__ButtonSemantics__Sequence__init(mobiman_msgs__msg__ButtonSemantics__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ButtonSemantics * data = NULL;

  if (size) {
    data = (mobiman_msgs__msg__ButtonSemantics *)allocator.zero_allocate(size, sizeof(mobiman_msgs__msg__ButtonSemantics), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobiman_msgs__msg__ButtonSemantics__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobiman_msgs__msg__ButtonSemantics__fini(&data[i - 1]);
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
mobiman_msgs__msg__ButtonSemantics__Sequence__fini(mobiman_msgs__msg__ButtonSemantics__Sequence * array)
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
      mobiman_msgs__msg__ButtonSemantics__fini(&array->data[i]);
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

mobiman_msgs__msg__ButtonSemantics__Sequence *
mobiman_msgs__msg__ButtonSemantics__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__ButtonSemantics__Sequence * array = (mobiman_msgs__msg__ButtonSemantics__Sequence *)allocator.allocate(sizeof(mobiman_msgs__msg__ButtonSemantics__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobiman_msgs__msg__ButtonSemantics__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobiman_msgs__msg__ButtonSemantics__Sequence__destroy(mobiman_msgs__msg__ButtonSemantics__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobiman_msgs__msg__ButtonSemantics__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobiman_msgs__msg__ButtonSemantics__Sequence__are_equal(const mobiman_msgs__msg__ButtonSemantics__Sequence * lhs, const mobiman_msgs__msg__ButtonSemantics__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobiman_msgs__msg__ButtonSemantics__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobiman_msgs__msg__ButtonSemantics__Sequence__copy(
  const mobiman_msgs__msg__ButtonSemantics__Sequence * input,
  mobiman_msgs__msg__ButtonSemantics__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobiman_msgs__msg__ButtonSemantics);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobiman_msgs__msg__ButtonSemantics * data =
      (mobiman_msgs__msg__ButtonSemantics *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobiman_msgs__msg__ButtonSemantics__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobiman_msgs__msg__ButtonSemantics__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobiman_msgs__msg__ButtonSemantics__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
