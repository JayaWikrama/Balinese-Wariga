#include <iostream>
#include <ctime>
#include <string>
#include <string.h>
#include "wariga.hpp"

static const unsigned char ekaWaraUrip[] = {
  0,
  1
};

static const unsigned char dwiWaraUrip[] = {
  5,
  4
};

static const unsigned char triWaraUrip[] = {
  9,
  4,
  7
};

static const unsigned char caturWaraUrip[] = {
  6,
  5,
  1,
  8
};

static const unsigned char pancaWaraUrip[] = {
  9,
  7,
  4,
  8,
  5
};

static const unsigned char sadWaraUrip[] = {
  7,
  6,
  5,
  8,
  9,
  3
};

static const unsigned char saptaWaraUrip[] = {
  5,
  4,
  3,
  7,
  8,
  6,
  9
};

static const unsigned char astaWaraUrip[] = {
  6,
  5,
  8,
  9,
  3,
  7,
  1,
  4
};

static const unsigned char sangaWaraUrip[] = {
  5,
  8,
  9,
  3,
  7,
  1,
  4,
  6,
  8
};

static const unsigned char dasaWaraUrip[] = {
  5,
  7,
  10,
  4,
  6,
  2,
  3,
  8,
  9,
  1
};

static const std::string ekaWaraLabel[] = {
  "-",
  "Luang"
};

static const std::string dwiWaraLabel[] = {
  "Menga",
  "Pepet"
};

static const std::string triWaraLabel[] = {
  "Pasah",
  "Beteng",
  "Kajeng"
};

static const std::string caturWaraLabel[] = {
  "Sri",
  "Laba",
  "Jaya",
  "Menala"
};

static const std::string pancaWaraLabel[] = {
  "Pahing",
  "Pon",
  "Wage",
  "Kliwon",
  "Umanis"
};

static const std::string sadWaraLabel[] = {
  "Tungleh",
  "Aryang",
  "Urukung",
  "Paniron",
  "Was",
  "Maulu"
};

static const std::string saptaWaraLabel[] = {
  "Redite",
  "Soma",
  "Anggara",
  "Budha",
  "Wraspati",
  "Sukra",
  "Saniscara"
};

static const std::string astaWaraLabel[] = {
  "Sri",
  "Indra",
  "Guru",
  "Yama",
  "Ludra",
  "Brahma",
  "Kala",
  "Uma"
};

static const std::string sangaWaraLabel[] = {
  "Dangu",
  "Jangur",
  "Gigis",
  "Nohan",
  "Ogan",
  "Erengan",
  "Urungan",
  "Tulus",
  "Dadi"
};

static const std::string dasaWaraLabel[] = {
  "Pandita",
  "Pati",
  "Suka",
  "Duka",
  "Sri",
  "Manuh",
  "Manusa",
  "Raja",
  "Dewa",
  "Raksasa"
};

/**
 * @brief Default constructor.
 *
 * Berfungsi untuk melakukan setup waktu dan keseluruhan wewaran ke waktu saat object dibuat.
 */
Wariga::Wariga(){
  this->setup(time(NULL));
}

/**
 * @brief Custom constructor.
 *
 * Berfungsi untuk melakukan setup waktu dan keseluruhan wewaran ke waktu yang di-setup pada parameter input.
 * @param currentTime dalam bentuk epoch timestamp.
 */
Wariga::Wariga(time_t currentTime){
  this->setup(currentTime);
}

/**
 * @brief Destructor.
 *
 * Berfungsi untuk melakukan release setiap memory yang dialokasikan.
 */
Wariga::~Wariga(){

}

/**
 * @brief Setter untuk wariga berdasarkan waktu.
 *
 * Berfungsi untuk melakukan setup waktu dan juga keseluruhan wewaran berdasarkan waktu yang di-setup.
 * @param time dalam bentuk epoch timestamp.
 */
