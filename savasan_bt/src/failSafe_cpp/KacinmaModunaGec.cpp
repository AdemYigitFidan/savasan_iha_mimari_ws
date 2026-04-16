#include "savasan_bt/failSafe/KacinmaModunaGec.hpp"
#include <iostream>

KacinmaModunaGec::KacinmaModunaGec(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList KacinmaModunaGec::providedPorts() { return {}; }

BT::NodeStatus KacinmaModunaGec::tick() {
    // TODO: Kırmızı alandan en kısa yönle dışarı çıkacak uçuş komutu ver.
    
    std::cout << "[FailSafe] Kirmizi alana girildi, kaçinma modu aktif." << std::endl;
    return BT::NodeStatus::SUCCESS;
}