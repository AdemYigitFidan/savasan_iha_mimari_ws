#include "savasan_bt/failSafe/SinirVeyaIrtifaAsildiMi.hpp"
#include <iostream>

SinirVeyaIrtifaAsildiMi::SinirVeyaIrtifaAsildiMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList SinirVeyaIrtifaAsildiMi::providedPorts() { return {}; }

BT::NodeStatus SinirVeyaIrtifaAsildiMi::tick() {
    // TODO: Geofence sınırlarını ve min/max irtifayı kontrol et, aşıldıysa SUCCESS dön.
    
    std::cout << "[FailSafe] Sinir ve irtifa değerleri kontrol ediliyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}