int Wariga::setup(time_t time){
  this->setTime(time);
  int timeInWuku = this->getPawukon() * 7 + this->getRahina();
  this->triWara.setId(timeInWuku % 3);
  this->triWara.setUrip(static_cast<unsigned int>(triWaraUrip[this->triWara.getId()]));
  this->triWara.setName(triWaraLabel[this->triWara.getId()]);
  this->caturWara.setId(timeInWuku < 71 ? (timeInWuku % 4) : (timeInWuku < 73 ? 2 : ((timeInWuku - 2) % 4)));
  this->caturWara.setUrip(static_cast<unsigned int>(caturWaraUrip[this->caturWara.getId()]));
  this->caturWara.setName(caturWaraLabel[this->caturWara.getId()]);
  this->pancaWara.setId((timeInWuku) % 5);
  this->pancaWara.setUrip(static_cast<unsigned int>(pancaWaraUrip[this->pancaWara.getId()]));
  this->pancaWara.setName(pancaWaraLabel[this->pancaWara.getId()]);
  this->sadWara.setId(timeInWuku % 6);
  this->sadWara.setUrip(static_cast<unsigned int>(sadWaraUrip[this->sadWara.getId()]));
  this->sadWara.setName(sadWaraLabel[this->sadWara.getId()]);
  this->saptaWara.setId(this->getRahina());
  this->saptaWara.setUrip(static_cast<unsigned int>(saptaWaraUrip[this->saptaWara.getId()]));
  this->saptaWara.setName(saptaWaraLabel[this->saptaWara.getId()]);
  this->astaWara.setId(timeInWuku < 71 ? (timeInWuku % 8) : (timeInWuku < 73 ? 6 : ((timeInWuku - 2) % 8)));
  this->astaWara.setUrip(static_cast<unsigned int>(astaWaraUrip[this->astaWara.getId()]));
  this->astaWara.setName(astaWaraLabel[this->astaWara.getId()]);
  this->sangaWara.setId(timeInWuku < 3 ? 0 : ((timeInWuku - 3) % 9));
  this->sangaWara.setUrip(static_cast<unsigned int>(sangaWaraUrip[this->sangaWara.getId()]));
  this->sangaWara.setName(sangaWaraLabel[this->sangaWara.getId()]);
  this->dasaWara.setId((this->pancaWara.getUrip() + this->saptaWara.getUrip()) % 10);
  this->dasaWara.setUrip(static_cast<unsigned int>(dasaWaraUrip[this->dasaWara.getId()]));
  this->dasaWara.setName(dasaWaraLabel[this->dasaWara.getId()]);
  this->ekaWara.setId((this->pancaWara.getUrip() + this->saptaWara.getUrip()) % 2);
  this->ekaWara.setUrip(static_cast<unsigned int>(ekaWaraUrip[this->ekaWara.getId()]));
  this->ekaWara.setName(ekaWaraLabel[this->ekaWara.getId()]);
  this->dwiWara.setId((this->pancaWara.getUrip() + this->saptaWara.getUrip()) % 2);
  this->dwiWara.setUrip(static_cast<unsigned int>(dwiWaraUrip[this->dwiWara.getId()]));
  this->dwiWara.setName(dwiWaraLabel[this->dwiWara.getId()]);
  return 0;
}

/**
 * @brief Setter untuk wariga berdasarkan tanggal.
 *
 * Berfungsi untuk melakukan setup wariga dan juga keseluruhan wewaran berdasarkan tanggal yang di-setup.
 * @param fdate dalam bentuk string (YYYY-MM-DD).
 * @return 0 jika sukses
 * @return 1 jika panjang string fdate tidak valid.
 * @return 2 jika delimiter tahun dengan bulan tidak valid.
 * @return 3 jika delimiter bulan dengan tanggal tidak valid.
 * @return 4 tahun yang diinput memiliki karakter yang tidak valid.
 * @return 5 bulan yang diinput memiliki karakter yang tidak valid.
 * @return 6 tanggal yang diinput memiliki karakter yang tidak valid.
 * @return 7 nilai tahun yang diinput tidak valid (minimal 1901).
 * @return 8 nilai bulan yang diinput tidak valid.
 * @return 9 nilai tanggal yang diinput tidak valid.
 */
int Wariga::setup(const std::string fdate){
  struct tm tmStruct;
  if (fdate.length() != 10){
    return 1;
  }
  if (fdate[4] != '-'){
    return 2;
  }
  if (fdate[7] != '-'){
    return 3;
  }
  for (int i = 0; i < fdate.length(); i++){
    if (fdate[i] < '0' || fdate[i] > '9'){
      if (i == 4 || i == 7) continue;
      else if (i < 4){
        return 4;
      }
      else if (i < 7){
        return 5;
      }
      else {
        return 6;
      }
    }
  }
  memset(&tmStruct, 0x00, sizeof(struct tm));
  tmStruct.tm_year = atoi(fdate.c_str());
  if (tmStruct.tm_year < 1901) return 7;
  tmStruct.tm_mon = atoi(fdate.c_str() + 5);
  if (tmStruct.tm_mon > 12 || tmStruct.tm_mon == 0) return 8;
  tmStruct.tm_mday = atoi(fdate.c_str() + 8);
  if (tmStruct.tm_mday == 0) return 9;
  if (tmStruct.tm_mon == 2){
    if (tmStruct.tm_year % 4 == 0){
      if (tmStruct.tm_mday > 29) return 9;
    }
    else {
      if (tmStruct.tm_mday > 28) return 9;
    }
  }
  else if (tmStruct.tm_mon == 1 ||
           tmStruct.tm_mon == 3 ||
           tmStruct.tm_mon == 5 ||
           tmStruct.tm_mon == 7 ||
           tmStruct.tm_mon == 8 ||
           tmStruct.tm_mon == 10 ||
           tmStruct.tm_mon == 12
  ){
    if (tmStruct.tm_mday > 31) return 9;
  }
  else if (tmStruct.tm_mday > 30) return 9;
  tmStruct.tm_year -= 1900;
  tmStruct.tm_mon--;
  tmStruct.tm_hour = 23;
  tmStruct.tm_min = 35;
  time_t epochTime = mktime(&tmStruct);
  return this->setup(epochTime);
}
