// generated from rosidl_typesupport_introspection_cpp/resource/idl__type_support.cpp.em
// with input from mobiman_msgs:msg/Panel3d.idl
// generated code does not contain a copyright notice

#include "array"
#include "cstddef"
#include "string"
#include "vector"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_interface/macros.h"
#include "mobiman_msgs/msg/detail/panel3d__struct.hpp"
#include "rosidl_typesupport_introspection_cpp/field_types.hpp"
#include "rosidl_typesupport_introspection_cpp/identifier.hpp"
#include "rosidl_typesupport_introspection_cpp/message_introspection.hpp"
#include "rosidl_typesupport_introspection_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_introspection_cpp/visibility_control.h"

namespace mobiman_msgs
{

namespace msg
{

namespace rosidl_typesupport_introspection_cpp
{

void Panel3d_init_function(
  void * message_memory, rosidl_runtime_cpp::MessageInitialization _init)
{
  new (message_memory) mobiman_msgs::msg::Panel3d(_init);
}

void Panel3d_fini_function(void * message_memory)
{
  auto typed_message = static_cast<mobiman_msgs::msg::Panel3d *>(message_memory);
  typed_message->~Panel3d();
}

size_t size_function__Panel3d__buttons_3d(const void * untyped_member)
{
  const auto * member = reinterpret_cast<const std::vector<mobiman_msgs::msg::Button3d> *>(untyped_member);
  return member->size();
}

const void * get_const_function__Panel3d__buttons_3d(const void * untyped_member, size_t index)
{
  const auto & member =
    *reinterpret_cast<const std::vector<mobiman_msgs::msg::Button3d> *>(untyped_member);
  return &member[index];
}

void * get_function__Panel3d__buttons_3d(void * untyped_member, size_t index)
{
  auto & member =
    *reinterpret_cast<std::vector<mobiman_msgs::msg::Button3d> *>(untyped_member);
  return &member[index];
}

void fetch_function__Panel3d__buttons_3d(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const auto & item = *reinterpret_cast<const mobiman_msgs::msg::Button3d *>(
    get_const_function__Panel3d__buttons_3d(untyped_member, index));
  auto & value = *reinterpret_cast<mobiman_msgs::msg::Button3d *>(untyped_value);
  value = item;
}

void assign_function__Panel3d__buttons_3d(
  void * untyped_member, size_t index, const void * untyped_value)
{
  auto & item = *reinterpret_cast<mobiman_msgs::msg::Button3d *>(
    get_function__Panel3d__buttons_3d(untyped_member, index));
  const auto & value = *reinterpret_cast<const mobiman_msgs::msg::Button3d *>(untyped_value);
  item = value;
}

void resize_function__Panel3d__buttons_3d(void * untyped_member, size_t size)
{
  auto * member =
    reinterpret_cast<std::vector<mobiman_msgs::msg::Button3d> *>(untyped_member);
  member->resize(size);
}

static const ::rosidl_typesupport_introspection_cpp::MessageMember Panel3d_message_member_array[5] = {
  {
    "origin",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Point>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs::msg::Panel3d, origin),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "normal",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<geometry_msgs::msg::Vector3>(),  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs::msg::Panel3d, normal),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "length",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs::msg::Panel3d, length),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "width",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_FLOAT,  // type
    0,  // upper bound of string
    nullptr,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs::msg::Panel3d, width),  // bytes offset in struct
    nullptr,  // default value
    nullptr,  // size() function pointer
    nullptr,  // get_const(index) function pointer
    nullptr,  // get(index) function pointer
    nullptr,  // fetch(index, &value) function pointer
    nullptr,  // assign(index, value) function pointer
    nullptr  // resize(index) function pointer
  },
  {
    "buttons_3d",  // name
    ::rosidl_typesupport_introspection_cpp::ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    ::rosidl_typesupport_introspection_cpp::get_message_type_support_handle<mobiman_msgs::msg::Button3d>(),  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(mobiman_msgs::msg::Panel3d, buttons_3d),  // bytes offset in struct
    nullptr,  // default value
    size_function__Panel3d__buttons_3d,  // size() function pointer
    get_const_function__Panel3d__buttons_3d,  // get_const(index) function pointer
    get_function__Panel3d__buttons_3d,  // get(index) function pointer
    fetch_function__Panel3d__buttons_3d,  // fetch(index, &value) function pointer
    assign_function__Panel3d__buttons_3d,  // assign(index, value) function pointer
    resize_function__Panel3d__buttons_3d  // resize(index) function pointer
  }
};

static const ::rosidl_typesupport_introspection_cpp::MessageMembers Panel3d_message_members = {
  "mobiman_msgs::msg",  // message namespace
  "Panel3d",  // message name
  5,  // number of fields
  sizeof(mobiman_msgs::msg::Panel3d),
  Panel3d_message_member_array,  // message members
  Panel3d_init_function,  // function to initialize message memory (memory has to be allocated)
  Panel3d_fini_function  // function to terminate message instance (will not free memory)
};

static const rosidl_message_type_support_t Panel3d_message_type_support_handle = {
  ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  &Panel3d_message_members,
  get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_introspection_cpp

}  // namespace msg

}  // namespace mobiman_msgs


namespace rosidl_typesupport_introspection_cpp
{

template<>
ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<mobiman_msgs::msg::Panel3d>()
{
  return &::mobiman_msgs::msg::rosidl_typesupport_introspection_cpp::Panel3d_message_type_support_handle;
}

}  // namespace rosidl_typesupport_introspection_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_INTROSPECTION_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, mobiman_msgs, msg, Panel3d)() {
  return &::mobiman_msgs::msg::rosidl_typesupport_introspection_cpp::Panel3d_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif
