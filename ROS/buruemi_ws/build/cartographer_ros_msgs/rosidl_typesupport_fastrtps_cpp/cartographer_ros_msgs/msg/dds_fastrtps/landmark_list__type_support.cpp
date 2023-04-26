// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from cartographer_ros_msgs:msg/LandmarkList.idl
// generated code does not contain a copyright notice
#include "cartographer_ros_msgs/msg/landmark_list__rosidl_typesupport_fastrtps_cpp.hpp"
#include "cartographer_ros_msgs/msg/landmark_list__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace std_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const std_msgs::msg::Header &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  std_msgs::msg::Header &);
size_t get_serialized_size(
  const std_msgs::msg::Header &,
  size_t current_alignment);
size_t
max_serialized_size_Header(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace std_msgs

namespace cartographer_ros_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const cartographer_ros_msgs::msg::LandmarkEntry &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  cartographer_ros_msgs::msg::LandmarkEntry &);
size_t get_serialized_size(
  const cartographer_ros_msgs::msg::LandmarkEntry &,
  size_t current_alignment);
size_t
max_serialized_size_LandmarkEntry(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace cartographer_ros_msgs


namespace cartographer_ros_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
cdr_serialize(
  const cartographer_ros_msgs::msg::LandmarkList & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.header,
    cdr);
  // Member: landmark
  {
    size_t size = ros_message.landmark.size();
    cdr << static_cast<uint32_t>(size);
    for (size_t i = 0; i < size; i++) {
      cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.landmark[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  cartographer_ros_msgs::msg::LandmarkList & ros_message)
{
  // Member: header
  std_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.header);

  // Member: landmark
  {
    uint32_t cdrSize;
    cdr >> cdrSize;
    size_t size = static_cast<size_t>(cdrSize);
    ros_message.landmark.resize(size);
    for (size_t i = 0; i < size; i++) {
      cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr, ros_message.landmark[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
get_serialized_size(
  const cartographer_ros_msgs::msg::LandmarkList & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: header

  current_alignment +=
    std_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.header, current_alignment);
  // Member: landmark
  {
    size_t array_size = ros_message.landmark.size();

    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.landmark[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_cartographer_ros_msgs
max_serialized_size_LandmarkList(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: header
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        std_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Header(
        full_bounded, current_alignment);
    }
  }

  // Member: landmark
  {
    size_t array_size = 0;
    full_bounded = false;
    current_alignment += padding +
      eprosima::fastcdr::Cdr::alignment(current_alignment, padding);


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LandmarkEntry(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LandmarkList__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const cartographer_ros_msgs::msg::LandmarkList *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LandmarkList__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<cartographer_ros_msgs::msg::LandmarkList *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LandmarkList__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const cartographer_ros_msgs::msg::LandmarkList *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LandmarkList__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LandmarkList(full_bounded, 0);
}

static message_type_support_callbacks_t _LandmarkList__callbacks = {
  "cartographer_ros_msgs::msg",
  "LandmarkList",
  _LandmarkList__cdr_serialize,
  _LandmarkList__cdr_deserialize,
  _LandmarkList__get_serialized_size,
  _LandmarkList__max_serialized_size
};

static rosidl_message_type_support_t _LandmarkList__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LandmarkList__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace cartographer_ros_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_cartographer_ros_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<cartographer_ros_msgs::msg::LandmarkList>()
{
  return &cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::_LandmarkList__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, cartographer_ros_msgs, msg, LandmarkList)() {
  return &cartographer_ros_msgs::msg::typesupport_fastrtps_cpp::_LandmarkList__handle;
}

#ifdef __cplusplus
}
#endif
