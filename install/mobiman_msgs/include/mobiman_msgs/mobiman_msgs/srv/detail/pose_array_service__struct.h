// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from mobiman_msgs:srv/PoseArrayService.idl
// generated code does not contain a copyright notice

#ifndef MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__STRUCT_H_
#define MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'poses'
#include "geometry_msgs/msg/detail/pose_array__struct.h"

/// Struct defined in srv/PoseArrayService in the package mobiman_msgs.
typedef struct mobiman_msgs__srv__PoseArrayService_Request
{
  geometry_msgs__msg__PoseArray poses;
} mobiman_msgs__srv__PoseArrayService_Request;

// Struct for a sequence of mobiman_msgs__srv__PoseArrayService_Request.
typedef struct mobiman_msgs__srv__PoseArrayService_Request__Sequence
{
  mobiman_msgs__srv__PoseArrayService_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__srv__PoseArrayService_Request__Sequence;


// Constants defined in the message

/// Struct defined in srv/PoseArrayService in the package mobiman_msgs.
typedef struct mobiman_msgs__srv__PoseArrayService_Response
{
  bool success;
} mobiman_msgs__srv__PoseArrayService_Response;

// Struct for a sequence of mobiman_msgs__srv__PoseArrayService_Response.
typedef struct mobiman_msgs__srv__PoseArrayService_Response__Sequence
{
  mobiman_msgs__srv__PoseArrayService_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} mobiman_msgs__srv__PoseArrayService_Response__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // MOBIMAN_MSGS__SRV__DETAIL__POSE_ARRAY_SERVICE__STRUCT_H_
