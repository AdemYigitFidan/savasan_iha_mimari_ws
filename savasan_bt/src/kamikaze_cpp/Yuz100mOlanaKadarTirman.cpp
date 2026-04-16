#include "savasan_bt/kamikaze/Yuz100mOlanaKadarTirman.hpp"
#include <iostream>

Yuz100mOlanaKadarTirman::Yuz100mOlanaKadarTirman(const std::string& name, const BT::NodeConfig& config)
    : BT::SyncActionNode(name, config) {}

BT::PortsList Yuz100mOlanaKadarTirman::providedPorts() { return {}; }

BT::NodeStatus Yuz100mOlanaKadarTirman::tick() {
    // TODO: Hedef irtifayı 100m olarak ayarla, tırmanış komutu gönder.
    
    std::cout << "[Kamikaze] 100m irtifaya tırmanılıyor..." << std::endl;
    return BT::NodeStatus::SUCCESS;
}