// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from signal_arm_msgs:msg/ArmControl.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__ARM_CONTROL__STRUCT_H_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__ARM_CONTROL__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.h"
// Member 'p_des'
// Member 'v_des'
// Member 'kp'
// Member 'kd'
// Member 't_ff'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ArmControl in the package signal_arm_msgs.
typedef struct signal_arm_msgs__msg__ArmControl
{
  std_msgs__msg__Header header;
  rosidl_runtime_c__float__Sequence p_des;
  rosidl_runtime_c__float__Sequence v_des;
  rosidl_runtime_c__float__Sequence kp;
  rosidl_runtime_c__float__Sequence kd;
  rosidl_runtime_c__float__Sequence t_ff;
  uint8_t mode;
} signal_arm_msgs__msg__ArmControl;

// Struct for a sequence of signal_arm_msgs__msg__ArmControl.
typedef struct signal_arm_msgs__msg__ArmControl__Sequence
{
  signal_arm_msgs__msg__ArmControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} signal_arm_msgs__msg__ArmControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__ARM_CONTROL__STRUCT_H_
