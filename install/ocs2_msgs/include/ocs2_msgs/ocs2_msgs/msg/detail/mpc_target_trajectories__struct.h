// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ocs2_msgs:msg/MpcTargetTrajectories.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__STRUCT_H_
#define OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'time_trajectory'
#include "rosidl_runtime_c/primitives_sequence.h"
// Member 'state_trajectory'
#include "ocs2_msgs/msg/detail/mpc_state__struct.h"
// Member 'input_trajectory'
#include "ocs2_msgs/msg/detail/mpc_input__struct.h"

/// Struct defined in msg/MpcTargetTrajectories in the package ocs2_msgs.
/**
  * MPC target trajectories
 */
typedef struct ocs2_msgs__msg__MpcTargetTrajectories
{
  /// MPC target time trajectory
  rosidl_runtime_c__double__Sequence time_trajectory;
  /// MPC target state trajectory
  ocs2_msgs__msg__MpcState__Sequence state_trajectory;
  /// MPC target input trajectory
  ocs2_msgs__msg__MpcInput__Sequence input_trajectory;
} ocs2_msgs__msg__MpcTargetTrajectories;

// Struct for a sequence of ocs2_msgs__msg__MpcTargetTrajectories.
typedef struct ocs2_msgs__msg__MpcTargetTrajectories__Sequence
{
  ocs2_msgs__msg__MpcTargetTrajectories * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocs2_msgs__msg__MpcTargetTrajectories__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_TARGET_TRAJECTORIES__STRUCT_H_
