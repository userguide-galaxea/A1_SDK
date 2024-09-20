// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ocs2_msgs:msg/MpcFlattenedController.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__STRUCT_H_
#define OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'CONTROLLER_UNKNOWN'.
/**
  * define controllerType Enum values
  * safety mechanism: message initalization to zero
 */
enum
{
  ocs2_msgs__msg__MpcFlattenedController__CONTROLLER_UNKNOWN = 0
};

/// Constant 'CONTROLLER_FEEDFORWARD'.
enum
{
  ocs2_msgs__msg__MpcFlattenedController__CONTROLLER_FEEDFORWARD = 1
};

/// Constant 'CONTROLLER_LINEAR'.
enum
{
  ocs2_msgs__msg__MpcFlattenedController__CONTROLLER_LINEAR = 2
};

// Include directives for member types
// Member 'init_observation'
#include "ocs2_msgs/msg/detail/mpc_observation__struct.h"
// Member 'plan_target_trajectories'
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__struct.h"
// Member 'state_trajectory'
#include "ocs2_msgs/msg/detail/mpc_state__struct.h"
// Member 'input_trajectory'
#include "ocs2_msgs/msg/detail/mpc_input__struct.h"
// Member 'time_trajectory'
// Member 'post_event_indices'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'mode_schedule'
#include "ocs2_msgs/msg/detail/mode_schedule__struct.h"
// Member 'data'
#include "ocs2_msgs/msg/detail/controller_data__struct.h"
// Member 'performance_indices'
#include "ocs2_msgs/msg/detail/mpc_performance_indices__struct.h"

/// Struct defined in msg/MpcFlattenedController in the package ocs2_msgs.
/**
  * Flattened controller: A serialized controller
 */
typedef struct ocs2_msgs__msg__MpcFlattenedController
{
  /// what type of controller is this
  uint8_t controller_type;
  /// plan initial observation
  ocs2_msgs__msg__MpcObservation init_observation;
  /// target trajectory in cost function
  ocs2_msgs__msg__MpcTargetTrajectories plan_target_trajectories;
  /// optimized state trajectory from planner
  ocs2_msgs__msg__MpcState__Sequence state_trajectory;
  /// optimized input trajectory from planner
  ocs2_msgs__msg__MpcInput__Sequence input_trajectory;
  /// time trajectory for stateTrajectory and inputTrajectory
  rosidl_runtime_c__double__Sequence time_trajectory;
  /// array of indices indicating the index of post-event time in the trajectories
  rosidl_runtime_c__uint16__Sequence post_event_indices;
  /// optimal/predefined MPC mode sequence and event times
  ocs2_msgs__msg__ModeSchedule mode_schedule;
  /// the actual payload from flatten method: one vector of data per time step
  ocs2_msgs__msg__ControllerData__Sequence data;
  /// solver performance indices
  ocs2_msgs__msg__MpcPerformanceIndices performance_indices;
} ocs2_msgs__msg__MpcFlattenedController;

// Struct for a sequence of ocs2_msgs__msg__MpcFlattenedController.
typedef struct ocs2_msgs__msg__MpcFlattenedController__Sequence
{
  ocs2_msgs__msg__MpcFlattenedController * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocs2_msgs__msg__MpcFlattenedController__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_FLATTENED_CONTROLLER__STRUCT_H_
