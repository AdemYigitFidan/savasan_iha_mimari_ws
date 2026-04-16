#pragma once

#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include <string>

class RTLBaslatVeCemberAt : public BT::SyncActionNode
{
public:
    RTLBaslatVeCemberAt(const std::string& name, const BT::NodeConfig& config);
    static BT::PortsList providedPorts();
    BT::NodeStatus tick() override;
};