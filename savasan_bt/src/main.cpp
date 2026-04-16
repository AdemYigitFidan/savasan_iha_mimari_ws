#include "rclcpp/rclcpp.hpp"
#include "behaviortree_cpp/bt_factory.h"
#include "behaviortree_cpp/loggers/groot2_publisher.h"
#include "ament_index_cpp/get_package_share_directory.hpp"

// failSafe
#include "savasan_bt/failSafe/HaberlesmeKoptuMu.hpp"
#include "savasan_bt/failSafe/KirmiziAlanaGirdinMi.hpp"
#include "savasan_bt/failSafe/SinirVeyaIrtifaAsildiMi.hpp"
#include "savasan_bt/failSafe/RTLBaslatVeCemberAt.hpp"
#include "savasan_bt/failSafe/KacinmaModunaGec.hpp"
#include "savasan_bt/failSafe/GuvenliBolgeyeYonel.hpp"

// kalkis
#include "savasan_bt/kalkis/YeterliYukseklikteMi.hpp"
#include "savasan_bt/kalkis/QRKonumBilgisiGirildiMi.hpp"
#include "savasan_bt/kalkis/KalkisYap.hpp"
#include "savasan_bt/kalkis/Yuksekligi10mArttir.hpp"

// kamikaze
#include "savasan_bt/kamikaze/Yukseklik100mVeyaUzeriMi.hpp"
#include "savasan_bt/kamikaze/QRGoruntudeMi.hpp"
#include "savasan_bt/kamikaze/HedefeXKadarYaklastinMi.hpp"
#include "savasan_bt/kamikaze/Yukseklik10mVeyaUzeriMi.hpp"
#include "savasan_bt/kamikaze/KonumaIlerle.hpp"
#include "savasan_bt/kamikaze/Yuz100mOlanaKadarTirman.hpp"
#include "savasan_bt/kamikaze/DalisaGec.hpp"
#include "savasan_bt/kamikaze/QRiOrtala.hpp"
#include "savasan_bt/kamikaze/KoduTaraVeKayitAl.hpp"
#include "savasan_bt/kamikaze/DalisiSonlandirGuvenliYuksekligeCik.hpp"
#include "savasan_bt/kamikaze/PaketleriSunucuyaIlet.hpp"
#include "savasan_bt/kamikaze/QRKonumBilgisiniTemizle.hpp"
#include "savasan_bt/kamikaze/DalisiSurdur.hpp"
#include "savasan_bt/kamikaze/OtonomInis.hpp"

// siha
#include "savasan_bt/siha/HedefTespitEdildiMi.hpp"
#include "savasan_bt/siha/HedefTekrarGoruntudeMi.hpp"
#include "savasan_bt/siha/HedefVurusAlanindaMi.hpp"
#include "savasan_bt/siha/ToleransAsildiMi.hpp"
#include "savasan_bt/siha/Sayac4SaniyeOlduMu.hpp"
#include "savasan_bt/siha/HedefiOrtala.hpp"
#include "savasan_bt/siha/KilitlenmeSayaciniIlerlet.hpp"
#include "savasan_bt/siha/ToleransSayaciniIlerlet.hpp"
#include "savasan_bt/siha/TumSayaclariSifirla.hpp"
#include "savasan_bt/siha/KayipAlgoritmasiniBaslat.hpp"
#include "savasan_bt/siha/HedefAramayiAktiflestir.hpp"
#include "savasan_bt/siha/SerbestUcusYap.hpp"
#include "savasan_bt/siha/IstasyonaPaketiGonder.hpp"
#include "savasan_bt/siha/SonVurulanHedefiKaydet.hpp"
#include "savasan_bt/siha/GoreviSonlandir.hpp"

