#include "savasan_bt/siha/IstasyonaPaketiGonder.hpp"
#include <iostream>

IstasyonaPaketiGonder::IstasyonaPaketiGonder(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList IstasyonaPaketiGonder::providedPorts() { return {}; }

BT::NodeStatus IstasyonaPaketiGonder::tick() {
    // TODO: Kilitlenme bilgilerini yer istasyonuna HTTP ile gönder.
    
    std::cout << "[Siha] Kilitlenme paketi istasyona gönderiliyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}