#include "savasan_bt/siha/KilitlenmeSayaciniIlerlet.hpp"
#include <iostream>

KilitlenmeSayaciniIlerlet::KilitlenmeSayaciniIlerlet(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList KilitlenmeSayaciniIlerlet::providedPorts() { return {}; }

BT::NodeStatus KilitlenmeSayaciniIlerlet::tick() {
    // TODO: Kilitlenme sayacına delta süre ekle.
    
    std::cout << "[Siha] Kilitlenme sayacı ilerletiliyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}