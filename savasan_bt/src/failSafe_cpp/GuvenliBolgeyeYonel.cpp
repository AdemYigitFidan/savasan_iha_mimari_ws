#include "savasan_bt/failSafe/GuvenliBolgeyeYonel.hpp"
#include <iostream>

GuvenliBolgeyeYonel::GuvenliBolgeyeYonel(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList GuvenliBolgeyeYonel::providedPorts() { return {}; }

BT::NodeStatus GuvenliBolgeyeYonel::tick() {
    // TODO: Geofence içindeki güvenli bir waypoint'e yönel, irtifayı aralığa çek.
    
    std::cout << "[FailSafe] Sınır ihlali, güvenli bölgeye dönülüyor." << std::endl;
    return BT::NodeStatus::SUCCESS;
}