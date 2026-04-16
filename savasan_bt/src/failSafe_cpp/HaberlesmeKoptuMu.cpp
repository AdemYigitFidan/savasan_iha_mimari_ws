#include "savasan_bt/failSafe/HaberlesmeKoptuMu.hpp"
#include <iostream>

HaberlesmeKoptuMu::HaberlesmeKoptuMu(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList HaberlesmeKoptuMu::providedPorts() { return {}; }

BT::NodeStatus HaberlesmeKoptuMu::tick() {
    // TODO: Yer istasyonundan bağlantıyı kontrol et, süre aşıldıysa SUCCESS dön.
    
    std::cout << "[FailSafe] Haberleşme durumu kontrol ediliyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}