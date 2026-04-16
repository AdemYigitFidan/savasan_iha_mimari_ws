#pragma once

#include "behaviortree_cpp/condition_node.h"
#include "rclcpp/rclcpp.hpp"
#include <string>

class Yukseklik100mVeyaUzeriMi : public BT::ConditionNode
{
public:
    Yukseklik100mVeyaUzeriMi(const std::string& name, const BT::NodeConfig& config);
    static BT::PortsList providedPorts();
    BT::NodeStatus tick() override;
};