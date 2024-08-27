// Generated by gencpp from file signal_arm/status_stamped.msg
// DO NOT EDIT!


#ifndef SIGNAL_ARM_MESSAGE_STATUS_STAMPED_H
#define SIGNAL_ARM_MESSAGE_STATUS_STAMPED_H


#include <string>
#include <vector>
#include <memory>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <signal_arm/status.h>

namespace signal_arm
{
template <class ContainerAllocator>
struct status_stamped_
{
  typedef status_stamped_<ContainerAllocator> Type;

  status_stamped_()
    : header()
    , data()  {
    }
  status_stamped_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , data(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef  ::signal_arm::status_<ContainerAllocator>  _data_type;
  _data_type data;





  typedef boost::shared_ptr< ::signal_arm::status_stamped_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::signal_arm::status_stamped_<ContainerAllocator> const> ConstPtr;

}; // struct status_stamped_

typedef ::signal_arm::status_stamped_<std::allocator<void> > status_stamped;

typedef boost::shared_ptr< ::signal_arm::status_stamped > status_stampedPtr;
typedef boost::shared_ptr< ::signal_arm::status_stamped const> status_stampedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::signal_arm::status_stamped_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::signal_arm::status_stamped_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::signal_arm::status_stamped_<ContainerAllocator1> & lhs, const ::signal_arm::status_stamped_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.data == rhs.data;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::signal_arm::status_stamped_<ContainerAllocator1> & lhs, const ::signal_arm::status_stamped_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace signal_arm

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::signal_arm::status_stamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::signal_arm::status_stamped_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::signal_arm::status_stamped_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::signal_arm::status_stamped_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::signal_arm::status_stamped_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::signal_arm::status_stamped_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::signal_arm::status_stamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "6e3be6b3acaa4d25460958596a1f2bf0";
  }

  static const char* value(const ::signal_arm::status_stamped_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x6e3be6b3acaa4d25ULL;
  static const uint64_t static_value2 = 0x460958596a1f2bf0ULL;
};

template<class ContainerAllocator>
struct DataType< ::signal_arm::status_stamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "signal_arm/status_stamped";
  }

  static const char* value(const ::signal_arm::status_stamped_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::signal_arm::status_stamped_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n"
"status data\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: signal_arm/status\n"
"string[] name\n"
"motor_error[] motor_errors\n"
"================================================================================\n"
"MSG: signal_arm/motor_error\n"
"uint32 error_code\n"
"string[] error_description\n"
;
  }

  static const char* value(const ::signal_arm::status_stamped_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::signal_arm::status_stamped_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.data);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct status_stamped_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::signal_arm::status_stamped_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::signal_arm::status_stamped_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "data: ";
    s << std::endl;
    Printer< ::signal_arm::status_<ContainerAllocator> >::stream(s, indent + "  ", v.data);
  }
};

} // namespace message_operations
} // namespace ros

#endif // SIGNAL_ARM_MESSAGE_STATUS_STAMPED_H
