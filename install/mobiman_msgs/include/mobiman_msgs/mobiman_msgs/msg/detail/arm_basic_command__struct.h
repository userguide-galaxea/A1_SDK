// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobiman_msgs:msg/ArmBasicCommand.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__STRUCT_H_
#define MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__STRUCT_H_

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
// Member 'jpos'
#include "mobiman_msgs/msg/detail/joint_position__struct.h"
// Member 'jspeed'
#include "mobiman_msgs/msg/detail/joint_speed__struct.h"

/// Struct defined in msg/ArmBasicCommand in the package mobiman_msgs.
typedef struct mobiman_msgs__msg__ArmBasicCommand
{
  std_msgs__msg__Header header;
  mobiman_msgs__msg__JointPosition jpos;
  mobiman_msgs__msg__JointSpeed jspeed;
} mobiman_msgs__msg__ArmBasicCommand;

// Struct for a sequence of mobiman_msgs__msg__ArmBasicCommand.
typedef struct mobiman_msgs__msg__ArmBasicCommand__Sequence
{
  mobiman_msgs__msg__ArmBasicCommand * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__msg__ArmBasicCommand__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__MSG__DETAIL__ARM_BASIC_COMMAND__STRUCT_H_
