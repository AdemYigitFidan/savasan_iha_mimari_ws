#include "savasan_bt/siha/SonVurulanHedefiKaydet.hpp"
#include <iostream>

SonVurulanHedefiKaydet::SonVurulanHedefiKaydet(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList SonVurulanHedefiKaydet::providedPorts() { return {}; }

BT::NodeStatus SonVurulanHedefiKaydet::tick() {
    // TODO: Vurulan hedefin ID'sini aynı hedefi tekrar kilitlemeyi önlemek için kaydet.
    
    std::cout << "[Siha] Son vurulan hedef kaydediliyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}