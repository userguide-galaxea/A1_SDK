// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ocs2_msgs:msg/ModeSchedule.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MODE_SCHEDULE__STRUCT_H_
#define OCS2_MSGS__MSG__DETAIL__MODE_SCHEDULE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'event_times'
// Member 'mode_sequence'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ModeSchedule in the package ocs2_msgs.
/**
  * MPC mode sequence
 */
typedef struct ocs2_msgs__msg__ModeSchedule
{
  /// event times: its size is equal to the size of phaseSequence minus one
  rosidl_runtime_c__double__Sequence event_times;
  /// mode sequence: e.g., for a quadrupedal robot, it is in the set {0, 1,..., 15}
  rosidl_runtime_c__int8__Sequence mode_sequence;
} ocs2_msgs__msg__ModeSchedule;

// Struct for a sequence of ocs2_msgs__msg__ModeSchedule.
typedef struct ocs2_msgs__msg__ModeSchedule__Sequence
{
  ocs2_msgs__msg__ModeSchedule * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocs2_msgs__msg__ModeSchedule__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__MODE_SCHEDULE__STRUCT_H_
