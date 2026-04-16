#pragma once

#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include <string>

class KilitlenmeSayaciniIlerlet : public BT::SyncActionNode
{
public:
    KilitlenmeSayaciniIlerlet(const std::string& name, const BT::NodeConfig& config);
    static BT::PortsList providedPorts();
    BT::NodeStatus tick() override;
};