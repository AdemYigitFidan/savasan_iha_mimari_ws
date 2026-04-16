#include "savasan_bt/kamikaze/OtonomInis.hpp"
#include <iostream>

OtonomInis::OtonomInis(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList OtonomInis::providedPorts() { return {}; }

BT::NodeStatus OtonomInis::tick() {
    // TODO: MAVROS ile AUTO.LAND modunu aktive et.
    
    std::cout << "[Kamikaze] Otonom iniş başlatılıyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}