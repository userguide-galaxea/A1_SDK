// Generated by gencpp from file ocs2_msgs/mpc_performance_indices.msg
// DO NOT EDIT!


#ifndef OCS2_MSGS_MESSAGE_MPC_PERFORMANCE_INDICES_H
#define OCS2_MSGS_MESSAGE_MPC_PERFORMANCE_INDICES_H


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
struct mpc_performance_indices_
{
  typedef mpc_performance_indices_<ContainerAllocator> Type;

  mpc_performance_indices_()
    : initTime(0.0)
    , merit(0.0)
    , cost(0.0)
    , dynamicsViolationSSE(0.0)
    , equalityConstraintsSSE(0.0)
    , equalityLagrangian(0.0)
    , inequalityLagrangian(0.0)  {
    }
  mpc_performance_indices_(const ContainerAllocator& _alloc)
    : initTime(0.0)
    , merit(0.0)
    , cost(0.0)
    , dynamicsViolationSSE(0.0)
    , equalityConstraintsSSE(0.0)
    , equalityLagrangian(0.0)
    , inequalityLagrangian(0.0)  {
  (void)_alloc;
    }



   typedef float _initTime_type;
  _initTime_type initTime;

   typedef float _merit_type;
  _merit_type merit;

   typedef float _cost_type;
  _cost_type cost;

   typedef float _dynamicsViolationSSE_type;
  _dynamicsViolationSSE_type dynamicsViolationSSE;

   typedef float _equalityConstraintsSSE_type;
  _equalityConstraintsSSE_type equalityConstraintsSSE;

   typedef float _equalityLagrangian_type;
  _equalityLagrangian_type equalityLagrangian;

   typedef float _inequalityLagrangian_type;
  _inequalityLagrangian_type inequalityLagrangian;





  typedef boost::shared_ptr< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> const> ConstPtr;

}; // struct mpc_performance_indices_

typedef ::ocs2_msgs::mpc_performance_indices_<std::allocator<void> > mpc_performance_indices;

typedef boost::shared_ptr< ::ocs2_msgs::mpc_performance_indices > mpc_performance_indicesPtr;
typedef boost::shared_ptr< ::ocs2_msgs::mpc_performance_indices const> mpc_performance_indicesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator1> & lhs, const ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator2> & rhs)
{
  return lhs.initTime == rhs.initTime &&
    lhs.merit == rhs.merit &&
    lhs.cost == rhs.cost &&
    lhs.dynamicsViolationSSE == rhs.dynamicsViolationSSE &&
    lhs.equalityConstraintsSSE == rhs.equalityConstraintsSSE &&
    lhs.equalityLagrangian == rhs.equalityLagrangian &&
    lhs.inequalityLagrangian == rhs.inequalityLagrangian;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator1> & lhs, const ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace ocs2_msgs

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsMessage< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d3efdce4c946e170e65e642157f48398";
  }

  static const char* value(const ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd3efdce4c946e170ULL;
  static const uint64_t static_value2 = 0xe65e642157f48398ULL;
};

template<class ContainerAllocator>
struct DataType< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ocs2_msgs/mpc_performance_indices";
  }

  static const char* value(const ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# MPC performance indices\n"
"float32     initTime\n"
"float32     merit\n"
"float32     cost\n"
"float32     dynamicsViolationSSE\n"
"float32     equalityConstraintsSSE\n"
"float32     equalityLagrangian\n"
"float32     inequalityLagrangian\n"
;
  }

  static const char* value(const ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.initTime);
      stream.next(m.merit);
      stream.next(m.cost);
      stream.next(m.dynamicsViolationSSE);
      stream.next(m.equalityConstraintsSSE);
      stream.next(m.equalityLagrangian);
      stream.next(m.inequalityLagrangian);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct mpc_performance_indices_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ocs2_msgs::mpc_performance_indices_<ContainerAllocator>& v)
  {
    s << indent << "initTime: ";
    Printer<float>::stream(s, indent + "  ", v.initTime);
    s << indent << "merit: ";
    Printer<float>::stream(s, indent + "  ", v.merit);
    s << indent << "cost: ";
    Printer<float>::stream(s, indent + "  ", v.cost);
    s << indent << "dynamicsViolationSSE: ";
    Printer<float>::stream(s, indent + "  ", v.dynamicsViolationSSE);
    s << indent << "equalityConstraintsSSE: ";
    Printer<float>::stream(s, indent + "  ", v.equalityConstraintsSSE);
    s << indent << "equalityLagrangian: ";
    Printer<float>::stream(s, indent + "  ", v.equalityLagrangian);
    s << indent << "inequalityLagrangian: ";
    Printer<float>::stream(s, indent + "  ", v.inequalityLagrangian);
  }
};

} // namespace message_operations
} // namespace ros

#endif // OCS2_MSGS_MESSAGE_MPC_PERFORMANCE_INDICES_H
