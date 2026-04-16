cmake_minimum_required(VERSION 3.8)
project(savasan_bt)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(behaviortree_cpp REQUIRED)
find_package(ament_index_cpp REQUIRED)
find_package(std_msgs REQUIRED)
find_package(mavros_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(sensor_msgs REQUIRED)

# Include klasörü
include_directories(include)

# Tüm node cpp dosyaları
set(NODE_SOURCES
  # failSafe
  src/failSafe_cpp/HaberlesmeKoptuMu.cpp
  src/failSafe_cpp/KirmiziAlanaGirdinMi.cpp
  src/failSafe_cpp/SinirVeyaIrtifaAsildiMi.cpp
  src/failSafe_cpp/RTLBaslatVeCemberAt.cpp
  src/failSafe_cpp/KacinmaModunaGec.cpp
  src/failSafe_cpp/GuvenliBolgeyeYonel.cpp

  # kalkis
  src/kalkis_cpp/YeterliYukseklikteMi.cpp
  src/kalkis_cpp/QRKonumBilgisiGirildiMi.cpp
  src/kalkis_cpp/KalkisYap.cpp
  src/kalkis_cpp/Yuksekligi10mArttir.cpp

  # kamikaze
  src/kamikaze_cpp/Yukseklik100mVeyaUzeriMi.cpp
  src/kamikaze_cpp/QRGoruntudeMi.cpp
  src/kamikaze_cpp/HedefeXKadarYaklastinMi.cpp
  src/kamikaze_cpp/Yukseklik10mVeyaUzeriMi.cpp
  src/kamikaze_cpp/KonumaIlerle.cpp
  src/kamikaze_cpp/Yuz100mOlanaKadarTirman.cpp
  src/kamikaze_cpp/DalisaGec.cpp
  src/kamikaze_cpp/QRiOrtala.cpp
  src/kamikaze_cpp/KoduTaraVeKayitAl.cpp
  src/kamikaze_cpp/DalisiSonlandirGuvenliYuksekligeCik.cpp
  src/kamikaze_cpp/PaketleriSunucuyaIlet.cpp
  src/kamikaze_cpp/QRKonumBilgisiniTemizle.cpp
  src/kamikaze_cpp/DalisiSurdur.cpp
  src/kamikaze_cpp/OtonomInis.cpp

  # siha
  src/siha_cpp/HedefTespitEdildiMi.cpp
  src/siha_cpp/HedefTekrarGoruntudeMi.cpp
  src/siha_cpp/HedefVurusAlanindaMi.cpp
  src/siha_cpp/ToleransAsildiMi.cpp
  src/siha_cpp/Sayac4SaniyeOlduMu.cpp
  src/siha_cpp/HedefiOrtala.cpp
  src/siha_cpp/KilitlenmeSayaciniIlerlet.cpp
  src/siha_cpp/ToleransSayaciniIlerlet.cpp
  src/siha_cpp/TumSayaclariSifirla.cpp
  src/siha_cpp/KayipAlgoritmasiniBaslat.cpp
  src/siha_cpp/HedefAramayiAktiflestir.cpp
  src/siha_cpp/SerbestUcusYap.cpp
  src/siha_cpp/IstasyonaPaketiGonder.cpp
  src/siha_cpp/SonVurulanHedefiKaydet.cpp
  src/siha_cpp/GoreviSonlandir.cpp
)

# Executable oluştur
add_executable(savasan_bt_node src/main.cpp ${NODE_SOURCES})

# Bağımlılıkları executable'a bağla
ament_target_dependencies(savasan_bt_node
  rclcpp
  behaviortree_cpp
  ament_index_cpp
  std_msgs
  mavros_msgs
  geometry_msgs
  sensor_msgs
)

# Executable'ı install et
install(TARGETS savasan_bt_node
  DESTINATION lib/${PROJECT_NAME}
)

# Config klasörünü (XML) install et
install(DIRECTORY config
  DESTINATION share/${PROJECT_NAME}
)

# Include klasörünü install et
install(DIRECTORY include/
  DESTINATION include
)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()