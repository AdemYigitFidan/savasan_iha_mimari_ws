#include "savasan_bt/siha/GoreviSonlandir.hpp"
#include <iostream>

GoreviSonlandir::GoreviSonlandir(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList GoreviSonlandir::providedPorts() { return {}; }

BT::NodeStatus GoreviSonlandir::tick() {
    // TODO: Görev flagini kapat, RTL veya iniş için üst kata sinyal gönder.
    
    std::cout << "[Siha] Görev sonlandırılıyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}