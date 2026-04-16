#pragma once

#include "behaviortree_cpp/condition_node.h"
#include "rclcpp/rclcpp.hpp"
#include <string>

class KirmiziAlanaGirdinMi : public BT::ConditionNode
{
public:
    KirmiziAlanaGirdinMi(const std::string& name, const BT::NodeConfig& config);
    static BT::PortsList providedPorts();
    BT::NodeStatus tick() override;
};