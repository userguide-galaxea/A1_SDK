// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mobiman_msgs:msg/Mask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mobiman_msgs/msg/detail/mask__rosidl_typesupport_introspection_c.h"
#include "mobiman_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mobiman_msgs/msg/detail/mask__functions.h"
#include "mobiman_msgs/msg/detail/mask__struct.h"


// Include directives for member types
// Member `header`
#include "std_msgs/msg/header.h"
// Member `header`
#include "std_msgs/msg/detail/header__rosidl_typesupport_introspection_c.h"
// Member `data`
// Member `mask_types`
#include "rosidl_runtime_c/primitives_sequence_functions.h"
// Member `instance_description`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mobiman_msgs__msg__Mask__init(message_memory);
}

void mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_fini_function(void * message_memory)
{
  mobiman_msgs__msg__Mask__fini(message_memory);
}

size_t mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__size_function__Mask__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_const_function__Mask__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_function__Mask__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__fetch_function__Mask__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_const_function__Mask__data(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__assign_function__Mask__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_function__Mask__data(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__resize_function__Mask__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__size_function__Mask__mask_types(
  const void * untyped_member)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return member->size;
}

const void * mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_const_function__Mask__mask_types(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__uint8__Sequence * member =
    (const rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_function__Mask__mask_types(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  return &member->data[index];
}

void mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__fetch_function__Mask__mask_types(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const uint8_t * item =
    ((const uint8_t *)
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_const_function__Mask__mask_types(untyped_member, index));
  uint8_t * value =
    (uint8_t *)(untyped_value);
  *value = *item;
}

void mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__assign_function__Mask__mask_types(
  void * untyped_member, size_t index, const void * untyped_value)
{
  uint8_t * item =
    ((uint8_t *)
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_function__Mask__mask_types(untyped_member, index));
  const uint8_t * value =
    (const uint8_t *)(untyped_value);
  *item = *value;
}

bool mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__resize_function__Mask__mask_types(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__uint8__Sequence * member =
    (rosidl_runtime_c__uint8__Sequence *)(untyped_member);
  rosidl_runtime_c__uint8__Sequence__fini(member);
  return rosidl_runtime_c__uint8__Sequence__init(member, size);
}

size_t mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__size_function__Mask__instance_description(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_const_function__Mask__instance_description(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_function__Mask__instance_description(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__fetch_function__Mask__instance_description(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_const_function__Mask__instance_description(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__assign_function__Mask__instance_description(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_function__Mask__instance_description(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__resize_function__Mask__instance_description(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_message_member_array[6] = {
  {
    "header",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__Mask, header),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "height",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__Mask, height),  // bytes offset in struct
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
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__Mask, width),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__Mask, data),  // bytes offset in struct
    NULL,  // default value
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__size_function__Mask__data,  // size() function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_const_function__Mask__data,  // get_const(index) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_function__Mask__data,  // get(index) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__fetch_function__Mask__data,  // fetch(index, &value) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__assign_function__Mask__data,  // assign(index, value) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__resize_function__Mask__data  // resize(index) function pointer
  },
  {
    "mask_types",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__Mask, mask_types),  // bytes offset in struct
    NULL,  // default value
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__size_function__Mask__mask_types,  // size() function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_const_function__Mask__mask_types,  // get_const(index) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_function__Mask__mask_types,  // get(index) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__fetch_function__Mask__mask_types,  // fetch(index, &value) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__assign_function__Mask__mask_types,  // assign(index, value) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__resize_function__Mask__mask_types  // resize(index) function pointer
  },
  {
    "instance_description",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__Mask, instance_description),  // bytes offset in struct
    NULL,  // default value
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__size_function__Mask__instance_description,  // size() function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_const_function__Mask__instance_description,  // get_const(index) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__get_function__Mask__instance_description,  // get(index) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__fetch_function__Mask__instance_description,  // fetch(index, &value) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__assign_function__Mask__instance_description,  // assign(index, value) function pointer
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__resize_function__Mask__instance_description  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_message_members = {
  "mobiman_msgs__msg",  // message namespace
  "Mask",  // message name
  6,  // number of fields
  sizeof(mobiman_msgs__msg__Mask),
  mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_message_member_array,  // message members
  mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_init_function,  // function to initialize message memory (memory has to be allocated)
  mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_message_type_support_handle = {
  0,
  &mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mobiman_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mobiman_msgs, msg, Mask)() {
  mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_message_member_array[0].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, std_msgs, msg, Header)();
  if (!mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_message_type_support_handle.typesupport_identifier) {
    mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mobiman_msgs__msg__Mask__rosidl_typesupport_introspection_c__Mask_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
