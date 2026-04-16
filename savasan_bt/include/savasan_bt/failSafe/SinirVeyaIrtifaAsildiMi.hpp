#pragma once

#include "behaviortree_cpp/condition_node.h"
#include "rclcpp/rclcpp.hpp"
#include <string>

class SinirVeyaIrtifaAsildiMi : public BT::ConditionNode
{
public:
    SinirVeyaIrtifaAsildiMi(const std::string& name, const BT::NodeConfig& config);
    static BT::PortsList providedPorts();
    BT::NodeStatus tick() override;
};