// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from signal_arm_msgs:msg/GripperPositionControl.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_POSITION_CONTROL__STRUCT_H_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_POSITION_CONTROL__STRUCT_H_

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

/// Struct defined in msg/GripperPositionControl in the package signal_arm_msgs.
typedef struct signal_arm_msgs__msg__GripperPositionControl
{
  std_msgs__msg__Header header;
  float gripper_stroke;
} signal_arm_msgs__msg__GripperPositionControl;

// Struct for a sequence of signal_arm_msgs__msg__GripperPositionControl.
typedef struct signal_arm_msgs__msg__GripperPositionControl__Sequence
{
  signal_arm_msgs__msg__GripperPositionControl * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} signal_arm_msgs__msg__GripperPositionControl__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__GRIPPER_POSITION_CONTROL__STRUCT_H_
