#include "savasan_bt/kamikaze/KoduTaraVeKayitAl.hpp"
#include <iostream>

KoduTaraVeKayitAl::KoduTaraVeKayitAl(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList KoduTaraVeKayitAl::providedPorts() { return {}; }

BT::NodeStatus KoduTaraVeKayitAl::tick() {
    // TODO: ZBar ile QR içeriğini oku, pakete yazılacak veriyi kaydet.
    
    std::cout << "[Kamikaze] QR kodu okunuyor ve kaydediliyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}