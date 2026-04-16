#include "savasan_bt/siha/HedefiOrtala.hpp"
#include <iostream>

HedefiOrtala::HedefiOrtala(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList HedefiOrtala::providedPorts() { return {}; }

BT::NodeStatus HedefiOrtala::tick() {
    // TODO: Hedefin bbox merkezine yaw/pitch komutlarıyla uçağı hizala.
    
    std::cout << "[Siha] Hedef görüntüye ortalanıyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}