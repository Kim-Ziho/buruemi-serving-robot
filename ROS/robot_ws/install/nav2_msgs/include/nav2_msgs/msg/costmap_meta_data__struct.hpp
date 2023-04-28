// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from nav2_msgs:msg/CostmapMetaData.idl
// generated code does not contain a copyright notice

#ifndef NAV2_MSGS__MSG__COSTMAP_META_DATA__STRUCT_HPP_
#define NAV2_MSGS__MSG__COSTMAP_META_DATA__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

// Protect against ERROR being predefined on Windows, in case somebody defines a
// constant by that name.
#if defined(_WIN32)
  #if defined(ERROR)
    #undef ERROR
  #endif
  #if defined(NO_ERROR)
    #undef NO_ERROR
  #endif
#endif

// Include directives for member types
// Member 'map_load_time'
// Member 'update_time'
#include "builtin_interfaces/msg/time__struct.hpp"
// Member 'origin'
#include "geometry_msgs/msg/pose__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__nav2_msgs__msg__CostmapMetaData __attribute__((deprecated))
#else
# define DEPRECATED__nav2_msgs__msg__CostmapMetaData __declspec(deprecated)
#endif

namespace nav2_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CostmapMetaData_
{
  using Type = CostmapMetaData_<ContainerAllocator>;

  explicit CostmapMetaData_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : map_load_time(_init),
    update_time(_init),
    origin(_init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->layer = "";
      this->resolution = 0.0f;
      this->size_x = 0ul;
      this->size_y = 0ul;
    }
  }

  explicit CostmapMetaData_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : map_load_time(_alloc, _init),
    update_time(_alloc, _init),
    layer(_alloc),
    origin(_alloc, _init)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->layer = "";
      this->resolution = 0.0f;
      this->size_x = 0ul;
      this->size_y = 0ul;
    }
  }

  // field types and members
  using _map_load_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _map_load_time_type map_load_time;
  using _update_time_type =
    builtin_interfaces::msg::Time_<ContainerAllocator>;
  _update_time_type update_time;
  using _layer_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _layer_type layer;
  using _resolution_type =
    float;
  _resolution_type resolution;
  using _size_x_type =
    uint32_t;
  _size_x_type size_x;
  using _size_y_type =
    uint32_t;
  _size_y_type size_y;
  using _origin_type =
    geometry_msgs::msg::Pose_<ContainerAllocator>;
  _origin_type origin;

  // setters for named parameter idiom
  Type & set__map_load_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->map_load_time = _arg;
    return *this;
  }
  Type & set__update_time(
    const builtin_interfaces::msg::Time_<ContainerAllocator> & _arg)
  {
    this->update_time = _arg;
    return *this;
  }
  Type & set__layer(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->layer = _arg;
    return *this;
  }
  Type & set__resolution(
    const float & _arg)
  {
    this->resolution = _arg;
    return *this;
  }
  Type & set__size_x(
    const uint32_t & _arg)
  {
    this->size_x = _arg;
    return *this;
  }
  Type & set__size_y(
    const uint32_t & _arg)
  {
    this->size_y = _arg;
    return *this;
  }
  Type & set__origin(
    const geometry_msgs::msg::Pose_<ContainerAllocator> & _arg)
  {
    this->origin = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    nav2_msgs::msg::CostmapMetaData_<ContainerAllocator> *;
  using ConstRawPtr =
    const nav2_msgs::msg::CostmapMetaData_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<nav2_msgs::msg::CostmapMetaData_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<nav2_msgs::msg::CostmapMetaData_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CostmapMetaData_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CostmapMetaData_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      nav2_msgs::msg::CostmapMetaData_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<nav2_msgs::msg::CostmapMetaData_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<nav2_msgs::msg::CostmapMetaData_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<nav2_msgs::msg::CostmapMetaData_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__nav2_msgs__msg__CostmapMetaData
    std::shared_ptr<nav2_msgs::msg::CostmapMetaData_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__nav2_msgs__msg__CostmapMetaData
    std::shared_ptr<nav2_msgs::msg::CostmapMetaData_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CostmapMetaData_ & other) const
  {
    if (this->map_load_time != other.map_load_time) {
      return false;
    }
    if (this->update_time != other.update_time) {
      return false;
    }
    if (this->layer != other.layer) {
      return false;
    }
    if (this->resolution != other.resolution) {
      return false;
    }
    if (this->size_x != other.size_x) {
      return false;
    }
    if (this->size_y != other.size_y) {
      return false;
    }
    if (this->origin != other.origin) {
      return false;
    }
    return true;
  }
  bool operator!=(const CostmapMetaData_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CostmapMetaData_

// alias to use template instance with default allocator
using CostmapMetaData =
  nav2_msgs::msg::CostmapMetaData_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace nav2_msgs

#endif  // NAV2_MSGS__MSG__COSTMAP_META_DATA__STRUCT_HPP_