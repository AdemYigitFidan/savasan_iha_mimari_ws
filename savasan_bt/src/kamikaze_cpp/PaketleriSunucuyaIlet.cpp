#include "savasan_bt/kamikaze/PaketleriSunucuyaIlet.hpp"
#include <iostream>

PaketleriSunucuyaIlet::PaketleriSunucuyaIlet(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList PaketleriSunucuyaIlet::providedPorts() { return {}; }

BT::NodeStatus PaketleriSunucuyaIlet::tick() {
    // TODO: QR içeriğini ve vuruş bilgilerini yarışma sunucusuna HTTP ile gönder.
    
    std::cout << "[Kamikaze] Paketler sunucuya iletiliyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}