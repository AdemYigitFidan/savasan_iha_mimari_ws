#pragma once

#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include <string>

class ToleransSayaciniIlerlet : public BT::SyncActionNode
{
public:
    ToleransSayaciniIlerlet(const std::string& name, const BT::NodeConfig& config);
    static BT::PortsList providedPorts();
    BT::NodeStatus tick() override;
};