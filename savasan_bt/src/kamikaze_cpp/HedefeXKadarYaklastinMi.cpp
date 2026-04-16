#include "savasan_bt/kamikaze/HedefeXKadarYaklastinMi.hpp"
#include <iostream>

HedefeXKadarYaklastinMi::HedefeXKadarYaklastinMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList HedefeXKadarYaklastinMi::providedPorts() { return {}; }

BT::NodeStatus HedefeXKadarYaklastinMi::tick() {
    // TODO: Hedefe olan mesafe vuruş eşiğinin altına indi mi kontrol et.
    
    std::cout << "[Kamikaze] Hedefe yakınlık mesafesi kontrol ediliyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}