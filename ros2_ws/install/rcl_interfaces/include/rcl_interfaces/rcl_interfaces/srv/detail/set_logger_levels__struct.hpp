// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from rcl_interfaces:srv/SetLoggerLevels.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "rcl_interfaces/srv/set_logger_levels.hpp"


#ifndef RCL_INTERFACES__SRV__DETAIL__SET_LOGGER_LEVELS__STRUCT_HPP_
#define RCL_INTERFACES__SRV__DETAIL__SET_LOGGER_LEVELS__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


// Include directives for member types
// Member 'levels'
#include "rcl_interfaces/msg/detail/logger_level__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Request __attribute__((deprecated))
#else
# define DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Request __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLoggerLevels_Request_
{
  using Type = SetLoggerLevels_Request_<ContainerAllocator>;

  explicit SetLoggerLevels_Request_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetLoggerLevels_Request_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _levels_type =
    std::vector<rcl_interfaces::msg::LoggerLevel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::LoggerLevel_<ContainerAllocator>>>;
  _levels_type levels;

  // setters for named parameter idiom
  Type & set__levels(
    const std::vector<rcl_interfaces::msg::LoggerLevel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::LoggerLevel_<ContainerAllocator>>> & _arg)
  {
    this->levels = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Request
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Request
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLoggerLevels_Request_ & other) const
  {
    if (this->levels != other.levels) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLoggerLevels_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLoggerLevels_Request_

// alias to use template instance with default allocator
using SetLoggerLevels_Request =
  rcl_interfaces::srv::SetLoggerLevels_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rcl_interfaces


// Include directives for member types
// Member 'results'
#include "rcl_interfaces/msg/detail/set_logger_levels_result__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Response __attribute__((deprecated))
#else
# define DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Response __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLoggerLevels_Response_
{
  using Type = SetLoggerLevels_Response_<ContainerAllocator>;

  explicit SetLoggerLevels_Response_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
  }

  explicit SetLoggerLevels_Response_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_init;
    (void)_alloc;
  }

  // field types and members
  using _results_type =
    std::vector<rcl_interfaces::msg::SetLoggerLevelsResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::SetLoggerLevelsResult_<ContainerAllocator>>>;
  _results_type results;

  // setters for named parameter idiom
  Type & set__results(
    const std::vector<rcl_interfaces::msg::SetLoggerLevelsResult_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::msg::SetLoggerLevelsResult_<ContainerAllocator>>> & _arg)
  {
    this->results = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Response
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Response
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLoggerLevels_Response_ & other) const
  {
    if (this->results != other.results) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLoggerLevels_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLoggerLevels_Response_

// alias to use template instance with default allocator
using SetLoggerLevels_Response =
  rcl_interfaces::srv::SetLoggerLevels_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rcl_interfaces


// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Event __attribute__((deprecated))
#else
# define DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Event __declspec(deprecated)
#endif

namespace rcl_interfaces
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct SetLoggerLevels_Event_
{
  using Type = SetLoggerLevels_Event_<ContainerAllocator>;

  explicit SetLoggerLevels_Event_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_init)
  {
    (void)_init;
  }

  explicit SetLoggerLevels_Event_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : info(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _info_type =
    service_msgs::msg::ServiceEventInfo_<ContainerAllocator>;
  _info_type info;
  using _request_type =
    rosidl_runtime_cpp::BoundedVector<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator>>>;
  _request_type request;
  using _response_type =
    rosidl_runtime_cpp::BoundedVector<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator>>>;
  _response_type response;

  // setters for named parameter idiom
  Type & set__info(
    const service_msgs::msg::ServiceEventInfo_<ContainerAllocator> & _arg)
  {
    this->info = _arg;
    return *this;
  }
  Type & set__request(
    const rosidl_runtime_cpp::BoundedVector<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::srv::SetLoggerLevels_Request_<ContainerAllocator>>> & _arg)
  {
    this->request = _arg;
    return *this;
  }
  Type & set__response(
    const rosidl_runtime_cpp::BoundedVector<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator>, 1, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<rcl_interfaces::srv::SetLoggerLevels_Response_<ContainerAllocator>>> & _arg)
  {
    this->response = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator> *;
  using ConstRawPtr =
    const rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Event
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__rcl_interfaces__srv__SetLoggerLevels_Event
    std::shared_ptr<rcl_interfaces::srv::SetLoggerLevels_Event_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const SetLoggerLevels_Event_ & other) const
  {
    if (this->info != other.info) {
      return false;
    }
    if (this->request != other.request) {
      return false;
    }
    if (this->response != other.response) {
      return false;
    }
    return true;
  }
  bool operator!=(const SetLoggerLevels_Event_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct SetLoggerLevels_Event_

// alias to use template instance with default allocator
using SetLoggerLevels_Event =
  rcl_interfaces::srv::SetLoggerLevels_Event_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace rcl_interfaces

namespace rcl_interfaces
{

namespace srv
{

struct SetLoggerLevels
{
  using Request = rcl_interfaces::srv::SetLoggerLevels_Request;
  using Response = rcl_interfaces::srv::SetLoggerLevels_Response;
  using Event = rcl_interfaces::srv::SetLoggerLevels_Event;
};

}  // namespace srv

}  // namespace rcl_interfaces

#endif  // RCL_INTERFACES__SRV__DETAIL__SET_LOGGER_LEVELS__STRUCT_HPP_