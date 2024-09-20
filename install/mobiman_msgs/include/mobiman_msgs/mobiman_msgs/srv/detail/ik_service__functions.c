// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobiman_msgs:srv/IKService.idl
// generated code does not contain a copyright notice
#include "mobiman_msgs/srv/detail/ik_service__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `pose`
#include "geometry_msgs/msg/detail/pose__functions.h"

bool
mobiman_msgs__srv__IKService_Request__init(mobiman_msgs__srv__IKService_Request * msg)
{
  if (!msg) {
    return false;
  }
  // pose
  if (!geometry_msgs__msg__Pose__init(&msg->pose)) {
    mobiman_msgs__srv__IKService_Request__fini(msg);
    return false;
  }
  return true;
}

void
mobiman_msgs__srv__IKService_Request__fini(mobiman_msgs__srv__IKService_Request * msg)
{
  if (!msg) {
    return;
  }
  // pose
  geometry_msgs__msg__Pose__fini(&msg->pose);
}

bool
mobiman_msgs__srv__IKService_Request__are_equal(const mobiman_msgs__srv__IKService_Request * lhs, const mobiman_msgs__srv__IKService_Request * rhs)
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
  return true;
}

bool
mobiman_msgs__srv__IKService_Request__copy(
  const mobiman_msgs__srv__IKService_Request * input,
  mobiman_msgs__srv__IKService_Request * output)
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
  return true;
}

mobiman_msgs__srv__IKService_Request *
mobiman_msgs__srv__IKService_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__srv__IKService_Request * msg = (mobiman_msgs__srv__IKService_Request *)allocator.allocate(sizeof(mobiman_msgs__srv__IKService_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobiman_msgs__srv__IKService_Request));
  bool success = mobiman_msgs__srv__IKService_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobiman_msgs__srv__IKService_Request__destroy(mobiman_msgs__srv__IKService_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobiman_msgs__srv__IKService_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobiman_msgs__srv__IKService_Request__Sequence__init(mobiman_msgs__srv__IKService_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__srv__IKService_Request * data = NULL;

  if (size) {
    data = (mobiman_msgs__srv__IKService_Request *)allocator.zero_allocate(size, sizeof(mobiman_msgs__srv__IKService_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobiman_msgs__srv__IKService_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobiman_msgs__srv__IKService_Request__fini(&data[i - 1]);
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
mobiman_msgs__srv__IKService_Request__Sequence__fini(mobiman_msgs__srv__IKService_Request__Sequence * array)
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
      mobiman_msgs__srv__IKService_Request__fini(&array->data[i]);
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

mobiman_msgs__srv__IKService_Request__Sequence *
mobiman_msgs__srv__IKService_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__srv__IKService_Request__Sequence * array = (mobiman_msgs__srv__IKService_Request__Sequence *)allocator.allocate(sizeof(mobiman_msgs__srv__IKService_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobiman_msgs__srv__IKService_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobiman_msgs__srv__IKService_Request__Sequence__destroy(mobiman_msgs__srv__IKService_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobiman_msgs__srv__IKService_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobiman_msgs__srv__IKService_Request__Sequence__are_equal(const mobiman_msgs__srv__IKService_Request__Sequence * lhs, const mobiman_msgs__srv__IKService_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobiman_msgs__srv__IKService_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobiman_msgs__srv__IKService_Request__Sequence__copy(
  const mobiman_msgs__srv__IKService_Request__Sequence * input,
  mobiman_msgs__srv__IKService_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobiman_msgs__srv__IKService_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobiman_msgs__srv__IKService_Request * data =
      (mobiman_msgs__srv__IKService_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobiman_msgs__srv__IKService_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobiman_msgs__srv__IKService_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobiman_msgs__srv__IKService_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `joint_states`
#include "sensor_msgs/msg/detail/joint_state__functions.h"

bool
mobiman_msgs__srv__IKService_Response__init(mobiman_msgs__srv__IKService_Response * msg)
{
  if (!msg) {
    return false;
  }
  // joint_states
  if (!sensor_msgs__msg__JointState__init(&msg->joint_states)) {
    mobiman_msgs__srv__IKService_Response__fini(msg);
    return false;
  }
  return true;
}

void
mobiman_msgs__srv__IKService_Response__fini(mobiman_msgs__srv__IKService_Response * msg)
{
  if (!msg) {
    return;
  }
  // joint_states
  sensor_msgs__msg__JointState__fini(&msg->joint_states);
}

bool
mobiman_msgs__srv__IKService_Response__are_equal(const mobiman_msgs__srv__IKService_Response * lhs, const mobiman_msgs__srv__IKService_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // joint_states
  if (!sensor_msgs__msg__JointState__are_equal(
      &(lhs->joint_states), &(rhs->joint_states)))
  {
    return false;
  }
  return true;
}

bool
mobiman_msgs__srv__IKService_Response__copy(
  const mobiman_msgs__srv__IKService_Response * input,
  mobiman_msgs__srv__IKService_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // joint_states
  if (!sensor_msgs__msg__JointState__copy(
      &(input->joint_states), &(output->joint_states)))
  {
    return false;
  }
  return true;
}

mobiman_msgs__srv__IKService_Response *
mobiman_msgs__srv__IKService_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__srv__IKService_Response * msg = (mobiman_msgs__srv__IKService_Response *)allocator.allocate(sizeof(mobiman_msgs__srv__IKService_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobiman_msgs__srv__IKService_Response));
  bool success = mobiman_msgs__srv__IKService_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobiman_msgs__srv__IKService_Response__destroy(mobiman_msgs__srv__IKService_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobiman_msgs__srv__IKService_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobiman_msgs__srv__IKService_Response__Sequence__init(mobiman_msgs__srv__IKService_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__srv__IKService_Response * data = NULL;

  if (size) {
    data = (mobiman_msgs__srv__IKService_Response *)allocator.zero_allocate(size, sizeof(mobiman_msgs__srv__IKService_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobiman_msgs__srv__IKService_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobiman_msgs__srv__IKService_Response__fini(&data[i - 1]);
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
mobiman_msgs__srv__IKService_Response__Sequence__fini(mobiman_msgs__srv__IKService_Response__Sequence * array)
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
      mobiman_msgs__srv__IKService_Response__fini(&array->data[i]);
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

mobiman_msgs__srv__IKService_Response__Sequence *
mobiman_msgs__srv__IKService_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__srv__IKService_Response__Sequence * array = (mobiman_msgs__srv__IKService_Response__Sequence *)allocator.allocate(sizeof(mobiman_msgs__srv__IKService_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobiman_msgs__srv__IKService_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobiman_msgs__srv__IKService_Response__Sequence__destroy(mobiman_msgs__srv__IKService_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobiman_msgs__srv__IKService_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobiman_msgs__srv__IKService_Response__Sequence__are_equal(const mobiman_msgs__srv__IKService_Response__Sequence * lhs, const mobiman_msgs__srv__IKService_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobiman_msgs__srv__IKService_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobiman_msgs__srv__IKService_Response__Sequence__copy(
  const mobiman_msgs__srv__IKService_Response__Sequence * input,
  mobiman_msgs__srv__IKService_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobiman_msgs__srv__IKService_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobiman_msgs__srv__IKService_Response * data =
      (mobiman_msgs__srv__IKService_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobiman_msgs__srv__IKService_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobiman_msgs__srv__IKService_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobiman_msgs__srv__IKService_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
