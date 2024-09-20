// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobiman_msgs:msg/Panel3d.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__STRUCT_H_
#define MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'origin'
#include "geometry_msgs/msg/detail/point__struct.h"
// Member 'normal'
#include "geometry_msgs/msg/detail/vector3__struct.h"
// Member 'buttons_3d'
#include "mobiman_msgs/msg/detail/button3d__struct.h"

/// Struct defined in msg/Panel3d in the package mobiman_msgs.
typedef struct mobiman_msgs__msg__Panel3d
{
  geometry_msgs__msg__Point origin;
  geometry_msgs__msg__Vector3 normal;
  float length;
  float width;
  mobiman_msgs__msg__Button3d__Sequence buttons_3d;
} mobiman_msgs__msg__Panel3d;

// Struct for a sequence of mobiman_msgs__msg__Panel3d.
typedef struct mobiman_msgs__msg__Panel3d__Sequence
{
  mobiman_msgs__msg__Panel3d * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__msg__Panel3d__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__MSG__DETAIL__PANEL3D__STRUCT_H_
