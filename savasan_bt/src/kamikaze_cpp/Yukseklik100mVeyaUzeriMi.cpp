#include "savasan_bt/kamikaze/Yukseklik100mVeyaUzeriMi.hpp"
#include <iostream>

Yukseklik100mVeyaUzeriMi::Yukseklik100mVeyaUzeriMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList Yukseklik100mVeyaUzeriMi::providedPorts() { return {}; }

BT::NodeStatus Yukseklik100mVeyaUzeriMi::tick() {
    // TODO: Mevcut irtifa 100m ve üzerinde mi kontrol et.
    
    std::cout << "[Kamikaze] 100m irtifa kontrolü yapılıyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}