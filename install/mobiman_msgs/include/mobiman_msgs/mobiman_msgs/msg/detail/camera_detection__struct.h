// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobiman_msgs:msg/CameraDetection.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__STRUCT_H_
#define MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__STRUCT_H_

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
// Member 'source_img'
#include "sensor_msgs/msg/detail/image__struct.h"
// Member 'mask'
#include "mobiman_msgs/msg/detail/mask__struct.h"

/// Struct defined in msg/CameraDetection in the package mobiman_msgs.
typedef struct mobiman_msgs__msg__CameraDetection
{
  std_msgs__msg__Header header;
  sensor_msgs__msg__Image source_img;
  mobiman_msgs__msg__Mask mask;
} mobiman_msgs__msg__CameraDetection;

// Struct for a sequence of mobiman_msgs__msg__CameraDetection.
typedef struct mobiman_msgs__msg__CameraDetection__Sequence
{
  mobiman_msgs__msg__CameraDetection * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__msg__CameraDetection__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__MSG__DETAIL__CAMERA_DETECTION__STRUCT_H_
