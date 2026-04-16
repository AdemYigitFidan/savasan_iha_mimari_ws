#include "savasan_bt/siha/SerbestUcusYap.hpp"
#include <iostream>

SerbestUcusYap::SerbestUcusYap(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList SerbestUcusYap::providedPorts() { return {}; }

BT::NodeStatus SerbestUcusYap::tick() {
    // TODO: Devriye uçuş paterni (lawnmower/loiter) komutu gönder.
    
    std::cout << "[Siha] Serbest devriye uçuşu yapılıyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}