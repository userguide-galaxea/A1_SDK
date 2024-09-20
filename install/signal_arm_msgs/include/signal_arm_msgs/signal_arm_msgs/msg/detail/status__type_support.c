// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from signal_arm_msgs:msg/Status.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "signal_arm_msgs/msg/detail/status__rosidl_typesupport_introspection_c.h"
#include "signal_arm_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "signal_arm_msgs/msg/detail/status__functions.h"
#include "signal_arm_msgs/msg/detail/status__struct.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"
// Member `motor_errors`
#include "signal_arm_msgs/msg/motor_error.h"
// Member `motor_errors`
#include "signal_arm_msgs/msg/detail/motor_error__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  signal_arm_msgs__msg__Status__init(message_memory);
}

void signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_fini_function(void * message_memory)
{
  signal_arm_msgs__msg__Status__fini(message_memory);
}

size_t signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__size_function__Status__name(
  const void * untyped_member)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_const_function__Status__name(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__String__Sequence * member =
    (const rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_function__Status__name(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__fetch_function__Status__name(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const rosidl_runtime_c__String * item =
    ((const rosidl_runtime_c__String *)
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_const_function__Status__name(untyped_member, index));
  rosidl_runtime_c__String * value =
    (rosidl_runtime_c__String *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__assign_function__Status__name(
  void * untyped_member, size_t index, const void * untyped_value)
{
  rosidl_runtime_c__String * item =
    ((rosidl_runtime_c__String *)
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_function__Status__name(untyped_member, index));
  const rosidl_runtime_c__String * value =
    (const rosidl_runtime_c__String *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__resize_function__Status__name(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__String__Sequence * member =
    (rosidl_runtime_c__String__Sequence *)(untyped_member);
  rosidl_runtime_c__String__Sequence__fini(member);
  return rosidl_runtime_c__String__Sequence__init(member, size);
}

size_t signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__size_function__Status__motor_errors(
  const void * untyped_member)
{
  const signal_arm_msgs__msg__MotorError__Sequence * member =
    (const signal_arm_msgs__msg__MotorError__Sequence *)(untyped_member);
  return member->size;
}

const void * signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_const_function__Status__motor_errors(
  const void * untyped_member, size_t index)
{
  const signal_arm_msgs__msg__MotorError__Sequence * member =
    (const signal_arm_msgs__msg__MotorError__Sequence *)(untyped_member);
  return &member->data[index];
}

void * signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_function__Status__motor_errors(
  void * untyped_member, size_t index)
{
  signal_arm_msgs__msg__MotorError__Sequence * member =
    (signal_arm_msgs__msg__MotorError__Sequence *)(untyped_member);
  return &member->data[index];
}

void signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__fetch_function__Status__motor_errors(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const signal_arm_msgs__msg__MotorError * item =
    ((const signal_arm_msgs__msg__MotorError *)
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_const_function__Status__motor_errors(untyped_member, index));
  signal_arm_msgs__msg__MotorError * value =
    (signal_arm_msgs__msg__MotorError *)(untyped_value);
  *value = *item;
}

void signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__assign_function__Status__motor_errors(
  void * untyped_member, size_t index, const void * untyped_value)
{
  signal_arm_msgs__msg__MotorError * item =
    ((signal_arm_msgs__msg__MotorError *)
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_function__Status__motor_errors(untyped_member, index));
  const signal_arm_msgs__msg__MotorError * value =
    (const signal_arm_msgs__msg__MotorError *)(untyped_value);
  *item = *value;
}

bool signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__resize_function__Status__motor_errors(
  void * untyped_member, size_t size)
{
  signal_arm_msgs__msg__MotorError__Sequence * member =
    (signal_arm_msgs__msg__MotorError__Sequence *)(untyped_member);
  signal_arm_msgs__msg__MotorError__Sequence__fini(member);
  return signal_arm_msgs__msg__MotorError__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_member_array[2] = {
  {
    "name",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__Status, name),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__size_function__Status__name,  // size() function pointer
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_const_function__Status__name,  // get_const(index) function pointer
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_function__Status__name,  // get(index) function pointer
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__fetch_function__Status__name,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__assign_function__Status__name,  // assign(index, value) function pointer
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__resize_function__Status__name  // resize(index) function pointer
  },
  {
    "motor_errors",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs__msg__Status, motor_errors),  // bytes offset in struct
    NULL,  // default value
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__size_function__Status__motor_errors,  // size() function pointer
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_const_function__Status__motor_errors,  // get_const(index) function pointer
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__get_function__Status__motor_errors,  // get(index) function pointer
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__fetch_function__Status__motor_errors,  // fetch(index, &value) function pointer
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__assign_function__Status__motor_errors,  // assign(index, value) function pointer
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__resize_function__Status__motor_errors  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_members = {
  "signal_arm_msgs__msg",  // message namespace
  "Status",  // message name
  2,  // number of fields
  sizeof(signal_arm_msgs__msg__Status),
  signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_member_array,  // message members
  signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_init_function,  // function to initialize message memory (memory has to be allocated)
  signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle = {
  0,
  &signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_signal_arm_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, signal_arm_msgs, msg, Status)() {
  signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, signal_arm_msgs, msg, MotorError)();
  if (!signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle.typesupport_identifier) {
    signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &signal_arm_msgs__msg__Status__rosidl_typesupport_introspection_c__Status_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
