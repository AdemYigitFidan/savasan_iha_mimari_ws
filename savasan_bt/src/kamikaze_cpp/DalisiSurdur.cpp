#include "savasan_bt/kamikaze/DalisiSurdur.hpp"
#include <iostream>

DalisiSurdur::DalisiSurdur(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList DalisiSurdur::providedPorts() { return {}; }

BT::NodeStatus DalisiSurdur::tick() {
    // TODO: Mevcut dalış açı ve yönüyle alçalmaya devam et.
    
    std::cout << "[Kamikaze] Dalış sürdürülüyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}