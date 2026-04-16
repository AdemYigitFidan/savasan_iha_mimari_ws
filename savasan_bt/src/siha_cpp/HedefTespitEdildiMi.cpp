#include "savasan_bt/siha/HedefTespitEdildiMi.hpp"
#include <iostream>

HedefTespitEdildiMi::HedefTespitEdildiMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList HedefTespitEdildiMi::providedPorts() { return {}; }

BT::NodeStatus HedefTespitEdildiMi::tick() {
    // TODO: YOLO (paketindeki) topic'inden düşman İHA tespit edildi mi kontrol et.
    
    std::cout << "[Siha] Hedef tespiti kontrol ediliyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}