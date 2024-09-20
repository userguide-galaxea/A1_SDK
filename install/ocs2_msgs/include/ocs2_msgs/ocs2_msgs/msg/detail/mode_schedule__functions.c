// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ocs2_msgs:msg/ModeSchedule.idl
// generated code does not contain a copyright notice
#include "ocs2_msgs/msg/detail/mode_schedule__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `event_times`
// Member `mode_sequence`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
ocs2_msgs__msg__ModeSchedule__init(ocs2_msgs__msg__ModeSchedule * msg)
{
  if (!msg) {
    return false;
  }
  // event_times
  if (!rosidl_runtime_c__double__Sequence__init(&msg->event_times, 0)) {
    ocs2_msgs__msg__ModeSchedule__fini(msg);
    return false;
  }
  // mode_sequence
  if (!rosidl_runtime_c__int8__Sequence__init(&msg->mode_sequence, 0)) {
    ocs2_msgs__msg__ModeSchedule__fini(msg);
    return false;
  }
  return true;
}

void
ocs2_msgs__msg__ModeSchedule__fini(ocs2_msgs__msg__ModeSchedule * msg)
{
  if (!msg) {
    return;
  }
  // event_times
  rosidl_runtime_c__double__Sequence__fini(&msg->event_times);
  // mode_sequence
  rosidl_runtime_c__int8__Sequence__fini(&msg->mode_sequence);
}

bool
ocs2_msgs__msg__ModeSchedule__are_equal(const ocs2_msgs__msg__ModeSchedule * lhs, const ocs2_msgs__msg__ModeSchedule * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // event_times
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->event_times), &(rhs->event_times)))
  {
    return false;
  }
  // mode_sequence
  if (!rosidl_runtime_c__int8__Sequence__are_equal(
      &(lhs->mode_sequence), &(rhs->mode_sequence)))
  {
    return false;
  }
  return true;
}

bool
ocs2_msgs__msg__ModeSchedule__copy(
  const ocs2_msgs__msg__ModeSchedule * input,
  ocs2_msgs__msg__ModeSchedule * output)
{
  if (!input || !output) {
    return false;
  }
  // event_times
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->event_times), &(output->event_times)))
  {
    return false;
  }
  // mode_sequence
  if (!rosidl_runtime_c__int8__Sequence__copy(
      &(input->mode_sequence), &(output->mode_sequence)))
  {
    return false;
  }
  return true;
}

ocs2_msgs__msg__ModeSchedule *
ocs2_msgs__msg__ModeSchedule__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__ModeSchedule * msg = (ocs2_msgs__msg__ModeSchedule *)allocator.allocate(sizeof(ocs2_msgs__msg__ModeSchedule), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocs2_msgs__msg__ModeSchedule));
  bool success = ocs2_msgs__msg__ModeSchedule__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocs2_msgs__msg__ModeSchedule__destroy(ocs2_msgs__msg__ModeSchedule * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocs2_msgs__msg__ModeSchedule__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocs2_msgs__msg__ModeSchedule__Sequence__init(ocs2_msgs__msg__ModeSchedule__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__ModeSchedule * data = NULL;

  if (size) {
    data = (ocs2_msgs__msg__ModeSchedule *)allocator.zero_allocate(size, sizeof(ocs2_msgs__msg__ModeSchedule), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocs2_msgs__msg__ModeSchedule__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocs2_msgs__msg__ModeSchedule__fini(&data[i - 1]);
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
ocs2_msgs__msg__ModeSchedule__Sequence__fini(ocs2_msgs__msg__ModeSchedule__Sequence * array)
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
      ocs2_msgs__msg__ModeSchedule__fini(&array->data[i]);
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

ocs2_msgs__msg__ModeSchedule__Sequence *
ocs2_msgs__msg__ModeSchedule__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__ModeSchedule__Sequence * array = (ocs2_msgs__msg__ModeSchedule__Sequence *)allocator.allocate(sizeof(ocs2_msgs__msg__ModeSchedule__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocs2_msgs__msg__ModeSchedule__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocs2_msgs__msg__ModeSchedule__Sequence__destroy(ocs2_msgs__msg__ModeSchedule__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocs2_msgs__msg__ModeSchedule__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocs2_msgs__msg__ModeSchedule__Sequence__are_equal(const ocs2_msgs__msg__ModeSchedule__Sequence * lhs, const ocs2_msgs__msg__ModeSchedule__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocs2_msgs__msg__ModeSchedule__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocs2_msgs__msg__ModeSchedule__Sequence__copy(
  const ocs2_msgs__msg__ModeSchedule__Sequence * input,
  ocs2_msgs__msg__ModeSchedule__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocs2_msgs__msg__ModeSchedule);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocs2_msgs__msg__ModeSchedule * data =
      (ocs2_msgs__msg__ModeSchedule *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocs2_msgs__msg__ModeSchedule__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocs2_msgs__msg__ModeSchedule__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocs2_msgs__msg__ModeSchedule__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
