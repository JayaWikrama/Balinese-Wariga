
# Library Wariga Bali

Library ini menyediakan fungsionalitas untuk mengambil informasi Nama dan Urip/Neptu dari setiap Wuku dan Wewaran (dari Eka Wara sampai Dasa Wara) berdasarkan masukan waktu yang diberikan pada parameter fungsi yang diberikan.

## Installasi Library

1. Clone repository:

```bash
git clone https://github.com/JayaWikrama/Balinese-Wariga.git
```

2. Pindah ke direktori proyek:

```bash
cd Balinese-Wariga
```

3. Buat direktori build:

```bash
mkdir build
cd build
```

4. Konfigurasi CMake:

```bash
cmake ..
```

5. Lakukan kompilasi:

```bash
make
```

6. Jalankan unit test untuk memastikan semua fungsi berjalan dengan normal:

```bash
./WarigaBali-test
```

Output hasil test:

```bash
[==========] Running 461 tests from 5 test suites.
[----------] Global test environment set-up.
[----------] 24 tests from PawukonTest
[ RUN      ] PawukonTest.DefaultConstructor1
[       OK ] PawukonTest.DefaultConstructor1 (0 ms)
[ RUN      ] PawukonTest.DefaultConstructor2
[       OK ] PawukonTest.DefaultConstructor2 (0 ms)
[ RUN      ] PawukonTest.DefaultConstructor3
[       OK ] PawukonTest.DefaultConstructor3 (0 ms)
[ RUN      ] PawukonTest.DefaultConstructor4
[       OK ] PawukonTest.DefaultConstructor4 (0 ms)
[ RUN      ] PawukonTest.CustomConstructor1
[       OK ] PawukonTest.CustomConstructor1 (0 ms)
[ RUN      ] PawukonTest.CustomConstructor2
[       OK ] PawukonTest.CustomConstructor2 (0 ms)

....
....
....
[ RUN      ] WarigaTest_2024.setup207
[       OK ] WarigaTest_2024.setup207 (0 ms)
[ RUN      ] WarigaTest_2024.setup208
[       OK ] WarigaTest_2024.setup208 (0 ms)
[ RUN      ] WarigaTest_2024.setup209
[       OK ] WarigaTest_2024.setup209 (0 ms)
[----------] 210 tests from WarigaTest_2024 (22 ms total)

[----------] Global test environment tear-down
[==========] 461 tests from 5 test suites ran. (37 ms total)
[  PASSED  ] 461 tests.
```

7. Buat package:

```bash
cpack
```

8. Install package dengan dpkg. Contoh:
 
```bash
sudo dpkg -i ../package/warigabali-lib_1.1.0_amd64.deb
```

## Contoh Penggunaan

Penggunaan pada Aplikasi Utama (dapat dilihat di `example/main.cpp`)

```c++
#include <iostream>

#include "wariga.hpp"

int main(int argc, char **argv){
    char *buffer = NULL;
    if (argc < 2){
        printf("cmd: %s <YYYY-MM-DD>\n", argv[0]);
        exit (0);
    }
    Wariga wariga;
    int ret = wariga.setup(argv[1]);
    if (!ret){
        std::cout << "wuku [" << wariga.getPawukonUrip() << "]: " << wariga.getPawukonStr() << std::endl;
        std::cout << "eka Wara [" << wariga.ekaWara.getUrip() << "]: " << wariga.ekaWara.getName() << std::endl;
        std::cout << "dwi Wara [" << wariga.dwiWara.getUrip() << "]: " << wariga.dwiWara.getName() << std::endl;
        std::cout << "tri Wara [" << wariga.triWara.getUrip() << "]: " << wariga.triWara.getName() << std::endl;
        std::cout << "catur Wara [" << wariga.caturWara.getUrip() << "]: " << wariga.caturWara.getName() << std::endl;
        std::cout << "panca Wara [" << wariga.pancaWara.getUrip() << "]: " << wariga.pancaWara.getName() << std::endl;
        std::cout << "sad Wara [" << wariga.sadWara.getUrip() << "]: " << wariga.sadWara.getName() << std::endl;
        std::cout << "sapta Wara [" << wariga.saptaWara.getUrip() << "]: " << wariga.saptaWara.getName() << std::endl;
        std::cout << "asta Wara [" << wariga.astaWara.getUrip() << "]: " << wariga.astaWara.getName() << std::endl;
        std::cout << "sanga Wara [" << wariga.sangaWara.getUrip() << "]: " << wariga.sangaWara.getName() << std::endl;
        std::cout << "dasa Wara [" << wariga.dasaWara.getUrip() << "]: " << wariga.dasaWara.getName() << std::endl;
    }
    else {
        std::cout << "Invalid Format dengan return: " << ret << std::endl;
        printf("cmd: %s <YYYY-MM-DD>\n", argv[0]);
    }
    return 0;
}
```

Aplikasi dapat dicompile dengan langkah-langkah berikut:

1. Masuk ke direktori proyek. Contoh:

```bash
cd Balinese-Wariga
```

2. Buat direktori build (jika sudah pernah melewati proses ini hingga ke langkah ke-4, lanjutkan ke langkah ke-5):

```bash
mkdir build
cd build
```

3. Konfigurasi CMake:

```bash
cmake ..
```

4. Lakukan kompilasi:

```bash
make
```

5. Jalankan unit test untuk memastikan semua fungsi berjalan dengan normal:

```bash
./WarigaBali <tanggal>
```

Contoh Input Perintah:

```bash
./WarigaBali 2024-02-04
```

Contoh Output:

```bash
wuku [3]: Warigadean
eka Wara [0]: -
dwi Wara [5]: Menga
tri Wara [4]: Beteng
catur Wara [5]: Laba
panca Wara [5]: Umanis
sad Wara [6]: Aryang
sapta Wara [5]: Redite
asta Wara [5]: Indra
sanga Wara [8]: Jangur
dasa Wara [5]: Pandita
```

### Penjelasan

1. `Wariga wariga` berfungsi untuk membuat object wariga dengan default constructor yang artinya Pawukon dan Wewaran di setup menggunakan waktu yang sama dengan waktu saat aplikasi dijalankan.
2. `wariga.setup(argv[1])` berfungsi untuk mengubah referensi waktu yang digunakan untuk menentukan Pawukon dan Wewaran beserta keseluruhan atributnya. Menthod ini akan memberi return 0 ketika sukses dijalankan.
3. Beberapa baris selanjutnya berfungsi untuk mengambil informasi Urip/Neptu serta Nama Pawukon dan Wewaran.
