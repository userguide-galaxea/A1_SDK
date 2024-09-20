// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobiman_msgs:msg/JointSpeedStamped.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED_STAMPED__STRUCT_H_
#define MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED_STAMPED__STRUCT_H_

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
// Member 'speed'
#include "mobiman_msgs/msg/detail/joint_speed__struct.h"

/// Struct defined in msg/JointSpeedStamped in the package mobiman_msgs.
typedef struct mobiman_msgs__msg__JointSpeedStamped
{
  std_msgs__msg__Header header;
  mobiman_msgs__msg__JointSpeed speed;
} mobiman_msgs__msg__JointSpeedStamped;

// Struct for a sequence of mobiman_msgs__msg__JointSpeedStamped.
typedef struct mobiman_msgs__msg__JointSpeedStamped__Sequence
{
  mobiman_msgs__msg__JointSpeedStamped * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__msg__JointSpeedStamped__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__MSG__DETAIL__JOINT_SPEED_STAMPED__STRUCT_H_
