#include <iostream>
#include <string.h>
#include "wewaran.hpp"

/**
 * @brief Default constructor.
 *
 * Berfungsi untuk melakukan setup private data ke nilai default. Diantaranya:
 * id = 0
 * urip = 0
 * name = ""
 */
BalineseWewaran::BalineseWewaran(){
  this->id = 0x00;
  this->urip = 0x00;
  this->name = "";
}

/**
 * @brief Custom constructor.
 *
 * Berfungsi untuk melakukan setup private data ke nilai custom.
 * @param id merepresentasikan nomor identitas dari wewaran.
 * @param urip nilai tertentu yang dimiliki oleh masing-masing wewaran.
 * @param name merepresentasikan sebutan untuk wewaran yang dimaksud.
 */
BalineseWewaran::BalineseWewaran(unsigned int id, unsigned int urip, const std::string name){
  this->id = static_cast<unsigned char>(id & 0xFF);
  this->urip = static_cast<unsigned char>(urip & 0xFF);
  this->name = name;
}

/**
 * @brief Destructor.
 *
 * Berfungsi untuk melakukan release setiap memory yang dialokasikan.
 */
BalineseWewaran::~BalineseWewaran(){

}

/**
 * @brief Setter untuk identitas dari wewaran.
 *
 * Berfungsi untuk melakukan setup nomor identitas wewaran.
 * @param id merepresentasikan nomor identitas dari wewaran.
 */
void BalineseWewaran::setId(unsigned int id){
  this->id = static_cast<unsigned char>(id & 0xFF);
}

/**
 * @brief Setter untuk URL API nilai tertentu yang dimiliki oleh wewaran.
 *
 * Berfungsi untuk melakukan setup nilai tertentu yang dimiliki oleh masing-masing wewaran.
 * @param urip nilai tertentu yang dimiliki oleh masing-masing wewaran.
 */
void BalineseWewaran::setUrip(unsigned int urip){
  this->urip = static_cast<unsigned char>(urip & 0xFF);
}

/**
 * @brief Setter untuk sebutan untuk wewaran.
 *
 * Berfungsi untuk melakukan setup sebutan untuk wewaran yang dimaksud.
 * @param name merepresentasikan sebutan untuk wewaran yang dimaksud.
 */
void BalineseWewaran::setName(std::string name){
  this->name = name;
}

/**
 * @brief Getter untuk identitas wewaran.
 *
 * Berfungsi untuk melakukan pengambilan data nomor identitas wewaran.
 * @return nomor identitas wewaran.
 */
unsigned int BalineseWewaran::getId(){
  return static_cast<unsigned int>(this->id);
}

/**
 * @brief Getter untuk nilai tertentu yang dimiliki oleh wewaran.
 *
 * Berfungsi untuk melakukan pengambilan data nilai tertentu yang dimiliki oleh masing-masing wewaran.
 * @return nilai tertentu yang dimiliki oleh masing-masing wewaran.
 */
unsigned int BalineseWewaran::getUrip(){
  return static_cast<unsigned int>(this->urip);
}

/**
 * @brief Getter untuk sebutan untuk wewaran.
 *
 * Berfungsi untuk melakukan pengambilan data sebutan untuk wewaran yang dimaksud.
 * @return sebutan untuk wewaran yang dimaksud.
 */
std::string BalineseWewaran::getName(){
  return this->name;
}