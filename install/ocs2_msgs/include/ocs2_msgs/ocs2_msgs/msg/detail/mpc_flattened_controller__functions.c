// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ocs2_msgs:msg/MpcFlattenedController.idl
// generated code does not contain a copyright notice
#include "ocs2_msgs/msg/detail/mpc_flattened_controller__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `init_observation`
#include "ocs2_msgs/msg/detail/mpc_observation__functions.h"
// Member `plan_target_trajectories`
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__functions.h"
// Member `state_trajectory`
#include "ocs2_msgs/msg/detail/mpc_state__functions.h"
// Member `input_trajectory`
#include "ocs2_msgs/msg/detail/mpc_input__functions.h"
// Member `time_trajectory`
// Member `post_event_indices`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `mode_schedule`
#include "ocs2_msgs/msg/detail/mode_schedule__functions.h"
// Member `data`
#include "ocs2_msgs/msg/detail/controller_data__functions.h"
// Member `performance_indices`
#include "ocs2_msgs/msg/detail/mpc_performance_indices__functions.h"

bool
ocs2_msgs__msg__MpcFlattenedController__init(ocs2_msgs__msg__MpcFlattenedController * msg)
{
  if (!msg) {
    return false;
  }
  // controller_type
  // init_observation
  if (!ocs2_msgs__msg__MpcObservation__init(&msg->init_observation)) {
    ocs2_msgs__msg__MpcFlattenedController__fini(msg);
    return false;
  }
  // plan_target_trajectories
  if (!ocs2_msgs__msg__MpcTargetTrajectories__init(&msg->plan_target_trajectories)) {
    ocs2_msgs__msg__MpcFlattenedController__fini(msg);
    return false;
  }
  // state_trajectory
  if (!ocs2_msgs__msg__MpcState__Sequence__init(&msg->state_trajectory, 0)) {
    ocs2_msgs__msg__MpcFlattenedController__fini(msg);
    return false;
  }
  // input_trajectory
  if (!ocs2_msgs__msg__MpcInput__Sequence__init(&msg->input_trajectory, 0)) {
    ocs2_msgs__msg__MpcFlattenedController__fini(msg);
    return false;
  }
  // time_trajectory
  if (!rosidl_runtime_c__double__Sequence__init(&msg->time_trajectory, 0)) {
    ocs2_msgs__msg__MpcFlattenedController__fini(msg);
    return false;
  }
  // post_event_indices
  if (!rosidl_runtime_c__uint16__Sequence__init(&msg->post_event_indices, 0)) {
    ocs2_msgs__msg__MpcFlattenedController__fini(msg);
    return false;
  }
  // mode_schedule
  if (!ocs2_msgs__msg__ModeSchedule__init(&msg->mode_schedule)) {
    ocs2_msgs__msg__MpcFlattenedController__fini(msg);
    return false;
  }
  // data
  if (!ocs2_msgs__msg__ControllerData__Sequence__init(&msg->data, 0)) {
    ocs2_msgs__msg__MpcFlattenedController__fini(msg);
    return false;
  }
  // performance_indices
  if (!ocs2_msgs__msg__MpcPerformanceIndices__init(&msg->performance_indices)) {
    ocs2_msgs__msg__MpcFlattenedController__fini(msg);
    return false;
  }
  return true;
}

void
ocs2_msgs__msg__MpcFlattenedController__fini(ocs2_msgs__msg__MpcFlattenedController * msg)
{
  if (!msg) {
    return;
  }
  // controller_type
  // init_observation
  ocs2_msgs__msg__MpcObservation__fini(&msg->init_observation);
  // plan_target_trajectories
  ocs2_msgs__msg__MpcTargetTrajectories__fini(&msg->plan_target_trajectories);
  // state_trajectory
  ocs2_msgs__msg__MpcState__Sequence__fini(&msg->state_trajectory);
  // input_trajectory
  ocs2_msgs__msg__MpcInput__Sequence__fini(&msg->input_trajectory);
  // time_trajectory
  rosidl_runtime_c__double__Sequence__fini(&msg->time_trajectory);
  // post_event_indices
  rosidl_runtime_c__uint16__Sequence__fini(&msg->post_event_indices);
  // mode_schedule
  ocs2_msgs__msg__ModeSchedule__fini(&msg->mode_schedule);
  // data
  ocs2_msgs__msg__ControllerData__Sequence__fini(&msg->data);
  // performance_indices
  ocs2_msgs__msg__MpcPerformanceIndices__fini(&msg->performance_indices);
}

