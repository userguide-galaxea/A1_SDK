// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ocs2_msgs:msg/MpcObservation.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__STRUCT_H_
#define OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'state'
#include "ocs2_msgs/msg/detail/mpc_state__struct.h"
// Member 'input'
#include "ocs2_msgs/msg/detail/mpc_input__struct.h"

/// Struct defined in msg/MpcObservation in the package ocs2_msgs.
/**
  * MPC observation
 */
typedef struct ocs2_msgs__msg__MpcObservation
{
  /// Current time
  double time;
  /// Current state
  ocs2_msgs__msg__MpcState state;
  /// Current input
  ocs2_msgs__msg__MpcInput input;
  /// Current mode
  int8_t mode;
} ocs2_msgs__msg__MpcObservation;

// Struct for a sequence of ocs2_msgs__msg__MpcObservation.
typedef struct ocs2_msgs__msg__MpcObservation__Sequence
{
  ocs2_msgs__msg__MpcObservation * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocs2_msgs__msg__MpcObservation__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_OBSERVATION__STRUCT_H_
