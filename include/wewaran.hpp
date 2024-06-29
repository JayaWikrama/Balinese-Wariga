#ifndef __WEWARAN_HPP__
#define __WEWARAN_HPP__

class BalineseWewaran {
  private:
    unsigned char id;
    unsigned char urip;
    std::string name;
  public:
    /**
     * @brief Default constructor.
     *
     * Berfungsi untuk melakukan setup private data ke nilai default. Diantaranya:
     * id = 0
     * urip = 0
     * name = ""
     */
    BalineseWewaran();

    /**
     * @brief Custom constructor.
     *
     * Berfungsi untuk melakukan setup private data ke nilai custom.
     * @param id merepresentasikan nomor identitas dari wewaran.
     * @param urip nilai tertentu yang dimiliki oleh masing-masing wewaran.
     * @param name merepresentasikan sebutan untuk wewaran yang dimaksud.
     */
    BalineseWewaran(unsigned int id, unsigned int urip, const std::string name);

    /**
     * @brief Destructor.
     *
     * Berfungsi untuk melakukan release setiap memory yang dialokasikan.
     */
    ~BalineseWewaran();

    /**
     * @brief Setter untuk identitas dari wewaran.
     *
     * Berfungsi untuk melakukan setup nomor identitas wewaran.
     * @param id merepresentasikan nomor identitas dari wewaran.
     */
    void setId(unsigned int id);

    /**
     * @brief Setter untuk URL API nilai tertentu yang dimiliki oleh wewaran.
     *
     * Berfungsi untuk melakukan setup nilai tertentu yang dimiliki oleh masing-masing wewaran.
     * @param urip nilai tertentu yang dimiliki oleh masing-masing wewaran.
     */
    void setUrip(unsigned int urip);

    /**
     * @brief Setter untuk sebutan untuk wewaran.
     *
     * Berfungsi untuk melakukan setup sebutan untuk wewaran yang dimaksud.
     * @param name merepresentasikan sebutan untuk wewaran yang dimaksud.
     */
    void setName(std::string name);

    /**
     * @brief Getter untuk identitas wewaran.
     *
     * Berfungsi untuk melakukan pengambilan data nomor identitas wewaran.
     * @return nomor identitas wewaran.
     */
    unsigned int getId();

    /**
     * @brief Getter untuk nilai tertentu yang dimiliki oleh wewaran.
     *
     * Berfungsi untuk melakukan pengambilan data nilai tertentu yang dimiliki oleh masing-masing wewaran.
     * @return nilai tertentu yang dimiliki oleh masing-masing wewaran.
     */
    unsigned int getUrip();

    /**
     * @brief Getter untuk sebutan untuk wewaran.
     *
     * Berfungsi untuk melakukan pengambilan data sebutan untuk wewaran yang dimaksud.
     * @return sebutan untuk wewaran yang dimaksud.
     */
    std::string getName();
};

#endif