int main(int argc, char** argv)
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<rclcpp::Node>("savasan_bt_node");

    BT::BehaviorTreeFactory factory;

    // failSafe
    factory.registerNodeType<HaberlesmeKoptuMu>("HaberlesmeKoptuMu");
    factory.registerNodeType<KirmiziAlanaGirdinMi>("KirmiziAlanaGirdinMi");
    factory.registerNodeType<SinirVeyaIrtifaAsildiMi>("SinirVeyaIrtifaAsildiMi");
    factory.registerNodeType<RTLBaslatVeCemberAt>("RTLBaslatVeCemberAt");
    factory.registerNodeType<KacinmaModunaGec>("KacinmaModunaGec");
    factory.registerNodeType<GuvenliBolgeyeYonel>("GuvenliBolgeyeYonel");

    // kalkis
    factory.registerNodeType<YeterliYukseklikteMi>("YeterliYukseklikteMi");
    factory.registerNodeType<QRKonumBilgisiGirildiMi>("QRKonumBilgisiGirildiMi");
    factory.registerNodeType<KalkisYap>("KalkisYap");
    factory.registerNodeType<Yuksekligi10mArttir>("Yuksekligi10mArttir");

    // kamikaze
    factory.registerNodeType<Yukseklik100mVeyaUzeriMi>("Yukseklik100mVeyaUzeriMi");
    factory.registerNodeType<QRGoruntudeMi>("QRGoruntudeMi");
    factory.registerNodeType<HedefeXKadarYaklastinMi>("HedefeXKadarYaklastinMi");
    factory.registerNodeType<Yukseklik10mVeyaUzeriMi>("Yukseklik10mVeyaUzeriMi");
    factory.registerNodeType<KonumaIlerle>("KonumaIlerle");
    factory.registerNodeType<Yuz100mOlanaKadarTirman>("Yuz100mOlanaKadarTirman");
    factory.registerNodeType<DalisaGec>("DalisaGec");
    factory.registerNodeType<QRiOrtala>("QRiOrtala");
    factory.registerNodeType<KoduTaraVeKayitAl>("KoduTaraVeKayitAl");
    factory.registerNodeType<DalisiSonlandirGuvenliYuksekligeCik>("DalisiSonlandirGuvenliYuksekligeCik");
    factory.registerNodeType<PaketleriSunucuyaIlet>("PaketleriSunucuyaIlet");
    factory.registerNodeType<QRKonumBilgisiniTemizle>("QRKonumBilgisiniTemizle");
    factory.registerNodeType<DalisiSurdur>("DalisiSurdur");
    factory.registerNodeType<OtonomInis>("OtonomInis");

    // siha
    factory.registerNodeType<HedefTespitEdildiMi>("HedefTespitEdildiMi");
    factory.registerNodeType<HedefTekrarGoruntudeMi>("HedefTekrarGoruntudeMi");
    factory.registerNodeType<HedefVurusAlanindaMi>("HedefVurusAlanindaMi");
    factory.registerNodeType<ToleransAsildiMi>("ToleransAsildiMi");
    factory.registerNodeType<Sayac4SaniyeOlduMu>("Sayac4SaniyeOlduMu");
    factory.registerNodeType<HedefiOrtala>("HedefiOrtala");
    factory.registerNodeType<KilitlenmeSayaciniIlerlet>("KilitlenmeSayaciniIlerlet");
    factory.registerNodeType<ToleransSayaciniIlerlet>("ToleransSayaciniIlerlet");
    factory.registerNodeType<TumSayaclariSifirla>("TumSayaclariSifirla");
    factory.registerNodeType<KayipAlgoritmasiniBaslat>("KayipAlgoritmasiniBaslat");
    factory.registerNodeType<HedefAramayiAktiflestir>("HedefAramayiAktiflestir");
    factory.registerNodeType<SerbestUcusYap>("SerbestUcusYap");
    factory.registerNodeType<IstasyonaPaketiGonder>("IstasyonaPaketiGonder");
    factory.registerNodeType<SonVurulanHedefiKaydet>("SonVurulanHedefiKaydet");
    factory.registerNodeType<GoreviSonlandir>("GoreviSonlandir");

    std::string pkg_path = ament_index_cpp::get_package_share_directory("savasan_bt"); // taşınabilirlik sağlaması için ament index kullanıldı
    std::string xml_file = pkg_path + "/config/gorev_agaci.xml";

    auto tree = factory.createTreeFromFile(xml_file);
    BT::Groot2Publisher publisher(tree); //Groot2 den hangi state'te izlememizi sağlar ilerde sadece bu satır silinebilir,
                                         // donanıma gömülmeden öncesine kadar kalabilir.

    std::cout << "[MAIN] Savasan IHA karar verici baslatildi." << std::endl;

    rclcpp::Rate loop_rate(10);
    while (rclcpp::ok())
    {
        tree.tickExactlyOnce();
        rclcpp::spin_some(node);
        loop_rate.sleep();
    }

    rclcpp::shutdown();
    return 0;
}