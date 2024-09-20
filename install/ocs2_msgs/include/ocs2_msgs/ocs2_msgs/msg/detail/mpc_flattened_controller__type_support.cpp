// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from ocs2_msgs:msg/MpcFlattenedController.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "ocs2_msgs/msg/detail/mpc_flattened_controller__struct.hpp"
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

void MpcFlattenedController_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) ocs2_msgs::msg::MpcFlattenedController(_init);
}

void MpcFlattenedController_fini_function(void * message_memory)
{
  auto typed_message = static_cast<ocs2_msgs::msg::MpcFlattenedController *>(message_memory);
  typed_message->~MpcFlattenedController();
}

size_t size_function__MpcFlattenedController__state_trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ocs2_msgs::msg::MpcState> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcFlattenedController__state_trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ocs2_msgs::msg::MpcState> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcFlattenedController__state_trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ocs2_msgs::msg::MpcState> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcFlattenedController__state_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ocs2_msgs::msg::MpcState *>(
    get_const_function__MpcFlattenedController__state_trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<ocs2_msgs::msg::MpcState *>(untyped_value);
  value = item;
}

void assign_function__MpcFlattenedController__state_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ocs2_msgs::msg::MpcState *>(
    get_function__MpcFlattenedController__state_trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const ocs2_msgs::msg::MpcState *>(untyped_value);
  item = value;
}

void resize_function__MpcFlattenedController__state_trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ocs2_msgs::msg::MpcState> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcFlattenedController__input_trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ocs2_msgs::msg::MpcInput> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcFlattenedController__input_trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ocs2_msgs::msg::MpcInput> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcFlattenedController__input_trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ocs2_msgs::msg::MpcInput> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcFlattenedController__input_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ocs2_msgs::msg::MpcInput *>(
    get_const_function__MpcFlattenedController__input_trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<ocs2_msgs::msg::MpcInput *>(untyped_value);
  value = item;
}

void assign_function__MpcFlattenedController__input_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ocs2_msgs::msg::MpcInput *>(
    get_function__MpcFlattenedController__input_trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const ocs2_msgs::msg::MpcInput *>(untyped_value);
  item = value;
}

