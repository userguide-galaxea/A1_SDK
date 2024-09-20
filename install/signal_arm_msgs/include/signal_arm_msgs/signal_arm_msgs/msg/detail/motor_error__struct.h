// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from signal_arm_msgs:msg/MotorError.idl
// generated code does not contain a copyright notice

#ifndef SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__STRUCT_H_
#define SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'error_description'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/MotorError in the package signal_arm_msgs.
typedef struct signal_arm_msgs__msg__MotorError
{
  uint32_t error_code;
  rosidl_runtime_c__String__Sequence error_description;
} signal_arm_msgs__msg__MotorError;

// Struct for a sequence of signal_arm_msgs__msg__MotorError.
typedef struct signal_arm_msgs__msg__MotorError__Sequence
{
  signal_arm_msgs__msg__MotorError * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} signal_arm_msgs__msg__MotorError__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // SIGNAL_ARM_MSGS__MSG__DETAIL__MOTOR_ERROR__STRUCT_H_
