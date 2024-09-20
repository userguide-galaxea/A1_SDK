// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ocs2_msgs:msg/MpcTargetTrajectories.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ocs2_msgs/msg/detail/mpc_target_trajectories__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace ocs2_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void MpcTargetTrajectories_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ocs2_msgs::msg::MpcTargetTrajectories(_init);
}

void MpcTargetTrajectories_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ocs2_msgs::msg::MpcTargetTrajectories *>(message_memory);
  typed_message->~MpcTargetTrajectories();
}

size_t size_function__MpcTargetTrajectories__time_trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcTargetTrajectories__time_trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcTargetTrajectories__time_trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcTargetTrajectories__time_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MpcTargetTrajectories__time_trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MpcTargetTrajectories__time_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MpcTargetTrajectories__time_trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MpcTargetTrajectories__time_trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcTargetTrajectories__state_trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ocs2_msgs::msg::MpcState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcTargetTrajectories__state_trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ocs2_msgs::msg::MpcState> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcTargetTrajectories__state_trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ocs2_msgs::msg::MpcState> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcTargetTrajectories__state_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ocs2_msgs::msg::MpcState *>(
    get_const_function__MpcTargetTrajectories__state_trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<ocs2_msgs::msg::MpcState *>(untyped_value);
  value = item;
}

void assign_function__MpcTargetTrajectories__state_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ocs2_msgs::msg::MpcState *>(
    get_function__MpcTargetTrajectories__state_trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const ocs2_msgs::msg::MpcState *>(untyped_value);
  item = value;
}

void resize_function__MpcTargetTrajectories__state_trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ocs2_msgs::msg::MpcState> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcTargetTrajectories__input_trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ocs2_msgs::msg::MpcInput> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcTargetTrajectories__input_trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ocs2_msgs::msg::MpcInput> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcTargetTrajectories__input_trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ocs2_msgs::msg::MpcInput> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcTargetTrajectories__input_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ocs2_msgs::msg::MpcInput *>(
    get_const_function__MpcTargetTrajectories__input_trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<ocs2_msgs::msg::MpcInput *>(untyped_value);
  value = item;
}

void assign_function__MpcTargetTrajectories__input_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ocs2_msgs::msg::MpcInput *>(
    get_function__MpcTargetTrajectories__input_trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const ocs2_msgs::msg::MpcInput *>(untyped_value);
  item = value;
}

void resize_function__MpcTargetTrajectories__input_trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ocs2_msgs::msg::MpcInput> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MpcTargetTrajectories_message_member_array[3] = {
  {
    "time_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcTargetTrajectories, time_trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcTargetTrajectories__time_trajectory,  // size() function pointer
    get_const_function__MpcTargetTrajectories__time_trajectory,  // get_const(index) function pointer
    get_function__MpcTargetTrajectories__time_trajectory,  // get(index) function pointer
    fetch_function__MpcTargetTrajectories__time_trajectory,  // fetch(index, &value) function pointer
    assign_function__MpcTargetTrajectories__time_trajectory,  // assign(index, value) function pointer
    resize_function__MpcTargetTrajectories__time_trajectory  // resize(index) function pointer
  },
  {
    "state_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ocs2_msgs::msg::MpcState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcTargetTrajectories, state_trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcTargetTrajectories__state_trajectory,  // size() function pointer
    get_const_function__MpcTargetTrajectories__state_trajectory,  // get_const(index) function pointer
    get_function__MpcTargetTrajectories__state_trajectory,  // get(index) function pointer
    fetch_function__MpcTargetTrajectories__state_trajectory,  // fetch(index, &value) function pointer
    assign_function__MpcTargetTrajectories__state_trajectory,  // assign(index, value) function pointer
    resize_function__MpcTargetTrajectories__state_trajectory  // resize(index) function pointer
  },
  {
    "input_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ocs2_msgs::msg::MpcInput>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcTargetTrajectories, input_trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcTargetTrajectories__input_trajectory,  // size() function pointer
    get_const_function__MpcTargetTrajectories__input_trajectory,  // get_const(index) function pointer
    get_function__MpcTargetTrajectories__input_trajectory,  // get(index) function pointer
    fetch_function__MpcTargetTrajectories__input_trajectory,  // fetch(index, &value) function pointer
    assign_function__MpcTargetTrajectories__input_trajectory,  // assign(index, value) function pointer
    resize_function__MpcTargetTrajectories__input_trajectory  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MpcTargetTrajectories_message_members = {
  "ocs2_msgs::msg",  // message namespace
  "MpcTargetTrajectories",  // message name
  3,  // number of fields
  sizeof(ocs2_msgs::msg::MpcTargetTrajectories),
  MpcTargetTrajectories_message_member_array,  // message members
  MpcTargetTrajectories_init_function,  // function to initialize message memory (memory has to be allocated)
  MpcTargetTrajectories_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MpcTargetTrajectories_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MpcTargetTrajectories_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace ocs2_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<ocs2_msgs::msg::MpcTargetTrajectories>()
{
  return &::ocs2_msgs::msg::rosidl_typesupport_introspection_cpp::MpcTargetTrajectories_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ocs2_msgs, msg, MpcTargetTrajectories)() {
  return &::ocs2_msgs::msg::rosidl_typesupport_introspection_cpp::MpcTargetTrajectories_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
