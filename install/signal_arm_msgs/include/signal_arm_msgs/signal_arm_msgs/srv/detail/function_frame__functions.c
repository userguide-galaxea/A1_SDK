// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from signal_arm_msgs:srv/FunctionFrame.idl
// generated code does not contain a copyright notice
#include "signal_arm_msgs/srv/detail/function_frame__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
signal_arm_msgs__srv__FunctionFrame_Request__init(signal_arm_msgs__srv__FunctionFrame_Request * msg)
{
  if (!msg) {
    return false;
  }
  // command
  return true;
}

void
signal_arm_msgs__srv__FunctionFrame_Request__fini(signal_arm_msgs__srv__FunctionFrame_Request * msg)
{
  if (!msg) {
    return;
  }
  // command
}

bool
signal_arm_msgs__srv__FunctionFrame_Request__are_equal(const signal_arm_msgs__srv__FunctionFrame_Request * lhs, const signal_arm_msgs__srv__FunctionFrame_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // command
  if (lhs->command != rhs->command) {
    return false;
  }
  return true;
}

bool
signal_arm_msgs__srv__FunctionFrame_Request__copy(
  const signal_arm_msgs__srv__FunctionFrame_Request * input,
  signal_arm_msgs__srv__FunctionFrame_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // command
  output->command = input->command;
  return true;
}

