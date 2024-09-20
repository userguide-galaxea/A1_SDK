// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobiman_msgs:msg/ChassisCommand.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND__STRUCT_H_
#define MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'steer_angles'
// Member 'wheel_speed'
#include "rosidl_runtime_c/primitives_sequence.h"

/// Struct defined in msg/ChassisCommand in the package mobiman_msgs.
/**
  * for 4w4s vehicles, the order is [fl, fr, rl ,rr]
 */
typedef struct mobiman_msgs__msg__ChassisCommand
{
  rosidl_runtime_c__float__Sequence steer_angles;
  rosidl_runtime_c__float__Sequence wheel_speed;
} mobiman_msgs__msg__ChassisCommand;

// Struct for a sequence of mobiman_msgs__msg__ChassisCommand.
typedef struct mobiman_msgs__msg__ChassisCommand__Sequence
{
  mobiman_msgs__msg__ChassisCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__msg__ChassisCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__MSG__DETAIL__CHASSIS_COMMAND__STRUCT_H_
