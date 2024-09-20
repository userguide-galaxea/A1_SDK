// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ocs2_msgs:srv/Reset.idl
// generated code does not contain a copyright notice
#include "ocs2_msgs/srv/detail/reset__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

// Include directives for member types
// Member `target_trajectories`
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__functions.h"

bool
ocs2_msgs__srv__Reset_Request__init(ocs2_msgs__srv__Reset_Request * msg)
{
  if (!msg) {
    return false;
  }
  // reset
  // target_trajectories
  if (!ocs2_msgs__msg__MpcTargetTrajectories__init(&msg->target_trajectories)) {
    ocs2_msgs__srv__Reset_Request__fini(msg);
    return false;
  }
  return true;
}

void
ocs2_msgs__srv__Reset_Request__fini(ocs2_msgs__srv__Reset_Request * msg)
{
  if (!msg) {
    return;
  }
  // reset
  // target_trajectories
  ocs2_msgs__msg__MpcTargetTrajectories__fini(&msg->target_trajectories);
}

bool
ocs2_msgs__srv__Reset_Request__are_equal(const ocs2_msgs__srv__Reset_Request * lhs, const ocs2_msgs__srv__Reset_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // reset
  if (lhs->reset != rhs->reset) {
    return false;
  }
  // target_trajectories
  if (!ocs2_msgs__msg__MpcTargetTrajectories__are_equal(
      &(lhs->target_trajectories), &(rhs->target_trajectories)))
  {
    return false;
  }
  return true;
}

bool
ocs2_msgs__srv__Reset_Request__copy(
  const ocs2_msgs__srv__Reset_Request * input,
  ocs2_msgs__srv__Reset_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // reset
  output->reset = input->reset;
  // target_trajectories
  if (!ocs2_msgs__msg__MpcTargetTrajectories__copy(
      &(input->target_trajectories), &(output->target_trajectories)))
  {
    return false;
  }
  return true;
}

ocs2_msgs__srv__Reset_Request *
ocs2_msgs__srv__Reset_Request__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__srv__Reset_Request * msg = (ocs2_msgs__srv__Reset_Request *)allocator.allocate(sizeof(ocs2_msgs__srv__Reset_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocs2_msgs__srv__Reset_Request));
  bool success = ocs2_msgs__srv__Reset_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocs2_msgs__srv__Reset_Request__destroy(ocs2_msgs__srv__Reset_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocs2_msgs__srv__Reset_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocs2_msgs__srv__Reset_Request__Sequence__init(ocs2_msgs__srv__Reset_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__srv__Reset_Request * data = NULL;

  if (size) {
    data = (ocs2_msgs__srv__Reset_Request *)allocator.zero_allocate(size, sizeof(ocs2_msgs__srv__Reset_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocs2_msgs__srv__Reset_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocs2_msgs__srv__Reset_Request__fini(&data[i - 1]);
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
ocs2_msgs__srv__Reset_Request__Sequence__fini(ocs2_msgs__srv__Reset_Request__Sequence * array)
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
      ocs2_msgs__srv__Reset_Request__fini(&array->data[i]);
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

ocs2_msgs__srv__Reset_Request__Sequence *
ocs2_msgs__srv__Reset_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__srv__Reset_Request__Sequence * array = (ocs2_msgs__srv__Reset_Request__Sequence *)allocator.allocate(sizeof(ocs2_msgs__srv__Reset_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocs2_msgs__srv__Reset_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocs2_msgs__srv__Reset_Request__Sequence__destroy(ocs2_msgs__srv__Reset_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocs2_msgs__srv__Reset_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocs2_msgs__srv__Reset_Request__Sequence__are_equal(const ocs2_msgs__srv__Reset_Request__Sequence * lhs, const ocs2_msgs__srv__Reset_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocs2_msgs__srv__Reset_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocs2_msgs__srv__Reset_Request__Sequence__copy(
  const ocs2_msgs__srv__Reset_Request__Sequence * input,
  ocs2_msgs__srv__Reset_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocs2_msgs__srv__Reset_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocs2_msgs__srv__Reset_Request * data =
      (ocs2_msgs__srv__Reset_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocs2_msgs__srv__Reset_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocs2_msgs__srv__Reset_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocs2_msgs__srv__Reset_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
ocs2_msgs__srv__Reset_Response__init(ocs2_msgs__srv__Reset_Response * msg)
{
  if (!msg) {
    return false;
  }
  // done
  return true;
}

void
ocs2_msgs__srv__Reset_Response__fini(ocs2_msgs__srv__Reset_Response * msg)
{
  if (!msg) {
    return;
  }
  // done
}

bool
ocs2_msgs__srv__Reset_Response__are_equal(const ocs2_msgs__srv__Reset_Response * lhs, const ocs2_msgs__srv__Reset_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // done
  if (lhs->done != rhs->done) {
    return false;
  }
  return true;
}

bool
ocs2_msgs__srv__Reset_Response__copy(
  const ocs2_msgs__srv__Reset_Response * input,
  ocs2_msgs__srv__Reset_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // done
  output->done = input->done;
  return true;
}

ocs2_msgs__srv__Reset_Response *
ocs2_msgs__srv__Reset_Response__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__srv__Reset_Response * msg = (ocs2_msgs__srv__Reset_Response *)allocator.allocate(sizeof(ocs2_msgs__srv__Reset_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocs2_msgs__srv__Reset_Response));
  bool success = ocs2_msgs__srv__Reset_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocs2_msgs__srv__Reset_Response__destroy(ocs2_msgs__srv__Reset_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocs2_msgs__srv__Reset_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocs2_msgs__srv__Reset_Response__Sequence__init(ocs2_msgs__srv__Reset_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__srv__Reset_Response * data = NULL;

  if (size) {
    data = (ocs2_msgs__srv__Reset_Response *)allocator.zero_allocate(size, sizeof(ocs2_msgs__srv__Reset_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocs2_msgs__srv__Reset_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocs2_msgs__srv__Reset_Response__fini(&data[i - 1]);
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
ocs2_msgs__srv__Reset_Response__Sequence__fini(ocs2_msgs__srv__Reset_Response__Sequence * array)
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
      ocs2_msgs__srv__Reset_Response__fini(&array->data[i]);
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

ocs2_msgs__srv__Reset_Response__Sequence *
ocs2_msgs__srv__Reset_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__srv__Reset_Response__Sequence * array = (ocs2_msgs__srv__Reset_Response__Sequence *)allocator.allocate(sizeof(ocs2_msgs__srv__Reset_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocs2_msgs__srv__Reset_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocs2_msgs__srv__Reset_Response__Sequence__destroy(ocs2_msgs__srv__Reset_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocs2_msgs__srv__Reset_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocs2_msgs__srv__Reset_Response__Sequence__are_equal(const ocs2_msgs__srv__Reset_Response__Sequence * lhs, const ocs2_msgs__srv__Reset_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocs2_msgs__srv__Reset_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocs2_msgs__srv__Reset_Response__Sequence__copy(
  const ocs2_msgs__srv__Reset_Response__Sequence * input,
  ocs2_msgs__srv__Reset_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocs2_msgs__srv__Reset_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocs2_msgs__srv__Reset_Response * data =
      (ocs2_msgs__srv__Reset_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocs2_msgs__srv__Reset_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocs2_msgs__srv__Reset_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocs2_msgs__srv__Reset_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
