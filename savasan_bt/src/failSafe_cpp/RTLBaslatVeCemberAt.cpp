#include "savasan_bt/failSafe/RTLBaslatVeCemberAt.hpp"
#include <iostream>

RTLBaslatVeCemberAt::RTLBaslatVeCemberAt(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList RTLBaslatVeCemberAt::providedPorts() { return {}; }

BT::NodeStatus RTLBaslatVeCemberAt::tick() {
    // TODO: MAVROS ile RTL moduna geç, eve döndükten sonra loiter komutu gönder.
    
    std::cout << "[FailSafe] Haberleşme koptu, RTL başlatildi ve çember atiliyor." << std::endl;
    return BT::NodeStatus::SUCCESS;
}