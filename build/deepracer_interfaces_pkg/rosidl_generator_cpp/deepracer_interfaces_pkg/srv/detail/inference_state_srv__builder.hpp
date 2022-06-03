// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from deepracer_interfaces_pkg:srv/InferenceStateSrv.idl
// generated code does not contain a copyright notice

#ifndef DEEPRACER_INTERFACES_PKG__SRV__DETAIL__INFERENCE_STATE_SRV__BUILDER_HPP_
#define DEEPRACER_INTERFACES_PKG__SRV__DETAIL__INFERENCE_STATE_SRV__BUILDER_HPP_

#include "deepracer_interfaces_pkg/srv/detail/inference_state_srv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace deepracer_interfaces_pkg
{

namespace srv
{

namespace builder
{

class Init_InferenceStateSrv_Request_task_type
{
public:
  explicit Init_InferenceStateSrv_Request_task_type(::deepracer_interfaces_pkg::srv::InferenceStateSrv_Request & msg)
  : msg_(msg)
  {}
  ::deepracer_interfaces_pkg::srv::InferenceStateSrv_Request task_type(::deepracer_interfaces_pkg::srv::InferenceStateSrv_Request::_task_type_type arg)
  {
    msg_.task_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deepracer_interfaces_pkg::srv::InferenceStateSrv_Request msg_;
};

class Init_InferenceStateSrv_Request_start
{
public:
  Init_InferenceStateSrv_Request_start()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_InferenceStateSrv_Request_task_type start(::deepracer_interfaces_pkg::srv::InferenceStateSrv_Request::_start_type arg)
  {
    msg_.start = std::move(arg);
    return Init_InferenceStateSrv_Request_task_type(msg_);
  }

private:
  ::deepracer_interfaces_pkg::srv::InferenceStateSrv_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::deepracer_interfaces_pkg::srv::InferenceStateSrv_Request>()
{
  return deepracer_interfaces_pkg::srv::builder::Init_InferenceStateSrv_Request_start();
}

}  // namespace deepracer_interfaces_pkg


namespace deepracer_interfaces_pkg
{

namespace srv
{

namespace builder
{

class Init_InferenceStateSrv_Response_error
{
public:
  Init_InferenceStateSrv_Response_error()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::deepracer_interfaces_pkg::srv::InferenceStateSrv_Response error(::deepracer_interfaces_pkg::srv::InferenceStateSrv_Response::_error_type arg)
  {
    msg_.error = std::move(arg);
    return std::move(msg_);
  }

private:
  ::deepracer_interfaces_pkg::srv::InferenceStateSrv_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::deepracer_interfaces_pkg::srv::InferenceStateSrv_Response>()
{
  return deepracer_interfaces_pkg::srv::builder::Init_InferenceStateSrv_Response_error();
}

}  // namespace deepracer_interfaces_pkg

#endif  // DEEPRACER_INTERFACES_PKG__SRV__DETAIL__INFERENCE_STATE_SRV__BUILDER_HPP_
