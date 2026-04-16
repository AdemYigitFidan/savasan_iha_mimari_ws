#include "savasan_bt/siha/Sayac4SaniyeOlduMu.hpp"
#include <iostream>

Sayac4SaniyeOlduMu::Sayac4SaniyeOlduMu(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::PortsList Sayac4SaniyeOlduMu::providedPorts() { return {}; }

BT::NodeStatus Sayac4SaniyeOlduMu::tick() {
    // TODO: Kilitlenme sayacı 4 saniyeye ulaştı mı kontrol et.
    
    std::cout << "[Siha] Kilitlenme sayacı 4 saniye kontrol ediliyor..." << std::endl;
    return BT::NodeStatus::FAILURE;
}