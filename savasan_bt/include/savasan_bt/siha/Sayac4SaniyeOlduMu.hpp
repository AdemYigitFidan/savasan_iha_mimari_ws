#pragma once

#include "behaviortree_cpp/condition_node.h"
#include "rclcpp/rclcpp.hpp"
#include <string>

class Sayac4SaniyeOlduMu : public BT::ConditionNode
{
public:
    Sayac4SaniyeOlduMu(const std::string& name, const BT::NodeConfig& config);
    static BT::PortsList providedPorts();
    BT::NodeStatus tick() override;
};