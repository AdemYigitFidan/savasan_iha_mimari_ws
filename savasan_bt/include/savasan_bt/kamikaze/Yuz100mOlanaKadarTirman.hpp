#pragma once

#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include <string>

class Yuz100mOlanaKadarTirman : public BT::SyncActionNode
{
public:
    Yuz100mOlanaKadarTirman(const std::string& name, const BT::NodeConfig& config);
    static BT::PortsList providedPorts();
    BT::NodeStatus tick() override;
};