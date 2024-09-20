// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobiman_msgs:msg/Button3d.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__BUTTON3D__STRUCT_H_
#define MOBIMAN_MSGS__MSG__DETAIL__BUTTON3D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"
// Member 'button_semantics'
#include "mobiman_msgs/msg/detail/button_semantics__struct.h"

/// Struct defined in msg/Button3d in the package mobiman_msgs.
typedef struct mobiman_msgs__msg__Button3d
{
  geometry_msgs__msg__Pose pose;
  mobiman_msgs__msg__ButtonSemantics button_semantics;
} mobiman_msgs__msg__Button3d;

// Struct for a sequence of mobiman_msgs__msg__Button3d.
typedef struct mobiman_msgs__msg__Button3d__Sequence
{
  mobiman_msgs__msg__Button3d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__msg__Button3d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__MSG__DETAIL__BUTTON3D__STRUCT_H_
