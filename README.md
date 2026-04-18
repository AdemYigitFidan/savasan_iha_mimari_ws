# savasan_iha_mimari_ws — 2026 - v1
---

## İçindekiler

1. [Proje Yapısı](#proje-yapısı)
2. [Bağımlılıklar ve Kurulum](#bağımlılıklar-ve-kurulum)
3. [.hpp ve .cpp Dosyaları — Ne İşe Yarar?](#hpp-ve-cpp-dosyaları--ne-işe-yarar)
4. [Node'ları Düzenleme Rehberi](#nodeları-düzenleme-rehberi)
5. [Yeni Bir Paket Ekleme](#yeni-bir-paket-ekleme)
6. [Build ve Run](#build-ve-run)

---

## Proje Yapısı

```
savasan_iha_mimari_ws/
├── BehaviorTree.CPP/        # BT.CPP v4 kütüphanesi (git submodule)
├── savasan_bt/              # Ana ROS 2 paketi — tüm BT node'ları burada
│   ├── CMakeLists.txt
│   ├── package.xml
│   ├── config/
│   │   └── gorev_agaci.xml  # Davranış ağacının XML tanımı
│   ├── include/savasan_bt/  # Header dosyaları (.hpp)
│   │   ├── kalkis/
│   │   ├── kamikaze/
│   │   ├── siha/
│   │   └── failSafe/
│   └── src/                 # Implementasyon dosyaları (.cpp)
│       ├── kalkis_cpp/
│       ├── kamikaze_cpp/
│       ├── siha_cpp/
│       ├── failSafe_cpp/
│       └── main.cpp         # BT factory kayıtları ve ağacın çalıştırılması
├── .gitignore               # build/ install/ log/ hariç tutulmuş
└── .gitmodules              # BehaviorTree.CPP submodule URL'ini tanımlar
```

> `build/`, `install/` ve `log/` dizinleri `.gitignore`'dadır, repoya dahil değildir.

### Subtree Mantığı

| Klasör | Görev |
|--------|-------|
| `kalkis` | Kalkış öncesi kontroller ve yükseliş (QR konum girişi, irtifa kontrolü) |
| `kamikaze` | QR hedef bulma, yaklaşma, dalış ve iniş dizisi |
| `siha` | Düşman İHA tespiti, kilitleme, vurma ve kayıp durumu |
| `failSafe` | Haberleşme kopukluğu, sınır/irtifa aşımı ve RTL/acil prosedürleri |

---

## Bağımlılıklar ve Kurulum

### Gereksinimler

- Ubuntu 24.04
- ROS 2 Jazzy
- colcon
- CMake >= 3.16

### 1. Repoyu Klonla

`BehaviorTree.CPP` bu repoya **git submodule** olarak bağlıdır. Normal `git clone` yapınca o klasör boş gelir, içini doldurmak için ayrı bir komut gerekir:

```bash
git clone https://github.com/AdemYigitFidan/savasan_iha_mimari_ws.git
cd savasan_iha_mimari_ws
git submodule update --init --recursive
```

Son komut `BehaviorTree.CPP/` klasörünü indirir. Sadece **ilk klonlamada** yapman yeterli, sonraki pull'larda gerekmez.

### 2. BehaviorTree.CPP Hakkında

BehaviorTree.CPP bu workspace içinde ayrı bir ROS 2 paketi olarak derlenir, sisteme ayrıca kurman gerekmez. `colcon build` çalıştırınca otomatik olarak derlenir

### 3. ROS 2 Ortamını Hazırla

```bash
source /opt/ros/jazzy/setup.bash
```

### 4. Workspace'i Build Et

```bash
colcon build --symlink-install
source install/setup.bash
```

---

## `.hpp` ve `.cpp` Dosyaları — Ne İşe Yarar?

Bu projede her BT node'u iki dosyadan oluşur.

### `.hpp` — Header (Başlık) Dosyası

`include/savasan_bt/<kategori>/NodeAdi.hpp`

Sınıf tanımını ve fonksiyon imzalarını içerir. Kısaca *"bu node'un ne yapabileceğini"* tanımlar, ama **nasıl** yaptığını söylemez.

### `.cpp` — Implementasyon Dosyası

`src/kalkis_cpp/KalkisYap.cpp`

`tick()` fonksiyonunun gerçek mantığını içerir. MAVROS servis/topic çağrıları buraya yazılır.

### Kural

> `.hpp` dosyasına dokunmadan sadece `.cpp` içindeki `tick()` fonksiyonunun doldurulması yeterlidir. Header'ı ancak **Blackboard portu eklenicekse** veya sınıf yapısını değiştirilecekse düzenlenir.

---

## Node'ları Düzenleme Rehberi

Repoyu pull'layıp iskelet node'ları doldurmak isteniyorsa:

### Adım 1: Hangi node'u dolduracağını bulunur

```
savasan_bt/src/
├── kalkis_cpp/     → Kalkış ile ilgili action/condition node'ları
├── kamikaze_cpp/   → QR + dalış sekansı node'ları
├── siha_cpp/       → Hedef kilitleme ve vurma node'ları
└── failSafe_cpp/   → Güvenlik prosedürleri
```

### Adım 2: İlgili `.cpp` dosyasını aç ve `tick()`'i doldurun

```cpp
// src/siha_cpp/HedefTespitEdildiMi.cpp
#include "savasan_bt/siha/HedefTespitEdildiMi.hpp"

HedefTespitEdildiMi::HedefTespitEdildiMi(const std::string& name, const BT::NodeConfig& config)
    : BT::ConditionNode(name, config) {}

BT::NodeStatus HedefTespitEdildiMi::tick() {
    // TODO: YOLO detection topic'inden sonuç oku
    // bool detected = ...;
    // return detected ? BT::NodeStatus::SUCCESS : BT::NodeStatus::FAILURE;
    return BT::NodeStatus::FAILURE;
}
```

### Adım 3: Blackboard portu ekleyeceksen `.hpp`'yi de düzenleyin

```cpp
// .hpp içindeki providedPorts() fonksiyonuna ekle:
static BT::PortsList providedPorts() {
    return { BT::InputPort<bool>("hedef_tespitlendi") };
}
```

### Adım 4: `main.cpp`'de node'un kayıtlı olduğundan emin ol 

(Repodaki bütün node'lar hali hazırda kayıtlıdırlar)
`src/main.cpp` içinde şuna benzer bir satır olmalı:

```cpp
factory.registerNodeType<HedefTespitEdildiMi>("HedefTespitEdildiMi");
```

Eğer yoksa eklenmelidir. Kayıt yapılmadan `gorev_agaci.xml`'de bu node'u kullanılamaz — runtime'da hata alırsınız.

### Adım 5: Build et ve test et

```bash
colcon build --packages-select savasan_bt
source install/setup.bash
ros2 run savasan_bt savasan_bt_node
```

---

## Yeni Bir Paket Ekleme

Diyelim ki `goruntu_isleme` adında yeni bir ROS 2 paketi eklemek istiyorsunuz:

### 1. Paketi oluştur

```bash
cd savasan_iha_mimari_ws
ros2 pkg create goruntu_isleme --build-type ament_cmake --dependencies rclcpp sensor_msgs
```

Bu komut `goruntu_isleme/` klasörünü, `CMakeLists.txt`'i ve `package.xml`'i otomatik oluşturur.

### 2. Gerekirse `savasan_bt`'ye bağımlılık ekle

`savasan_bt` bu yeni paketi kullanacaksa `savasan_bt/package.xml`'e şunu ekle:

```xml
<depend>goruntu_isleme</depend>
```

Ve `savasan_bt/CMakeLists.txt`'e:

```cmake
find_package(goruntu_isleme REQUIRED)
ament_target_dependencies(savasan_bt_node ... goruntu_isleme)
```

### 3. Build et

```bash
colcon build
source install/setup.bash
```

colcon workspace içindeki tüm paketleri otomatik bulur, başka bir ayar gerekmez.

---

## Build ve Run

```bash
# ROS 2 ortamını hazırla
source /opt/ros/jazzy/setup.bash

# Build
colcon build --symlink-install

# Ortamı güncelle
source install/setup.bash

# Çalıştır
ros2 run savasan_bt savasan_bt_node
```

---

## Katkı

Her subtree'nin sorumlu geliştiricisi, ilgili `.cpp` dosyaları doldururken `gorev_agaci.xml`'te bir değişikilğe gidilirse veya `main.cpp`'ye yenş kayıt eklenirse bunu lütfen commit mesajında belirtiniz
