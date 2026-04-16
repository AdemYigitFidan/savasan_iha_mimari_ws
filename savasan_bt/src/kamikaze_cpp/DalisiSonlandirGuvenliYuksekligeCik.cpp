#include "savasan_bt/kamikaze/DalisiSonlandirGuvenliYuksekligeCik.hpp"
#include <iostream>

DalisiSonlandirGuvenliYuksekligeCik::DalisiSonlandirGuvenliYuksekligeCik(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList DalisiSonlandirGuvenliYuksekligeCik::providedPorts() { return {}; }

BT::NodeStatus DalisiSonlandirGuvenliYuksekligeCik::tick() {
    // TODO: Dalışı sonlandırıp güvenli irtifaya tırmanış komutu gönder.
    
    std::cout << "[Kamikaze] Dalış sonlandırıldı, güvenli irtifaya çıkılıyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}