bool
ocs2_msgs__msg__MpcFlattenedController__are_equal(const ocs2_msgs__msg__MpcFlattenedController * lhs, const ocs2_msgs__msg__MpcFlattenedController * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // controller_type
  if (lhs->controller_type != rhs->controller_type) {
    return false;
  }
  // init_observation
  if (!ocs2_msgs__msg__MpcObservation__are_equal(
      &(lhs->init_observation), &(rhs->init_observation)))
  {
    return false;
  }
  // plan_target_trajectories
  if (!ocs2_msgs__msg__MpcTargetTrajectories__are_equal(
      &(lhs->plan_target_trajectories), &(rhs->plan_target_trajectories)))
  {
    return false;
  }
  // state_trajectory
  if (!ocs2_msgs__msg__MpcState__Sequence__are_equal(
      &(lhs->state_trajectory), &(rhs->state_trajectory)))
  {
    return false;
  }
  // input_trajectory
  if (!ocs2_msgs__msg__MpcInput__Sequence__are_equal(
      &(lhs->input_trajectory), &(rhs->input_trajectory)))
  {
    return false;
  }
  // time_trajectory
  if (!rosidl_runtime_c__double__Sequence__are_equal(
      &(lhs->time_trajectory), &(rhs->time_trajectory)))
  {
    return false;
  }
  // post_event_indices
  if (!rosidl_runtime_c__uint16__Sequence__are_equal(
      &(lhs->post_event_indices), &(rhs->post_event_indices)))
  {
    return false;
  }
  // mode_schedule
  if (!ocs2_msgs__msg__ModeSchedule__are_equal(
      &(lhs->mode_schedule), &(rhs->mode_schedule)))
  {
    return false;
  }
  // data
  if (!ocs2_msgs__msg__ControllerData__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // performance_indices
  if (!ocs2_msgs__msg__MpcPerformanceIndices__are_equal(
      &(lhs->performance_indices), &(rhs->performance_indices)))
  {
    return false;
  }
  return true;
}

bool
ocs2_msgs__msg__MpcFlattenedController__copy(
  const ocs2_msgs__msg__MpcFlattenedController * input,
  ocs2_msgs__msg__MpcFlattenedController * output)
{
  if (!input || !output) {
    return false;
  }
  // controller_type
  output->controller_type = input->controller_type;
  // init_observation
  if (!ocs2_msgs__msg__MpcObservation__copy(
      &(input->init_observation), &(output->init_observation)))
  {
    return false;
  }
  // plan_target_trajectories
  if (!ocs2_msgs__msg__MpcTargetTrajectories__copy(
      &(input->plan_target_trajectories), &(output->plan_target_trajectories)))
  {
    return false;
  }
  // state_trajectory
  if (!ocs2_msgs__msg__MpcState__Sequence__copy(
      &(input->state_trajectory), &(output->state_trajectory)))
  {
    return false;
  }
  // input_trajectory
  if (!ocs2_msgs__msg__MpcInput__Sequence__copy(
      &(input->input_trajectory), &(output->input_trajectory)))
  {
    return false;
  }
  // time_trajectory
  if (!rosidl_runtime_c__double__Sequence__copy(
      &(input->time_trajectory), &(output->time_trajectory)))
  {
    return false;
  }
  // post_event_indices
  if (!rosidl_runtime_c__uint16__Sequence__copy(
      &(input->post_event_indices), &(output->post_event_indices)))
  {
    return false;
  }
  // mode_schedule
  if (!ocs2_msgs__msg__ModeSchedule__copy(
      &(input->mode_schedule), &(output->mode_schedule)))
  {
    return false;
  }
  // data
  if (!ocs2_msgs__msg__ControllerData__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // performance_indices
  if (!ocs2_msgs__msg__MpcPerformanceIndices__copy(
      &(input->performance_indices), &(output->performance_indices)))
  {
    return false;
  }
  return true;
}

ocs2_msgs__msg__MpcFlattenedController *
ocs2_msgs__msg__MpcFlattenedController__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcFlattenedController * msg = (ocs2_msgs__msg__MpcFlattenedController *)allocator.allocate(sizeof(ocs2_msgs__msg__MpcFlattenedController), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ocs2_msgs__msg__MpcFlattenedController));
  bool success = ocs2_msgs__msg__MpcFlattenedController__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
ocs2_msgs__msg__MpcFlattenedController__destroy(ocs2_msgs__msg__MpcFlattenedController * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    ocs2_msgs__msg__MpcFlattenedController__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
ocs2_msgs__msg__MpcFlattenedController__Sequence__init(ocs2_msgs__msg__MpcFlattenedController__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcFlattenedController * data = NULL;

  if (size) {
    data = (ocs2_msgs__msg__MpcFlattenedController *)allocator.zero_allocate(size, sizeof(ocs2_msgs__msg__MpcFlattenedController), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ocs2_msgs__msg__MpcFlattenedController__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ocs2_msgs__msg__MpcFlattenedController__fini(&data[i - 1]);
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
ocs2_msgs__msg__MpcFlattenedController__Sequence__fini(ocs2_msgs__msg__MpcFlattenedController__Sequence * array)
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
      ocs2_msgs__msg__MpcFlattenedController__fini(&array->data[i]);
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

ocs2_msgs__msg__MpcFlattenedController__Sequence *
ocs2_msgs__msg__MpcFlattenedController__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  ocs2_msgs__msg__MpcFlattenedController__Sequence * array = (ocs2_msgs__msg__MpcFlattenedController__Sequence *)allocator.allocate(sizeof(ocs2_msgs__msg__MpcFlattenedController__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = ocs2_msgs__msg__MpcFlattenedController__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
ocs2_msgs__msg__MpcFlattenedController__Sequence__destroy(ocs2_msgs__msg__MpcFlattenedController__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    ocs2_msgs__msg__MpcFlattenedController__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
ocs2_msgs__msg__MpcFlattenedController__Sequence__are_equal(const ocs2_msgs__msg__MpcFlattenedController__Sequence * lhs, const ocs2_msgs__msg__MpcFlattenedController__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ocs2_msgs__msg__MpcFlattenedController__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ocs2_msgs__msg__MpcFlattenedController__Sequence__copy(
  const ocs2_msgs__msg__MpcFlattenedController__Sequence * input,
  ocs2_msgs__msg__MpcFlattenedController__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ocs2_msgs__msg__MpcFlattenedController);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    ocs2_msgs__msg__MpcFlattenedController * data =
      (ocs2_msgs__msg__MpcFlattenedController *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ocs2_msgs__msg__MpcFlattenedController__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          ocs2_msgs__msg__MpcFlattenedController__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ocs2_msgs__msg__MpcFlattenedController__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
