#include "savasan_bt/siha/HedefTekrarGoruntudeMi.hpp"
#include <iostream>

HedefTekrarGoruntudeMi::HedefTekrarGoruntudeMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList HedefTekrarGoruntudeMi::providedPorts() { return {}; }

BT::NodeStatus HedefTekrarGoruntudeMi::tick() {
    // TODO: Geçici kaybolan hedef görüntüye geri girdi mi kontrol et.
    
    std::cout << "[Siha] Hedef görüntüye geri döndü mü kontrol ediliyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}