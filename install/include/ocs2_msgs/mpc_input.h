// Generated by gencpp from file ocs2_msgs/mpc_input.msg
// DO NOT EDIT!


#ifndef OCS2_MSGS_MESSAGE_MPC_INPUT_H
#define OCS2_MSGS_MESSAGE_MPC_INPUT_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ocs2_msgs
{
template <class ContainerAllocator>
struct mpc_input_
{
  typedef mpc_input_<ContainerAllocator> Type;

  mpc_input_()
    : value()  {
    }
  mpc_input_(const ContainerAllocator& _alloc)
    : value(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<float, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<float>> _value_type;
  _value_type value;





  typedef boost::shared_ptr< ::ocs2_msgs::mpc_input_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ocs2_msgs::mpc_input_<ContainerAllocator> const> ConstPtr;

}; // struct mpc_input_

typedef ::ocs2_msgs::mpc_input_<std::allocator<void> > mpc_input;

typedef boost::shared_ptr< ::ocs2_msgs::mpc_input > mpc_inputPtr;
typedef boost::shared_ptr< ::ocs2_msgs::mpc_input const> mpc_inputConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ocs2_msgs::mpc_input_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ocs2_msgs::mpc_input_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ocs2_msgs::mpc_input_<ContainerAllocator1> & lhs, const ::ocs2_msgs::mpc_input_<ContainerAllocator2> & rhs)
{
  return lhs.value == rhs.value;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ocs2_msgs::mpc_input_<ContainerAllocator1> & lhs, const ::ocs2_msgs::mpc_input_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ocs2_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ocs2_msgs::mpc_input_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ocs2_msgs::mpc_input_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ocs2_msgs::mpc_input_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ocs2_msgs::mpc_input_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ocs2_msgs::mpc_input_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ocs2_msgs::mpc_input_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ocs2_msgs::mpc_input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "1becc0cb8362a822e3753aa6cf42cf70";
  }

  static const char* value(const ::ocs2_msgs::mpc_input_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x1becc0cb8362a822ULL;
  static const uint64_t static_value2 = 0xe3753aa6cf42cf70ULL;
};

template<class ContainerAllocator>
struct DataType< ::ocs2_msgs::mpc_input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ocs2_msgs/mpc_input";
  }

  static const char* value(const ::ocs2_msgs::mpc_input_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ocs2_msgs::mpc_input_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# MPC internal model input vector \n"
"\n"
"float32[] value\n"
;
  }

  static const char* value(const ::ocs2_msgs::mpc_input_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ocs2_msgs::mpc_input_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.value);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mpc_input_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ocs2_msgs::mpc_input_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ocs2_msgs::mpc_input_<ContainerAllocator>& v)
  {
    s << indent << "value[]" << std::endl;
    for (size_t i = 0; i < v.value.size(); ++i)
    {
      s << indent << "  value[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.value[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCS2_MSGS_MESSAGE_MPC_INPUT_H
