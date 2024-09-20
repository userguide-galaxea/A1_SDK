// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from signal_arm_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'name'
#include "rosidl_runtime_c/string.h"
// Member 'motor_errors'
#include "signal_arm_msgs/msg/detail/motor_error__struct.h"

/// Struct defined in msg/Status in the package signal_arm_msgs.
typedef struct signal_arm_msgs__msg__Status
{
  rosidl_runtime_c__String__Sequence name;
  signal_arm_msgs__msg__MotorError__Sequence motor_errors;
} signal_arm_msgs__msg__Status;

// Struct for a sequence of signal_arm_msgs__msg__Status.
typedef struct signal_arm_msgs__msg__Status__Sequence
{
  signal_arm_msgs__msg__Status * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} signal_arm_msgs__msg__Status__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__STATUS__STRUCT_H_
