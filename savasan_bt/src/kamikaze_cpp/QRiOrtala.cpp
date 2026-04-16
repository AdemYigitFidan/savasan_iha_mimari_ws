#include "savasan_bt/kamikaze/QRiOrtala.hpp"
#include <iostream>

QRiOrtala::QRiOrtala(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList QRiOrtala::providedPorts() { return {}; }

BT::NodeStatus QRiOrtala::tick() {
    // TODO: QR'ın görüntüdeki merkez sapmasını yaw/roll düzeltmesiyle sıfıra yaklaştır.
    
    std::cout << "[Kamikaze] QR kodu görüntü merkezine ortalanıyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}