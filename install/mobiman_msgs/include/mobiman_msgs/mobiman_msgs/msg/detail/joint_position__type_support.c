// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from mobiman_msgs:msg/JointPosition.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "mobiman_msgs/msg/detail/joint_position__rosidl_typesupport_introspection_c.h"
#include "mobiman_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "mobiman_msgs/msg/detail/joint_position__functions.h"
#include "mobiman_msgs/msg/detail/joint_position__struct.h"


// Include directives for member types
// Member `pos`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  mobiman_msgs__msg__JointPosition__init(message_memory);
}

void mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_fini_function(void * message_memory)
{
  mobiman_msgs__msg__JointPosition__fini(message_memory);
}

size_t mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__size_function__JointPosition__pos(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__get_const_function__JointPosition__pos(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__get_function__JointPosition__pos(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__fetch_function__JointPosition__pos(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__get_const_function__JointPosition__pos(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__assign_function__JointPosition__pos(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__get_function__JointPosition__pos(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__resize_function__JointPosition__pos(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_message_member_array[1] = {
  {
    "pos",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs__msg__JointPosition, pos),  // bytes offset in struct
    NULL,  // default value
    mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__size_function__JointPosition__pos,  // size() function pointer
    mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__get_const_function__JointPosition__pos,  // get_const(index) function pointer
    mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__get_function__JointPosition__pos,  // get(index) function pointer
    mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__fetch_function__JointPosition__pos,  // fetch(index, &value) function pointer
    mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__assign_function__JointPosition__pos,  // assign(index, value) function pointer
    mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__resize_function__JointPosition__pos  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_message_members = {
  "mobiman_msgs__msg",  // message namespace
  "JointPosition",  // message name
  1,  // number of fields
  sizeof(mobiman_msgs__msg__JointPosition),
  mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_message_member_array,  // message members
  mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_init_function,  // function to initialize message memory (memory has to be allocated)
  mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_message_type_support_handle = {
  0,
  &mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_mobiman_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, mobiman_msgs, msg, JointPosition)() {
  if (!mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_message_type_support_handle.typesupport_identifier) {
    mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &mobiman_msgs__msg__JointPosition__rosidl_typesupport_introspection_c__JointPosition_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
