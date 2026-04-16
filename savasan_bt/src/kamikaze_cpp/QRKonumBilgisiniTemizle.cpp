#include "savasan_bt/kamikaze/QRKonumBilgisiniTemizle.hpp"
#include <iostream>

QRKonumBilgisiniTemizle::QRKonumBilgisiniTemizle(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList QRKonumBilgisiniTemizle::providedPorts() { return {}; }

BT::NodeStatus QRKonumBilgisiniTemizle::tick() {
    // TODO: Blackboard'daki QR hedef koordinatını sil, kamikaze görevini deaktif et.
    
    std::cout << "[Kamikaze] QR konum bilgisi temizleniyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}