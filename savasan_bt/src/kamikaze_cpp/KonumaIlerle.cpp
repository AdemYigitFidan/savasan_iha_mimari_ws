#include "savasan_bt/kamikaze/KonumaIlerle.hpp"
#include <iostream>

KonumaIlerle::KonumaIlerle(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList KonumaIlerle::providedPorts() { return {}; }

BT::NodeStatus KonumaIlerle::tick() {
    // TODO: QR hedef koordinatına doğru waypoint gönder.
    
    std::cout << "[Kamikaze] Hedef konuma ilerleniyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}