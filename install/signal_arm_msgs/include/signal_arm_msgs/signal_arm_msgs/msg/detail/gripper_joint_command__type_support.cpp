// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from signal_arm_msgs:msg/GripperJointCommand.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "signal_arm_msgs/msg/detail/gripper_joint_command__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace signal_arm_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void GripperJointCommand_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) signal_arm_msgs::msg::GripperJointCommand(_init);
}

void GripperJointCommand_fini_function(void * message_memory)
{
  auto typed_message = static_cast<signal_arm_msgs::msg::GripperJointCommand *>(message_memory);
  typed_message->~GripperJointCommand();
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember GripperJointCommand_message_member_array[2] = {
  {
    "header",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<std_msgs::msg::Header>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs::msg::GripperJointCommand, header),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "gripper_force",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(signal_arm_msgs::msg::GripperJointCommand, gripper_force),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers GripperJointCommand_message_members = {
  "signal_arm_msgs::msg",  // message namespace
  "GripperJointCommand",  // message name
  2,  // number of fields
  sizeof(signal_arm_msgs::msg::GripperJointCommand),
  GripperJointCommand_message_member_array,  // message members
  GripperJointCommand_init_function,  // function to initialize message memory (memory has to be allocated)
  GripperJointCommand_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t GripperJointCommand_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &GripperJointCommand_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace signal_arm_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<signal_arm_msgs::msg::GripperJointCommand>()
{
  return &::signal_arm_msgs::msg::rosidl_typesupport_introspection_cpp::GripperJointCommand_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, signal_arm_msgs, msg, GripperJointCommand)() {
  return &::signal_arm_msgs::msg::rosidl_typesupport_introspection_cpp::GripperJointCommand_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