void resize_function__MpcFlattenedController__input_trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ocs2_msgs::msg::MpcInput> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcFlattenedController__time_trajectory(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<double> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcFlattenedController__time_trajectory(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<double> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcFlattenedController__time_trajectory(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<double> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcFlattenedController__time_trajectory(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const double *>(
    get_const_function__MpcFlattenedController__time_trajectory(untyped_member, index));
  auto & value = *reinterpret_cast<double *>(untyped_value);
  value = item;
}

void assign_function__MpcFlattenedController__time_trajectory(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<double *>(
    get_function__MpcFlattenedController__time_trajectory(untyped_member, index));
  const auto & value = *reinterpret_cast<const double *>(untyped_value);
  item = value;
}

void resize_function__MpcFlattenedController__time_trajectory(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<double> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcFlattenedController__post_event_indices(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcFlattenedController__post_event_indices(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcFlattenedController__post_event_indices(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcFlattenedController__post_event_indices(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const uint16_t *>(
    get_const_function__MpcFlattenedController__post_event_indices(untyped_member, index));
  auto & value = *reinterpret_cast<uint16_t *>(untyped_value);
  value = item;
}

void assign_function__MpcFlattenedController__post_event_indices(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<uint16_t *>(
    get_function__MpcFlattenedController__post_event_indices(untyped_member, index));
  const auto & value = *reinterpret_cast<const uint16_t *>(untyped_value);
  item = value;
}

void resize_function__MpcFlattenedController__post_event_indices(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<uint16_t> *>(untyped_member);
  member->resize(size);
}

size_t size_function__MpcFlattenedController__data(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<ocs2_msgs::msg::ControllerData> *>(untyped_member);
  return member->size();
}

const void * get_const_function__MpcFlattenedController__data(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<ocs2_msgs::msg::ControllerData> *>(untyped_member);
  return &member[index];
}

void * get_function__MpcFlattenedController__data(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<ocs2_msgs::msg::ControllerData> *>(untyped_member);
  return &member[index];
}

void fetch_function__MpcFlattenedController__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const ocs2_msgs::msg::ControllerData *>(
    get_const_function__MpcFlattenedController__data(untyped_member, index));
  auto & value = *reinterpret_cast<ocs2_msgs::msg::ControllerData *>(untyped_value);
  value = item;
}

void assign_function__MpcFlattenedController__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<ocs2_msgs::msg::ControllerData *>(
    get_function__MpcFlattenedController__data(untyped_member, index));
  const auto & value = *reinterpret_cast<const ocs2_msgs::msg::ControllerData *>(untyped_value);
  item = value;
}

void resize_function__MpcFlattenedController__data(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<ocs2_msgs::msg::ControllerData> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember MpcFlattenedController_message_member_array[10] = {
  {
    "controller_type",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT8,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcFlattenedController, controller_type),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "init_observation",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ocs2_msgs::msg::MpcObservation>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcFlattenedController, init_observation),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "plan_target_trajectories",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ocs2_msgs::msg::MpcTargetTrajectories>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcFlattenedController, plan_target_trajectories),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "state_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ocs2_msgs::msg::MpcState>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcFlattenedController, state_trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcFlattenedController__state_trajectory,  // size() function pointer
    get_const_function__MpcFlattenedController__state_trajectory,  // get_const(index) function pointer
    get_function__MpcFlattenedController__state_trajectory,  // get(index) function pointer
    fetch_function__MpcFlattenedController__state_trajectory,  // fetch(index, &value) function pointer
    assign_function__MpcFlattenedController__state_trajectory,  // assign(index, value) function pointer
    resize_function__MpcFlattenedController__state_trajectory  // resize(index) function pointer
  },
  {
    "input_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ocs2_msgs::msg::MpcInput>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcFlattenedController, input_trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcFlattenedController__input_trajectory,  // size() function pointer
    get_const_function__MpcFlattenedController__input_trajectory,  // get_const(index) function pointer
    get_function__MpcFlattenedController__input_trajectory,  // get(index) function pointer
    fetch_function__MpcFlattenedController__input_trajectory,  // fetch(index, &value) function pointer
    assign_function__MpcFlattenedController__input_trajectory,  // assign(index, value) function pointer
    resize_function__MpcFlattenedController__input_trajectory  // resize(index) function pointer
  },
  {
    "time_trajectory",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcFlattenedController, time_trajectory),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcFlattenedController__time_trajectory,  // size() function pointer
    get_const_function__MpcFlattenedController__time_trajectory,  // get_const(index) function pointer
    get_function__MpcFlattenedController__time_trajectory,  // get(index) function pointer
    fetch_function__MpcFlattenedController__time_trajectory,  // fetch(index, &value) function pointer
    assign_function__MpcFlattenedController__time_trajectory,  // assign(index, value) function pointer
    resize_function__MpcFlattenedController__time_trajectory  // resize(index) function pointer
  },
  {
    "post_event_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_UINT16,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcFlattenedController, post_event_indices),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcFlattenedController__post_event_indices,  // size() function pointer
    get_const_function__MpcFlattenedController__post_event_indices,  // get_const(index) function pointer
    get_function__MpcFlattenedController__post_event_indices,  // get(index) function pointer
    fetch_function__MpcFlattenedController__post_event_indices,  // fetch(index, &value) function pointer
    assign_function__MpcFlattenedController__post_event_indices,  // assign(index, value) function pointer
    resize_function__MpcFlattenedController__post_event_indices  // resize(index) function pointer
  },
  {
    "mode_schedule",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ocs2_msgs::msg::ModeSchedule>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcFlattenedController, mode_schedule),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "data",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ocs2_msgs::msg::ControllerData>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcFlattenedController, data),  // bytes offset in struct
    nullptr,  // default value
    size_function__MpcFlattenedController__data,  // size() function pointer
    get_const_function__MpcFlattenedController__data,  // get_const(index) function pointer
    get_function__MpcFlattenedController__data,  // get(index) function pointer
    fetch_function__MpcFlattenedController__data,  // fetch(index, &value) function pointer
    assign_function__MpcFlattenedController__data,  // assign(index, value) function pointer
    resize_function__MpcFlattenedController__data  // resize(index) function pointer
  },
  {
    "performance_indices",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<ocs2_msgs::msg::MpcPerformanceIndices>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ocs2_msgs::msg::MpcFlattenedController, performance_indices),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers MpcFlattenedController_message_members = {
  "ocs2_msgs::msg",  // message namespace
  "MpcFlattenedController",  // message name
  10,  // number of fields
  sizeof(ocs2_msgs::msg::MpcFlattenedController),
  MpcFlattenedController_message_member_array,  // message members
  MpcFlattenedController_init_function,  // function to initialize message memory (memory has to be allocated)
  MpcFlattenedController_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t MpcFlattenedController_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &MpcFlattenedController_message_members,
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
get_message_type_support_handle<ocs2_msgs::msg::MpcFlattenedController>()
{
  return &::ocs2_msgs::msg::rosidl_typesupport_introspection_cpp::MpcFlattenedController_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, ocs2_msgs, msg, MpcFlattenedController)() {
  return &::ocs2_msgs::msg::rosidl_typesupport_introspection_cpp::MpcFlattenedController_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
