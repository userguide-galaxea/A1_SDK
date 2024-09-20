// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ocs2_msgs:msg/ControllerData.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ocs2_msgs/msg/detail/controller_data__rosidl_typesupport_introspection_c.h"
#include "ocs2_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ocs2_msgs/msg/detail/controller_data__functions.h"
#include "ocs2_msgs/msg/detail/controller_data__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ocs2_msgs__msg__ControllerData__init(message_memory);
}

void ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_fini_function(void * message_memory)
{
  ocs2_msgs__msg__ControllerData__fini(message_memory);
}

size_t ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__size_function__ControllerData__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return member->size;
}

const void * ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__get_const_function__ControllerData__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__float__Sequence * member =
    (const rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void * ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__get_function__ControllerData__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  return &member->data[index];
}

void ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__fetch_function__ControllerData__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const float * item =
    ((const float *)
    ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__get_const_function__ControllerData__data(untyped_member, index));
  float * value =
    (float *)(untyped_value);
  *value = *item;
}

void ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__assign_function__ControllerData__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  float * item =
    ((float *)
    ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__get_function__ControllerData__data(untyped_member, index));
  const float * value =
    (const float *)(untyped_value);
  *item = *value;
}

bool ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__resize_function__ControllerData__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__float__Sequence * member =
    (rosidl_runtime_c__float__Sequence *)(untyped_member);
  rosidl_runtime_c__float__Sequence__fini(member);
  return rosidl_runtime_c__float__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_message_member_array[1] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs__msg__ControllerData, data),  // bytes offset in struct
    NULL,  // default value
    ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__size_function__ControllerData__data,  // size() function pointer
    ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__get_const_function__ControllerData__data,  // get_const(index) function pointer
    ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__get_function__ControllerData__data,  // get(index) function pointer
    ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__fetch_function__ControllerData__data,  // fetch(index, &value) function pointer
    ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__assign_function__ControllerData__data,  // assign(index, value) function pointer
    ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__resize_function__ControllerData__data  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_message_members = {
  "ocs2_msgs__msg",  // message namespace
  "ControllerData",  // message name
  1,  // number of fields
  sizeof(ocs2_msgs__msg__ControllerData),
  ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_message_member_array,  // message members
  ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_init_function,  // function to initialize message memory (memory has to be allocated)
  ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_message_type_support_handle = {
  0,
  &ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ocs2_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ocs2_msgs, msg, ControllerData)() {
  if (!ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_message_type_support_handle.typesupport_identifier) {
    ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ocs2_msgs__msg__ControllerData__rosidl_typesupport_introspection_c__ControllerData_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
