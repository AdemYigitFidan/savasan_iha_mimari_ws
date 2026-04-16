#include "savasan_bt/kamikaze/Yukseklik10mVeyaUzeriMi.hpp"
#include <iostream>

Yukseklik10mVeyaUzeriMi::Yukseklik10mVeyaUzeriMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList Yukseklik10mVeyaUzeriMi::providedPorts() { return {}; }

BT::NodeStatus Yukseklik10mVeyaUzeriMi::tick() {
    // TODO: Mevcut irtifa 10m'nin üzerinde mi kontrol et, altındaysa iniş yapılmalı.
    
    std::cout << "[Kamikaze] 10m irtifa kontrolü yapılıyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}