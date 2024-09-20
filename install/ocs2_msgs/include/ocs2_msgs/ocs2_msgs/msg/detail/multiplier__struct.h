// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ocs2_msgs:msg/Multiplier.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MULTIPLIER__STRUCT_H_
#define OCS2_MSGS__MSG__DETAIL__MULTIPLIER__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'lagrangian'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Multiplier in the package ocs2_msgs.
/**
  * MPC multiplier
 */
typedef struct ocs2_msgs__msg__Multiplier
{
  float time;
  float penalty;
  rosidl_runtime_c__float__Sequence lagrangian;
} ocs2_msgs__msg__Multiplier;

// Struct for a sequence of ocs2_msgs__msg__Multiplier.
typedef struct ocs2_msgs__msg__Multiplier__Sequence
{
  ocs2_msgs__msg__Multiplier * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocs2_msgs__msg__Multiplier__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__MULTIPLIER__STRUCT_H_
