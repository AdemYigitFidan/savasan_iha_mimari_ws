#include "savasan_bt/failSafe/KirmiziAlanaGirdinMi.hpp"
#include <iostream>

KirmiziAlanaGirdinMi::KirmiziAlanaGirdinMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList KirmiziAlanaGirdinMi::providedPorts() { return {}; }

BT::NodeStatus KirmiziAlanaGirdinMi::tick() {
    // TODO: Mevcut GPS konumu kırmızı alannın içinde mi kontrol et.
    
    std::cout << "[FailSafe] Kirmizi alan siniri kontrol ediliyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}