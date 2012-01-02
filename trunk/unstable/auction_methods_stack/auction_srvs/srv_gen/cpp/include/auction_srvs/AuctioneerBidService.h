/* Auto-generated by genmsg_cpp for file /home/joaoquintas/ros_workspace/SRC/auction_methods_stack/auction_srvs/srv/AuctioneerBidService.srv */
#ifndef AUCTION_SRVS_SERVICE_AUCTIONEERBIDSERVICE_H
#define AUCTION_SRVS_SERVICE_AUCTIONEERBIDSERVICE_H
#include <string>
#include <vector>
#include <map>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/time.h"

#include "ros/macros.h"

#include "ros/assert.h"

#include "ros/service_traits.h"

#include "auction_msgs/Bid.h"



namespace auction_srvs
{
template <class ContainerAllocator>
struct AuctioneerBidServiceRequest_ {
  typedef AuctioneerBidServiceRequest_<ContainerAllocator> Type;

  AuctioneerBidServiceRequest_()
  : bid_data()
  {
  }

  AuctioneerBidServiceRequest_(const ContainerAllocator& _alloc)
  : bid_data(_alloc)
  {
  }

  typedef  ::auction_msgs::Bid_<ContainerAllocator>  _bid_data_type;
   ::auction_msgs::Bid_<ContainerAllocator>  bid_data;


private:
  static const char* __s_getDataType_() { return "auction_srvs/AuctioneerBidServiceRequest"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "cfd8f1da51fcd78c9f2cfa91a1f870ec"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "199b17765623618cee1cad5c1350560a"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
\n\
auction_msgs/Bid bid_data\n\
\n\
\n\
================================================================================\n\
MSG: auction_msgs/Bid\n\
Header header\n\
string buyer_id\n\
int64 cost_distance\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, bid_data);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, bid_data);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(bid_data);
    return size;
  }

  typedef boost::shared_ptr< ::auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AuctioneerBidServiceRequest
typedef  ::auction_srvs::AuctioneerBidServiceRequest_<std::allocator<void> > AuctioneerBidServiceRequest;

typedef boost::shared_ptr< ::auction_srvs::AuctioneerBidServiceRequest> AuctioneerBidServiceRequestPtr;
typedef boost::shared_ptr< ::auction_srvs::AuctioneerBidServiceRequest const> AuctioneerBidServiceRequestConstPtr;


template <class ContainerAllocator>
struct AuctioneerBidServiceResponse_ {
  typedef AuctioneerBidServiceResponse_<ContainerAllocator> Type;

  AuctioneerBidServiceResponse_()
  : response_info()
  {
  }

  AuctioneerBidServiceResponse_(const ContainerAllocator& _alloc)
  : response_info(_alloc)
  {
  }

  typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _response_info_type;
  std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  response_info;


private:
  static const char* __s_getDataType_() { return "auction_srvs/AuctioneerBidServiceResponse"; }
public:
  ROS_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROS_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "3807fca4b87e6d8139990870471dd195"; }
public:
  ROS_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROS_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getServerMD5Sum_() { return "199b17765623618cee1cad5c1350560a"; }
public:
  ROS_DEPRECATED static const std::string __s_getServerMD5Sum() { return __s_getServerMD5Sum_(); }

  ROS_DEPRECATED const std::string __getServerMD5Sum() const { return __s_getServerMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "\n\
\n\
\n\
string response_info\n\
\n\
"; }
public:
  ROS_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROS_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, response_info);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, response_info);
    return stream.getData();
  }

  ROS_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(response_info);
    return size;
  }

  typedef boost::shared_ptr< ::auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator>  const> ConstPtr;
  boost::shared_ptr<std::map<std::string, std::string> > __connection_header;
}; // struct AuctioneerBidServiceResponse
typedef  ::auction_srvs::AuctioneerBidServiceResponse_<std::allocator<void> > AuctioneerBidServiceResponse;

typedef boost::shared_ptr< ::auction_srvs::AuctioneerBidServiceResponse> AuctioneerBidServiceResponsePtr;
typedef boost::shared_ptr< ::auction_srvs::AuctioneerBidServiceResponse const> AuctioneerBidServiceResponseConstPtr;

struct AuctioneerBidService
{

typedef AuctioneerBidServiceRequest Request;
typedef AuctioneerBidServiceResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;
}; // struct AuctioneerBidService
} // namespace auction_srvs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "cfd8f1da51fcd78c9f2cfa91a1f870ec";
  }

  static const char* value(const  ::auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xcfd8f1da51fcd78cULL;
  static const uint64_t static_value2 = 0x9f2cfa91a1f870ecULL;
};

template<class ContainerAllocator>
struct DataType< ::auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "auction_srvs/AuctioneerBidServiceRequest";
  }

  static const char* value(const  ::auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
auction_msgs/Bid bid_data\n\
\n\
\n\
================================================================================\n\
MSG: auction_msgs/Bid\n\
Header header\n\
string buyer_id\n\
int64 cost_distance\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.secs: seconds (stamp_secs) since epoch\n\
# * stamp.nsecs: nanoseconds since stamp_secs\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
\n\
";
  }

  static const char* value(const  ::auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros


namespace ros
{
namespace message_traits
{
template<class ContainerAllocator> struct IsMessage< ::auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> > : public TrueType {};
template<class ContainerAllocator> struct IsMessage< ::auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator>  const> : public TrueType {};
template<class ContainerAllocator>
struct MD5Sum< ::auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "3807fca4b87e6d8139990870471dd195";
  }

  static const char* value(const  ::auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0x3807fca4b87e6d81ULL;
  static const uint64_t static_value2 = 0x39990870471dd195ULL;
};

template<class ContainerAllocator>
struct DataType< ::auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "auction_srvs/AuctioneerBidServiceResponse";
  }

  static const char* value(const  ::auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "\n\
\n\
\n\
string response_info\n\
\n\
";
  }

  static const char* value(const  ::auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.bid_data);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AuctioneerBidServiceRequest_
} // namespace serialization
} // namespace ros


namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.response_info);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct AuctioneerBidServiceResponse_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace service_traits
{
template<>
struct MD5Sum<auction_srvs::AuctioneerBidService> {
  static const char* value() 
  {
    return "199b17765623618cee1cad5c1350560a";
  }

  static const char* value(const auction_srvs::AuctioneerBidService&) { return value(); } 
};

template<>
struct DataType<auction_srvs::AuctioneerBidService> {
  static const char* value() 
  {
    return "auction_srvs/AuctioneerBidService";
  }

  static const char* value(const auction_srvs::AuctioneerBidService&) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "199b17765623618cee1cad5c1350560a";
  }

  static const char* value(const auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> > {
  static const char* value() 
  {
    return "auction_srvs/AuctioneerBidService";
  }

  static const char* value(const auction_srvs::AuctioneerBidServiceRequest_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct MD5Sum<auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "199b17765623618cee1cad5c1350560a";
  }

  static const char* value(const auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct DataType<auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> > {
  static const char* value() 
  {
    return "auction_srvs/AuctioneerBidService";
  }

  static const char* value(const auction_srvs::AuctioneerBidServiceResponse_<ContainerAllocator> &) { return value(); } 
};

} // namespace service_traits
} // namespace ros

#endif // AUCTION_SRVS_SERVICE_AUCTIONEERBIDSERVICE_H

