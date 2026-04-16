#pragma once

#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include <string>

class GuvenliBolgeyeYonel : public BT::SyncActionNode
{
public:
    GuvenliBolgeyeYonel(const std::string& name, const BT::NodeConfig& config);
    static BT::PortsList providedPorts();
    BT::NodeStatus tick() override;
};