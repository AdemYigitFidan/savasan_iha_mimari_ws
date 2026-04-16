#include "savasan_bt/kamikaze/QRGoruntudeMi.hpp"
#include <iostream>

QRGoruntudeMi::QRGoruntudeMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList QRGoruntudeMi::providedPorts() { return {}; }

BT::NodeStatus QRGoruntudeMi::tick() {
    // TODO: Kamera görüntüsünde QR kod tespit edildi mi kontrol et.
    
    std::cout << "[Kamikaze] QR kod kamerada aranıyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}