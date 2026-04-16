#include "savasan_bt/siha/ToleransSayaciniIlerlet.hpp"
#include <iostream>

ToleransSayaciniIlerlet::ToleransSayaciniIlerlet(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList ToleransSayaciniIlerlet::providedPorts() { return {}; }

BT::NodeStatus ToleransSayaciniIlerlet::tick() {
    // TODO: Tolerans sayacına delta süre ekle.
    
    std::cout << "[Siha] Tolerans sayacı ilerletiliyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}