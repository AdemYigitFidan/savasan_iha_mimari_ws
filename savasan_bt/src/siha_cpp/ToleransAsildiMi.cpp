#include "savasan_bt/siha/ToleransAsildiMi.hpp"
#include <iostream>

ToleransAsildiMi::ToleransAsildiMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList ToleransAsildiMi::providedPorts() { return {}; }

BT::NodeStatus ToleransAsildiMi::tick() {
    // TODO: Tolerans sayacı eşik değeri aştı mı kontrol et.
    
    std::cout << "[Siha] Tolerans sayacı kontrol ediliyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}