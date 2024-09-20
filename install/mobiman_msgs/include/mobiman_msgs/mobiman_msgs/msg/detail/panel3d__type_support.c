// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mobiman_msgs:msg/Panel3d.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mobiman_msgs/msg/detail/panel3d__rosidl_typesupport_introspection_c.h"
#include "mobiman_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mobiman_msgs/msg/detail/panel3d__functions.h"
#include "mobiman_msgs/msg/detail/panel3d__struct.h"


// Include directives for member types
// Member `origin`
#include "geometry_msgs/msg/point.h"
// Member `origin`
#include "geometry_msgs/msg/detail/point__rosidl_typesupport_introspection_c.h"
// Member `normal`
#include "geometry_msgs/msg/vector3.h"
// Member `normal`
#include "geometry_msgs/msg/detail/vector3__rosidl_typesupport_introspection_c.h"
// Member `buttons_3d`
#include "mobiman_msgs/msg/button3d.h"
// Member `buttons_3d`
#include "mobiman_msgs/msg/detail/button3d__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mobiman_msgs__msg__Panel3d__init(message_memory);
}

void mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_fini_function(void * message_memory)
{
  mobiman_msgs__msg__Panel3d__fini(message_memory);
}

size_t mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__size_function__Panel3d__buttons_3d(
  const void * untyped_member)
{
  const mobiman_msgs__msg__Button3d__Sequence * member =
    (const mobiman_msgs__msg__Button3d__Sequence *)(untyped_member);
  return member->size;
}

const void * mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__get_const_function__Panel3d__buttons_3d(
  const void * untyped_member, size_t index)
{
  const mobiman_msgs__msg__Button3d__Sequence * member =
    (const mobiman_msgs__msg__Button3d__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__get_function__Panel3d__buttons_3d(
  void * untyped_member, size_t index)
{
  mobiman_msgs__msg__Button3d__Sequence * member =
    (mobiman_msgs__msg__Button3d__Sequence *)(untyped_member);
  return &member->data[index];
}

void mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__fetch_function__Panel3d__buttons_3d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const mobiman_msgs__msg__Button3d * item =
    ((const mobiman_msgs__msg__Button3d *)
    mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__get_const_function__Panel3d__buttons_3d(untyped_member, index));
  mobiman_msgs__msg__Button3d * value =
    (mobiman_msgs__msg__Button3d *)(untyped_value);
  *value = *item;
}

void mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__assign_function__Panel3d__buttons_3d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  mobiman_msgs__msg__Button3d * item =
    ((mobiman_msgs__msg__Button3d *)
    mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__get_function__Panel3d__buttons_3d(untyped_member, index));
  const mobiman_msgs__msg__Button3d * value =
    (const mobiman_msgs__msg__Button3d *)(untyped_value);
  *item = *value;
}

bool mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__resize_function__Panel3d__buttons_3d(
  void * untyped_member, size_t size)
{
  mobiman_msgs__msg__Button3d__Sequence * member =
    (mobiman_msgs__msg__Button3d__Sequence *)(untyped_member);
  mobiman_msgs__msg__Button3d__Sequence__fini(member);
  return mobiman_msgs__msg__Button3d__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_message_member_array[5] = {
  {
    "origin",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__Panel3d, origin),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "normal",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__Panel3d, normal),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "length",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__Panel3d, length),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "width",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__Panel3d, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "buttons_3d",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__Panel3d, buttons_3d),  // bytes offset in struct
    NULL,  // default value
    mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__size_function__Panel3d__buttons_3d,  // size() function pointer
    mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__get_const_function__Panel3d__buttons_3d,  // get_const(index) function pointer
    mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__get_function__Panel3d__buttons_3d,  // get(index) function pointer
    mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__fetch_function__Panel3d__buttons_3d,  // fetch(index, &value) function pointer
    mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__assign_function__Panel3d__buttons_3d,  // assign(index, value) function pointer
    mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__resize_function__Panel3d__buttons_3d  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_message_members = {
  "mobiman_msgs__msg",  // message namespace
  "Panel3d",  // message name
  5,  // number of fields
  sizeof(mobiman_msgs__msg__Panel3d),
  mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_message_member_array,  // message members
  mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_init_function,  // function to initialize message memory (memory has to be allocated)
  mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_message_type_support_handle = {
  0,
  &mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mobiman_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mobiman_msgs, msg, Panel3d)() {
  mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Point)();
  mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, geometry_msgs, msg, Vector3)();
  mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mobiman_msgs, msg, Button3d)();
  if (!mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_message_type_support_handle.typesupport_identifier) {
    mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mobiman_msgs__msg__Panel3d__rosidl_typesupport_introspection_c__Panel3d_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