signal_arm_msgs__srv__FunctionFrame_Request *
signal_arm_msgs__srv__FunctionFrame_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__srv__FunctionFrame_Request * msg = (signal_arm_msgs__srv__FunctionFrame_Request *)allocator.allocate(sizeof(signal_arm_msgs__srv__FunctionFrame_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(signal_arm_msgs__srv__FunctionFrame_Request));
  bool success = signal_arm_msgs__srv__FunctionFrame_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
signal_arm_msgs__srv__FunctionFrame_Request__destroy(signal_arm_msgs__srv__FunctionFrame_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    signal_arm_msgs__srv__FunctionFrame_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
signal_arm_msgs__srv__FunctionFrame_Request__Sequence__init(signal_arm_msgs__srv__FunctionFrame_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__srv__FunctionFrame_Request * data = NULL;

  if (size) {
    data = (signal_arm_msgs__srv__FunctionFrame_Request *)allocator.zero_allocate(size, sizeof(signal_arm_msgs__srv__FunctionFrame_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = signal_arm_msgs__srv__FunctionFrame_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        signal_arm_msgs__srv__FunctionFrame_Request__fini(&data[i - 1]);
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
signal_arm_msgs__srv__FunctionFrame_Request__Sequence__fini(signal_arm_msgs__srv__FunctionFrame_Request__Sequence * array)
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
      signal_arm_msgs__srv__FunctionFrame_Request__fini(&array->data[i]);
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

signal_arm_msgs__srv__FunctionFrame_Request__Sequence *
signal_arm_msgs__srv__FunctionFrame_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__srv__FunctionFrame_Request__Sequence * array = (signal_arm_msgs__srv__FunctionFrame_Request__Sequence *)allocator.allocate(sizeof(signal_arm_msgs__srv__FunctionFrame_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = signal_arm_msgs__srv__FunctionFrame_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
signal_arm_msgs__srv__FunctionFrame_Request__Sequence__destroy(signal_arm_msgs__srv__FunctionFrame_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    signal_arm_msgs__srv__FunctionFrame_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
signal_arm_msgs__srv__FunctionFrame_Request__Sequence__are_equal(const signal_arm_msgs__srv__FunctionFrame_Request__Sequence * lhs, const signal_arm_msgs__srv__FunctionFrame_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!signal_arm_msgs__srv__FunctionFrame_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
signal_arm_msgs__srv__FunctionFrame_Request__Sequence__copy(
  const signal_arm_msgs__srv__FunctionFrame_Request__Sequence * input,
  signal_arm_msgs__srv__FunctionFrame_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(signal_arm_msgs__srv__FunctionFrame_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    signal_arm_msgs__srv__FunctionFrame_Request * data =
      (signal_arm_msgs__srv__FunctionFrame_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!signal_arm_msgs__srv__FunctionFrame_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          signal_arm_msgs__srv__FunctionFrame_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!signal_arm_msgs__srv__FunctionFrame_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `message`
#include "rosidl_runtime_c/string_functions.h"

bool
signal_arm_msgs__srv__FunctionFrame_Response__init(signal_arm_msgs__srv__FunctionFrame_Response * msg)
{
  if (!msg) {
    return false;
  }
  // success
  // message
  if (!rosidl_runtime_c__String__init(&msg->message)) {
    signal_arm_msgs__srv__FunctionFrame_Response__fini(msg);
    return false;
  }
  return true;
}

void
signal_arm_msgs__srv__FunctionFrame_Response__fini(signal_arm_msgs__srv__FunctionFrame_Response * msg)
{
  if (!msg) {
    return;
  }
  // success
  // message
  rosidl_runtime_c__String__fini(&msg->message);
}

bool
signal_arm_msgs__srv__FunctionFrame_Response__are_equal(const signal_arm_msgs__srv__FunctionFrame_Response * lhs, const signal_arm_msgs__srv__FunctionFrame_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // success
  if (lhs->success != rhs->success) {
    return false;
  }
  // message
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->message), &(rhs->message)))
  {
    return false;
  }
  return true;
}

bool
signal_arm_msgs__srv__FunctionFrame_Response__copy(
  const signal_arm_msgs__srv__FunctionFrame_Response * input,
  signal_arm_msgs__srv__FunctionFrame_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // success
  output->success = input->success;
  // message
  if (!rosidl_runtime_c__String__copy(
      &(input->message), &(output->message)))
  {
    return false;
  }
  return true;
}

signal_arm_msgs__srv__FunctionFrame_Response *
signal_arm_msgs__srv__FunctionFrame_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__srv__FunctionFrame_Response * msg = (signal_arm_msgs__srv__FunctionFrame_Response *)allocator.allocate(sizeof(signal_arm_msgs__srv__FunctionFrame_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(signal_arm_msgs__srv__FunctionFrame_Response));
  bool success = signal_arm_msgs__srv__FunctionFrame_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
signal_arm_msgs__srv__FunctionFrame_Response__destroy(signal_arm_msgs__srv__FunctionFrame_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    signal_arm_msgs__srv__FunctionFrame_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
signal_arm_msgs__srv__FunctionFrame_Response__Sequence__init(signal_arm_msgs__srv__FunctionFrame_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__srv__FunctionFrame_Response * data = NULL;

  if (size) {
    data = (signal_arm_msgs__srv__FunctionFrame_Response *)allocator.zero_allocate(size, sizeof(signal_arm_msgs__srv__FunctionFrame_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = signal_arm_msgs__srv__FunctionFrame_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        signal_arm_msgs__srv__FunctionFrame_Response__fini(&data[i - 1]);
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
signal_arm_msgs__srv__FunctionFrame_Response__Sequence__fini(signal_arm_msgs__srv__FunctionFrame_Response__Sequence * array)
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
      signal_arm_msgs__srv__FunctionFrame_Response__fini(&array->data[i]);
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

signal_arm_msgs__srv__FunctionFrame_Response__Sequence *
signal_arm_msgs__srv__FunctionFrame_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  signal_arm_msgs__srv__FunctionFrame_Response__Sequence * array = (signal_arm_msgs__srv__FunctionFrame_Response__Sequence *)allocator.allocate(sizeof(signal_arm_msgs__srv__FunctionFrame_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = signal_arm_msgs__srv__FunctionFrame_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
signal_arm_msgs__srv__FunctionFrame_Response__Sequence__destroy(signal_arm_msgs__srv__FunctionFrame_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    signal_arm_msgs__srv__FunctionFrame_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
signal_arm_msgs__srv__FunctionFrame_Response__Sequence__are_equal(const signal_arm_msgs__srv__FunctionFrame_Response__Sequence * lhs, const signal_arm_msgs__srv__FunctionFrame_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!signal_arm_msgs__srv__FunctionFrame_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
signal_arm_msgs__srv__FunctionFrame_Response__Sequence__copy(
  const signal_arm_msgs__srv__FunctionFrame_Response__Sequence * input,
  signal_arm_msgs__srv__FunctionFrame_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(signal_arm_msgs__srv__FunctionFrame_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    signal_arm_msgs__srv__FunctionFrame_Response * data =
      (signal_arm_msgs__srv__FunctionFrame_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!signal_arm_msgs__srv__FunctionFrame_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          signal_arm_msgs__srv__FunctionFrame_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!signal_arm_msgs__srv__FunctionFrame_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
