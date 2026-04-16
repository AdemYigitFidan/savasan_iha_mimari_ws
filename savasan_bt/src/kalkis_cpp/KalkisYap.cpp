#include "savasan_bt/kalkis/KalkisYap.hpp"
#include <iostream>

KalkisYap::KalkisYap(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList KalkisYap::providedPorts() { return {}; }

BT::NodeStatus KalkisYap::tick() {
    // TODO: MAVROS ile ARM + AUTO.TAKEOFF komutu gönder.
    
    std::cout << "[Kalkis] Otonom kalkiş başlatiliyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}