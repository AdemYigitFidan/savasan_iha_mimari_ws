#include "savasan_bt/kalkis/YeterliYukseklikteMi.hpp"
#include <iostream>

YeterliYukseklikteMi::YeterliYukseklikteMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList YeterliYukseklikteMi::providedPorts() { return {}; }

BT::NodeStatus YeterliYukseklikteMi::tick() {
    // TODO: Anlık irtifa 10m ve üzerinde mi kontrol et.
    
    std::cout << "[Kalkis] Yeterli irtifaya ulaşıldı mı kontrol ediliyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}