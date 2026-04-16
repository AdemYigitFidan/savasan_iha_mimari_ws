#include "savasan_bt/kalkis/Yuksekligi10mArttir.hpp"
#include <iostream>

Yuksekligi10mArttir::Yuksekligi10mArttir(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList Yuksekligi10mArttir::providedPorts() { return {}; }

BT::NodeStatus Yuksekligi10mArttir::tick() {
    // TODO: Hedef irtifayı 10m arttır(yeni setpoint atarak veya başka bir şekilde)
    
    std::cout << "[Kalkis] İrtifa 10 metre arttırılıyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}