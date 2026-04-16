#include "savasan_bt/siha/HedefAramayiAktiflestir.hpp"
#include <iostream>

HedefAramayiAktiflestir::HedefAramayiAktiflestir(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList HedefAramayiAktiflestir::providedPorts() { return {}; }

BT::NodeStatus HedefAramayiAktiflestir::tick() {
    // TODO: YOLO detector node'unu aktifleştir, arama modu flagini set et.
    
    std::cout << "[Siha] Hedef arama modu aktifleştiriliyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}