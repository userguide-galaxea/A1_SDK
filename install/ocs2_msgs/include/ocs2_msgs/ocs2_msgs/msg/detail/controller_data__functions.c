// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ocs2_msgs:msg/ControllerData.idl
// generated code does not contain a copyright notice
#include "ocs2_msgs/msg/detail/controller_data__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ocs2_msgs__msg__ControllerData__init(ocs2_msgs__msg__ControllerData * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__init(&msg->data, 0)) {
    ocs2_msgs__msg__ControllerData__fini(msg);
    return false;
  }
  return true;
}

void
ocs2_msgs__msg__ControllerData__fini(ocs2_msgs__msg__ControllerData * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__float__Sequence__fini(&msg->data);
}

bool
ocs2_msgs__msg__ControllerData__are_equal(const ocs2_msgs__msg__ControllerData * lhs, const ocs2_msgs__msg__ControllerData * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  return true;
}

bool
ocs2_msgs__msg__ControllerData__copy(
  const ocs2_msgs__msg__ControllerData * input,
  ocs2_msgs__msg__ControllerData * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__float__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  return true;
}

ocs2_msgs__msg__ControllerData *
ocs2_msgs__msg__ControllerData__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__ControllerData * msg = (ocs2_msgs__msg__ControllerData *)allocator.allocate(sizeof(ocs2_msgs__msg__ControllerData), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocs2_msgs__msg__ControllerData));
  bool success = ocs2_msgs__msg__ControllerData__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocs2_msgs__msg__ControllerData__destroy(ocs2_msgs__msg__ControllerData * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocs2_msgs__msg__ControllerData__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocs2_msgs__msg__ControllerData__Sequence__init(ocs2_msgs__msg__ControllerData__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__ControllerData * data = NULL;

  if (size) {
    data = (ocs2_msgs__msg__ControllerData *)allocator.zero_allocate(size, sizeof(ocs2_msgs__msg__ControllerData), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocs2_msgs__msg__ControllerData__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocs2_msgs__msg__ControllerData__fini(&data[i - 1]);
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
ocs2_msgs__msg__ControllerData__Sequence__fini(ocs2_msgs__msg__ControllerData__Sequence * array)
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
      ocs2_msgs__msg__ControllerData__fini(&array->data[i]);
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

ocs2_msgs__msg__ControllerData__Sequence *
ocs2_msgs__msg__ControllerData__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__ControllerData__Sequence * array = (ocs2_msgs__msg__ControllerData__Sequence *)allocator.allocate(sizeof(ocs2_msgs__msg__ControllerData__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocs2_msgs__msg__ControllerData__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocs2_msgs__msg__ControllerData__Sequence__destroy(ocs2_msgs__msg__ControllerData__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocs2_msgs__msg__ControllerData__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocs2_msgs__msg__ControllerData__Sequence__are_equal(const ocs2_msgs__msg__ControllerData__Sequence * lhs, const ocs2_msgs__msg__ControllerData__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocs2_msgs__msg__ControllerData__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocs2_msgs__msg__ControllerData__Sequence__copy(
  const ocs2_msgs__msg__ControllerData__Sequence * input,
  ocs2_msgs__msg__ControllerData__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocs2_msgs__msg__ControllerData);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocs2_msgs__msg__ControllerData * data =
      (ocs2_msgs__msg__ControllerData *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocs2_msgs__msg__ControllerData__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocs2_msgs__msg__ControllerData__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocs2_msgs__msg__ControllerData__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
