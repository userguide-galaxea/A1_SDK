// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from mobiman_msgs:msg/CameraDetection.idl
// generated code does not contain a copyright notice
#include "mobiman_msgs/msg/detail/camera_detection__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/detail/header__functions.h"
// Member `source_img`
#include "sensor_msgs/msg/detail/image__functions.h"
// Member `mask`
#include "mobiman_msgs/msg/detail/mask__functions.h"

bool
mobiman_msgs__msg__CameraDetection__init(mobiman_msgs__msg__CameraDetection * msg)
{
  if (!msg) {
    return false;
  }
  // header
  if (!std_msgs__msg__Header__init(&msg->header)) {
    mobiman_msgs__msg__CameraDetection__fini(msg);
    return false;
  }
  // source_img
  if (!sensor_msgs__msg__Image__init(&msg->source_img)) {
    mobiman_msgs__msg__CameraDetection__fini(msg);
    return false;
  }
  // mask
  if (!mobiman_msgs__msg__Mask__init(&msg->mask)) {
    mobiman_msgs__msg__CameraDetection__fini(msg);
    return false;
  }
  return true;
}

void
mobiman_msgs__msg__CameraDetection__fini(mobiman_msgs__msg__CameraDetection * msg)
{
  if (!msg) {
    return;
  }
  // header
  std_msgs__msg__Header__fini(&msg->header);
  // source_img
  sensor_msgs__msg__Image__fini(&msg->source_img);
  // mask
  mobiman_msgs__msg__Mask__fini(&msg->mask);
}

bool
mobiman_msgs__msg__CameraDetection__are_equal(const mobiman_msgs__msg__CameraDetection * lhs, const mobiman_msgs__msg__CameraDetection * rhs)
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
  // source_img
  if (!sensor_msgs__msg__Image__are_equal(
      &(lhs->source_img), &(rhs->source_img)))
  {
    return false;
  }
  // mask
  if (!mobiman_msgs__msg__Mask__are_equal(
      &(lhs->mask), &(rhs->mask)))
  {
    return false;
  }
  return true;
}

bool
mobiman_msgs__msg__CameraDetection__copy(
  const mobiman_msgs__msg__CameraDetection * input,
  mobiman_msgs__msg__CameraDetection * output)
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
  // source_img
  if (!sensor_msgs__msg__Image__copy(
      &(input->source_img), &(output->source_img)))
  {
    return false;
  }
  // mask
  if (!mobiman_msgs__msg__Mask__copy(
      &(input->mask), &(output->mask)))
  {
    return false;
  }
  return true;
}

mobiman_msgs__msg__CameraDetection *
mobiman_msgs__msg__CameraDetection__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__CameraDetection * msg = (mobiman_msgs__msg__CameraDetection *)allocator.allocate(sizeof(mobiman_msgs__msg__CameraDetection), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(mobiman_msgs__msg__CameraDetection));
  bool success = mobiman_msgs__msg__CameraDetection__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
mobiman_msgs__msg__CameraDetection__destroy(mobiman_msgs__msg__CameraDetection * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    mobiman_msgs__msg__CameraDetection__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
mobiman_msgs__msg__CameraDetection__Sequence__init(mobiman_msgs__msg__CameraDetection__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__CameraDetection * data = NULL;

  if (size) {
    data = (mobiman_msgs__msg__CameraDetection *)allocator.zero_allocate(size, sizeof(mobiman_msgs__msg__CameraDetection), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = mobiman_msgs__msg__CameraDetection__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        mobiman_msgs__msg__CameraDetection__fini(&data[i - 1]);
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
mobiman_msgs__msg__CameraDetection__Sequence__fini(mobiman_msgs__msg__CameraDetection__Sequence * array)
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
      mobiman_msgs__msg__CameraDetection__fini(&array->data[i]);
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

mobiman_msgs__msg__CameraDetection__Sequence *
mobiman_msgs__msg__CameraDetection__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  mobiman_msgs__msg__CameraDetection__Sequence * array = (mobiman_msgs__msg__CameraDetection__Sequence *)allocator.allocate(sizeof(mobiman_msgs__msg__CameraDetection__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = mobiman_msgs__msg__CameraDetection__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
mobiman_msgs__msg__CameraDetection__Sequence__destroy(mobiman_msgs__msg__CameraDetection__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    mobiman_msgs__msg__CameraDetection__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
mobiman_msgs__msg__CameraDetection__Sequence__are_equal(const mobiman_msgs__msg__CameraDetection__Sequence * lhs, const mobiman_msgs__msg__CameraDetection__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!mobiman_msgs__msg__CameraDetection__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
mobiman_msgs__msg__CameraDetection__Sequence__copy(
  const mobiman_msgs__msg__CameraDetection__Sequence * input,
  mobiman_msgs__msg__CameraDetection__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(mobiman_msgs__msg__CameraDetection);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    mobiman_msgs__msg__CameraDetection * data =
      (mobiman_msgs__msg__CameraDetection *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!mobiman_msgs__msg__CameraDetection__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          mobiman_msgs__msg__CameraDetection__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!mobiman_msgs__msg__CameraDetection__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
