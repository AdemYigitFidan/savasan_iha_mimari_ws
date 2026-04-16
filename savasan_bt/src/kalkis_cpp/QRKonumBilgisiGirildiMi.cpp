#include "savasan_bt/kalkis/QRKonumBilgisiGirildiMi.hpp"
#include <iostream>

QRKonumBilgisiGirildiMi::QRKonumBilgisiGirildiMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList QRKonumBilgisiGirildiMi::providedPorts() { return {}; }

BT::NodeStatus QRKonumBilgisiGirildiMi::tick() {
    // TODO: Yer istasyonundan QR hedef koordinatı geldi mi kontrol et, geldiyse kamikaze aktif.
    
    std::cout << "[Kalkis] QR konum bilgisi kontrol ediliyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}