#include "savasan_bt/siha/TumSayaclariSifirla.hpp"
#include <iostream>

TumSayaclariSifirla::TumSayaclariSifirla(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList TumSayaclariSifirla::providedPorts() { return {}; }

BT::NodeStatus TumSayaclariSifirla::tick() {
    // TODO: Kilitlenme ve tolerans sayaçlarını sıfırla.
    
    std::cout << "[Siha] Tüm sayaçlar sıfırlanıyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}