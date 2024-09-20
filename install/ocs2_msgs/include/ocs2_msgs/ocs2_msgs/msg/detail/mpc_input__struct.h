// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ocs2_msgs:msg/MpcInput.idl
// generated code does not contain a copyright notice

#ifndef OCS2_MSGS__MSG__DETAIL__MPC_INPUT__STRUCT_H_
#define OCS2_MSGS__MSG__DETAIL__MPC_INPUT__STRUCT_H_

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

/// Struct defined in msg/MpcInput in the package ocs2_msgs.
/**
  * MPC internal model input vector 
 */
typedef struct ocs2_msgs__msg__MpcInput
{
  rosidl_runtime_c__float__Sequence value;
} ocs2_msgs__msg__MpcInput;

// Struct for a sequence of ocs2_msgs__msg__MpcInput.
typedef struct ocs2_msgs__msg__MpcInput__Sequence
{
  ocs2_msgs__msg__MpcInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ocs2_msgs__msg__MpcInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // OCS2_MSGS__MSG__DETAIL__MPC_INPUT__STRUCT_H_
