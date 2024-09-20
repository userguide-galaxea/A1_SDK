// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ocs2_msgs:msg/Constraint.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__CONSTRAINT__STRUCT_H_
#define OCS2_MSGS__MSG__DETAIL__CONSTRAINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'value'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Constraint in the package ocs2_msgs.
/**
  * MPC constraint
 */
typedef struct ocs2_msgs__msg__Constraint
{
  float time;
  rosidl_runtime_c__float__Sequence value;
} ocs2_msgs__msg__Constraint;

// Struct for a sequence of ocs2_msgs__msg__Constraint.
typedef struct ocs2_msgs__msg__Constraint__Sequence
{
  ocs2_msgs__msg__Constraint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocs2_msgs__msg__Constraint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__CONSTRAINT__STRUCT_H_
