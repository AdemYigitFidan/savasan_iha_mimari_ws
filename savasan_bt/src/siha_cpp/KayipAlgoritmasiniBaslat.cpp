#include "savasan_bt/siha/KayipAlgoritmasiniBaslat.hpp"
#include <iostream>

KayipAlgoritmasiniBaslat::KayipAlgoritmasiniBaslat(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList KayipAlgoritmasiniBaslat::providedPorts() { return {}; }

BT::NodeStatus KayipAlgoritmasiniBaslat::tick() {
    // TODO: Hedefin son görüldüğü konuma spiral veya gimbal taraması başlat.
    
    std::cout << "[Siha] Kayıp arama manevrası başlatılıyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}