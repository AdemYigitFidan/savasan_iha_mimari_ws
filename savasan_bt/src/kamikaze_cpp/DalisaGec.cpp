#include "savasan_bt/kamikaze/DalisaGec.hpp"
#include <iostream>

DalisaGec::DalisaGec(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList DalisaGec::providedPorts() { return {}; }

BT::NodeStatus DalisaGec::tick() {
    // TODO: Burun aşağı pitch ayarıyla dalış başlatma komutu gönder.
    
    std::cout << "[Kamikaze] Dalış manevrasına geçiliyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}