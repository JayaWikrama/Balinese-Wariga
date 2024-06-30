#ifndef __WARIGA_HPP__
#define __WARIGA_HPP__

#include <ctime>
#include "pawukon.hpp"
#include "wewaran.hpp"

class Wariga : public Pawukon {
  private:
  public:
    BalineseWewaran ekaWara;
    BalineseWewaran dwiWara;
    BalineseWewaran triWara;
    BalineseWewaran caturWara;
    BalineseWewaran pancaWara;
    BalineseWewaran sadWara;
    BalineseWewaran saptaWara;
    BalineseWewaran astaWara;
    BalineseWewaran sangaWara;
    BalineseWewaran dasaWara;
    /**
     * @brief Default constructor.
     *
     * Berfungsi untuk melakukan setup waktu dan keseluruhan wewaran ke waktu saat object dibuat.
     */
    Wariga();

    /**
     * @brief Custom constructor.
     *
     * Berfungsi untuk melakukan setup waktu dan keseluruhan wewaran ke waktu yang di-setup pada parameter input.
     * @param currentTime dalam bentuk epoch timestamp.
     */
    Wariga(time_t currentTime);

    /**
     * @brief Destructor.
     *
     * Berfungsi untuk melakukan release setiap memory yang dialokasikan.
     */
    ~Wariga();

    /**
     * @brief Setter untuk wariga berdasarkan Pawukon dan Saptawara.
     *
     * Berfungsi untuk melakukan setup waktu dan juga keseluruhan wewaran berdasarkan masukan Pawukon dan saptawara yang diberikan.
     * @param wuku member pawukon.
     * @param rahina member dari Saptawara.
     * @return 0 jika sukses
     */
    int setup(Pawukon::PAWUKON_t wuku, Pawukon::RAHINA_t rahina);

    /**
     * @brief Setter untuk wariga berdasarkan waktu.
     *
     * Berfungsi untuk melakukan setup waktu dan juga keseluruhan wewaran berdasarkan waktu yang di-setup.
     * @param time dalam bentuk epoch timestamp.
     * @return 0 jika sukses
     */
    int setup(time_t time);

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
    int setup(const std::string fdate);
};

#endif