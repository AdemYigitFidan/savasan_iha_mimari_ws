#pragma once

#include "behaviortree_cpp/action_node.h"
#include "rclcpp/rclcpp.hpp"
#include <string>

class SonVurulanHedefiKaydet : public BT::SyncActionNode
{
public:
    SonVurulanHedefiKaydet(const std::string& name, const BT::NodeConfig& config);
    static BT::PortsList providedPorts();
    BT::NodeStatus tick() override;
};