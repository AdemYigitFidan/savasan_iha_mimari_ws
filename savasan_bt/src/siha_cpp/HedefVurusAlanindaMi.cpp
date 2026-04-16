#include "savasan_bt/siha/HedefVurusAlanindaMi.hpp"
#include <iostream>

HedefVurusAlanindaMi::HedefVurusAlanindaMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList HedefVurusAlanindaMi::providedPorts() { return {}; }

BT::NodeStatus HedefVurusAlanindaMi::tick() {
    // TODO: Hedef kilitlenme kutusunun içinde mi (bbox merkez ve boyut kriterleri) kontrol et.
    
    std::cout << "[Siha] Hedef vuruş alanında mı kontrol ediliyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}