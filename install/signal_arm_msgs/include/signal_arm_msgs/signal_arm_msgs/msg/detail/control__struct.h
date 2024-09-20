// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from signal_arm_msgs:msg/Control.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'p_des'
// Member 'v_des'
// Member 'kp'
// Member 'kd'
// Member 't_ff'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/Control in the package signal_arm_msgs.
typedef struct signal_arm_msgs__msg__Control
{
  rosidl_runtime_c__float__Sequence p_des;
  rosidl_runtime_c__float__Sequence v_des;
  rosidl_runtime_c__float__Sequence kp;
  rosidl_runtime_c__float__Sequence kd;
  rosidl_runtime_c__float__Sequence t_ff;
} signal_arm_msgs__msg__Control;

// Struct for a sequence of signal_arm_msgs__msg__Control.
typedef struct signal_arm_msgs__msg__Control__Sequence
{
  signal_arm_msgs__msg__Control * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} signal_arm_msgs__msg__Control__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__CONTROL__STRUCT_H_
