// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mobiman_msgs:msg/CameraDetection.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mobiman_msgs/msg/detail/camera_detection__rosidl_typesupport_introspection_c.h"
#include "mobiman_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mobiman_msgs/msg/detail/camera_detection__functions.h"
#include "mobiman_msgs/msg/detail/camera_detection__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `source_img`
#include "sensor_msgs/msg/image.h"
// Member `source_img`
#include "sensor_msgs/msg/detail/image__rosidl_typesupport_introspection_c.h"
// Member `mask`
#include "mobiman_msgs/msg/mask.h"
// Member `mask`
#include "mobiman_msgs/msg/detail/mask__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mobiman_msgs__msg__CameraDetection__init(message_memory);
}

void mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_fini_function(void * message_memory)
{
  mobiman_msgs__msg__CameraDetection__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_message_member_array[3] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__CameraDetection, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "source_img",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__CameraDetection, source_img),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "mask",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__CameraDetection, mask),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_message_members = {
  "mobiman_msgs__msg",  // message namespace
  "CameraDetection",  // message name
  3,  // number of fields
  sizeof(mobiman_msgs__msg__CameraDetection),
  mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_message_member_array,  // message members
  mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_init_function,  // function to initialize message memory (memory has to be allocated)
  mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_message_type_support_handle = {
  0,
  &mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mobiman_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mobiman_msgs, msg, CameraDetection)() {
  mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, sensor_msgs, msg, Image)();
  mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mobiman_msgs, msg, Mask)();
  if (!mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_message_type_support_handle.typesupport_identifier) {
    mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mobiman_msgs__msg__CameraDetection__rosidl_typesupport_introspection_c__CameraDetection_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif