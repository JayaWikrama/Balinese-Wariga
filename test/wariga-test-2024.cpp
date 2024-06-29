#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <sys/time.h>

#include "wariga.hpp"

class WarigaTest_2024:public::testing::Test {
protected:
    Wariga wariga;

    void SetUp() override {
        // tidak ada kebutuhan pre-set
    }

    void TearDown() override {
        // tidak ada kebutuhan post-set
    }
};


TEST_F(WarigaTest_2024, setup0) {
    wariga.setup("2024-07-14");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sinta,7,-,0,Menga,5,Pasah,9,Sri,6,Pahing,9,Tungleh,7,Redite,5,Sri,6,Dangu,5,Sri,6");
}

TEST_F(WarigaTest_2024, setup1) {
    wariga.setup("2024-07-15");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sinta,7,Luang,1,Pepet,4,Beteng,4,Laba,5,Pon,7,Aryang,6,Soma,4,Indra,5,Dangu,5,Pati,7");
}

TEST_F(WarigaTest_2024, setup2) {
    wariga.setup("2024-07-16");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sinta,7,Luang,1,Pepet,4,Kajeng,7,Jaya,1,Wage,4,Urukung,5,Anggara,3,Guru,8,Dangu,5,Raja,8");
}

TEST_F(WarigaTest_2024, setup3) {
    wariga.setup("2024-07-17");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sinta,7,Luang,1,Pepet,4,Pasah,9,Menala,8,Kliwon,8,Paniron,8,Budha,7,Yama,9,Dangu,5,Manuh,2");
}

TEST_F(WarigaTest_2024, setup4) {
    wariga.setup("2024-07-18");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sinta,7,Luang,1,Pepet,4,Beteng,4,Sri,6,Umanis,5,Was,9,Wraspati,8,Ludra,3,Jangur,8,Duka,4");
}

TEST_F(WarigaTest_2024, setup5) {
    wariga.setup("2024-07-19");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sinta,7,Luang,1,Pepet,4,Kajeng,7,Laba,5,Pahing,9,Maulu,3,Sukra,6,Brahma,7,Gigis,9,Manuh,2");
}

TEST_F(WarigaTest_2024, setup6) {
    wariga.setup("2024-07-20");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sinta,7,-,0,Menga,5,Pasah,9,Jaya,1,Pon,7,Tungleh,7,Saniscara,9,Kala,1,Nohan,3,Manusa,3");
}

TEST_F(WarigaTest_2024, setup7) {
    wariga.setup("2024-07-21");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Landep,1,Luang,1,Pepet,4,Beteng,4,Menala,8,Wage,4,Aryang,6,Redite,5,Uma,4,Ogan,7,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup8) {
    wariga.setup("2024-07-22");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Landep,1,-,0,Menga,5,Kajeng,7,Sri,6,Kliwon,8,Urukung,5,Soma,4,Sri,6,Erengan,1,Suka,10");
}

TEST_F(WarigaTest_2024, setup9) {
    wariga.setup("2024-07-23");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Landep,1,-,0,Menga,5,Pasah,9,Laba,5,Umanis,5,Paniron,8,Anggara,3,Indra,5,Urungan,4,Dewa,9");
}

TEST_F(WarigaTest_2024, setup10) {
    wariga.setup("2024-07-24");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Landep,1,-,0,Menga,5,Beteng,4,Jaya,1,Pahing,9,Was,9,Budha,7,Guru,8,Tulus,6,Manusa,3");
}

TEST_F(WarigaTest_2024, setup11) {
    wariga.setup("2024-07-25");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Landep,1,Luang,1,Pepet,4,Kajeng,7,Menala,8,Pon,7,Maulu,3,Wraspati,8,Yama,9,Dadi,8,Manuh,2");
}

TEST_F(WarigaTest_2024, setup12) {
    wariga.setup("2024-07-26");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Landep,1,-,0,Menga,5,Pasah,9,Sri,6,Wage,4,Tungleh,7,Sukra,6,Ludra,3,Dangu,5,Pandita,5");
}

TEST_F(WarigaTest_2024, setup13) {
    wariga.setup("2024-07-27");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Landep,1,Luang,1,Pepet,4,Beteng,4,Laba,5,Kliwon,8,Aryang,6,Saniscara,9,Brahma,7,Jangur,8,Raja,8");
}

TEST_F(WarigaTest_2024, setup14) {
    wariga.setup("2024-07-28");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ukir,4,-,0,Menga,5,Kajeng,7,Jaya,1,Umanis,5,Urukung,5,Redite,5,Kala,1,Gigis,9,Pandita,5");
}

TEST_F(WarigaTest_2024, setup15) {
    wariga.setup("2024-07-29");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ukir,4,Luang,1,Pepet,4,Pasah,9,Menala,8,Pahing,9,Paniron,8,Soma,4,Uma,4,Nohan,3,Duka,4");
}

TEST_F(WarigaTest_2024, setup16) {
    wariga.setup("2024-07-30");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ukir,4,-,0,Menga,5,Beteng,4,Sri,6,Pon,7,Was,9,Anggara,3,Sri,6,Ogan,7,Pandita,5");
}

TEST_F(WarigaTest_2024, setup17) {
    wariga.setup("2024-07-31");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ukir,4,Luang,1,Pepet,4,Kajeng,7,Laba,5,Wage,4,Maulu,3,Budha,7,Indra,5,Erengan,1,Pati,7");
}

TEST_F(WarigaTest_2024, setup18) {
    wariga.setup("2024-08-01");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ukir,4,-,0,Menga,5,Pasah,9,Jaya,1,Kliwon,8,Tungleh,7,Wraspati,8,Guru,8,Urungan,4,Manusa,3");
}

TEST_F(WarigaTest_2024, setup19) {
    wariga.setup("2024-08-02");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ukir,4,Luang,1,Pepet,4,Beteng,4,Menala,8,Umanis,5,Aryang,6,Sukra,6,Yama,9,Tulus,6,Pati,7");
}

TEST_F(WarigaTest_2024, setup20) {
    wariga.setup("2024-08-03");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ukir,4,-,0,Menga,5,Kajeng,7,Sri,6,Pahing,9,Urukung,5,Saniscara,9,Ludra,3,Dadi,8,Dewa,9");
}

TEST_F(WarigaTest_2024, setup21) {
    wariga.setup("2024-08-04");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kulantir,6,-,0,Menga,5,Pasah,9,Laba,5,Pon,7,Paniron,8,Redite,5,Brahma,7,Dangu,5,Suka,10");
}

TEST_F(WarigaTest_2024, setup22) {
    wariga.setup("2024-08-05");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kulantir,6,-,0,Menga,5,Beteng,4,Jaya,1,Wage,4,Was,9,Soma,4,Kala,1,Jangur,8,Dewa,9");
}

TEST_F(WarigaTest_2024, setup23) {
    wariga.setup("2024-08-06");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kulantir,6,Luang,1,Pepet,4,Kajeng,7,Menala,8,Kliwon,8,Maulu,3,Anggara,3,Uma,4,Gigis,9,Pati,7");
}

TEST_F(WarigaTest_2024, setup24) {
    wariga.setup("2024-08-07");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kulantir,6,-,0,Menga,5,Pasah,9,Sri,6,Umanis,5,Tungleh,7,Budha,7,Sri,6,Nohan,3,Suka,10");
}

TEST_F(WarigaTest_2024, setup25) {
    wariga.setup("2024-08-08");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kulantir,6,Luang,1,Pepet,4,Beteng,4,Laba,5,Pahing,9,Aryang,6,Wraspati,8,Indra,5,Ogan,7,Raja,8");
}

TEST_F(WarigaTest_2024, setup26) {
    wariga.setup("2024-08-09");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kulantir,6,Luang,1,Pepet,4,Kajeng,7,Jaya,1,Pon,7,Urukung,5,Sukra,6,Guru,8,Erengan,1,Duka,4");
}

TEST_F(WarigaTest_2024, setup27) {
    wariga.setup("2024-08-10");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kulantir,6,Luang,1,Pepet,4,Pasah,9,Menala,8,Wage,4,Paniron,8,Saniscara,9,Yama,9,Urungan,4,Duka,4");
}

TEST_F(WarigaTest_2024, setup28) {
    wariga.setup("2024-08-11");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tolu,5,Luang,1,Pepet,4,Beteng,4,Sri,6,Kliwon,8,Was,9,Redite,5,Ludra,3,Tulus,6,Duka,4");
}

TEST_F(WarigaTest_2024, setup29) {
    wariga.setup("2024-08-12");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tolu,5,Luang,1,Pepet,4,Kajeng,7,Laba,5,Umanis,5,Maulu,3,Soma,4,Brahma,7,Dadi,8,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup30) {
    wariga.setup("2024-08-13");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tolu,5,-,0,Menga,5,Pasah,9,Jaya,1,Pahing,9,Tungleh,7,Anggara,3,Kala,1,Dangu,5,Suka,10");
}

TEST_F(WarigaTest_2024, setup31) {
    wariga.setup("2024-08-14");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tolu,5,-,0,Menga,5,Beteng,4,Menala,8,Pon,7,Aryang,6,Budha,7,Uma,4,Jangur,8,Sri,6");
}

TEST_F(WarigaTest_2024, setup32) {
    wariga.setup("2024-08-15");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tolu,5,-,0,Menga,5,Kajeng,7,Sri,6,Wage,4,Urukung,5,Wraspati,8,Sri,6,Gigis,9,Suka,10");
}

TEST_F(WarigaTest_2024, setup33) {
    wariga.setup("2024-08-16");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tolu,5,-,0,Menga,5,Pasah,9,Laba,5,Kliwon,8,Paniron,8,Sukra,6,Indra,5,Nohan,3,Sri,6");
}

TEST_F(WarigaTest_2024, setup34) {
    wariga.setup("2024-08-17");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tolu,5,-,0,Menga,5,Beteng,4,Jaya,1,Umanis,5,Was,9,Saniscara,9,Guru,8,Ogan,7,Sri,6");
}

TEST_F(WarigaTest_2024, setup35) {
    wariga.setup("2024-08-18");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Gumbreg,8,-,0,Menga,5,Kajeng,7,Menala,8,Pahing,9,Maulu,3,Redite,5,Yama,9,Erengan,1,Sri,6");
}

TEST_F(WarigaTest_2024, setup36) {
    wariga.setup("2024-08-19");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Gumbreg,8,Luang,1,Pepet,4,Pasah,9,Sri,6,Pon,7,Tungleh,7,Soma,4,Ludra,3,Urungan,4,Pati,7");
}

TEST_F(WarigaTest_2024, setup37) {
    wariga.setup("2024-08-20");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Gumbreg,8,Luang,1,Pepet,4,Beteng,4,Laba,5,Wage,4,Aryang,6,Anggara,3,Brahma,7,Tulus,6,Raja,8");
}

TEST_F(WarigaTest_2024, setup38) {
    wariga.setup("2024-08-21");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Gumbreg,8,Luang,1,Pepet,4,Kajeng,7,Jaya,1,Kliwon,8,Urukung,5,Budha,7,Kala,1,Dadi,8,Manuh,2");
}

TEST_F(WarigaTest_2024, setup39) {
    wariga.setup("2024-08-22");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Gumbreg,8,Luang,1,Pepet,4,Pasah,9,Menala,8,Umanis,5,Paniron,8,Wraspati,8,Uma,4,Dangu,5,Duka,4");
}

TEST_F(WarigaTest_2024, setup40) {
    wariga.setup("2024-08-23");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Gumbreg,8,Luang,1,Pepet,4,Beteng,4,Sri,6,Pahing,9,Was,9,Sukra,6,Sri,6,Jangur,8,Manuh,2");
}

TEST_F(WarigaTest_2024, setup41) {
    wariga.setup("2024-08-24");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Gumbreg,8,-,0,Menga,5,Kajeng,7,Laba,5,Pon,7,Maulu,3,Saniscara,9,Indra,5,Gigis,9,Manusa,3");
}

TEST_F(WarigaTest_2024, setup42) {
    wariga.setup("2024-08-25");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wariga,9,Luang,1,Pepet,4,Pasah,9,Jaya,1,Wage,4,Tungleh,7,Redite,5,Guru,8,Nohan,3,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup43) {
    wariga.setup("2024-08-26");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wariga,9,-,0,Menga,5,Beteng,4,Menala,8,Kliwon,8,Aryang,6,Soma,4,Yama,9,Ogan,7,Suka,10");
}

TEST_F(WarigaTest_2024, setup44) {
    wariga.setup("2024-08-27");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wariga,9,-,0,Menga,5,Kajeng,7,Sri,6,Umanis,5,Urukung,5,Anggara,3,Ludra,3,Erengan,1,Dewa,9");
}

TEST_F(WarigaTest_2024, setup45) {
    wariga.setup("2024-08-28");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wariga,9,-,0,Menga,5,Pasah,9,Laba,5,Pahing,9,Paniron,8,Budha,7,Brahma,7,Urungan,4,Manusa,3");
}

TEST_F(WarigaTest_2024, setup46) {
    wariga.setup("2024-08-29");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wariga,9,Luang,1,Pepet,4,Beteng,4,Jaya,1,Pon,7,Was,9,Wraspati,8,Kala,1,Tulus,6,Manuh,2");
}

TEST_F(WarigaTest_2024, setup47) {
    wariga.setup("2024-08-30");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wariga,9,-,0,Menga,5,Kajeng,7,Menala,8,Wage,4,Maulu,3,Sukra,6,Uma,4,Dadi,8,Pandita,5");
}

TEST_F(WarigaTest_2024, setup48) {
    wariga.setup("2024-08-31");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wariga,9,Luang,1,Pepet,4,Pasah,9,Sri,6,Kliwon,8,Tungleh,7,Saniscara,9,Sri,6,Dangu,5,Raja,8");
}

TEST_F(WarigaTest_2024, setup49) {
    wariga.setup("2024-09-01");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Warigadean,3,-,0,Menga,5,Beteng,4,Laba,5,Umanis,5,Aryang,6,Redite,5,Indra,5,Jangur,8,Pandita,5");
}

TEST_F(WarigaTest_2024, setup50) {
    wariga.setup("2024-09-02");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Warigadean,3,Luang,1,Pepet,4,Kajeng,7,Jaya,1,Pahing,9,Urukung,5,Soma,4,Guru,8,Gigis,9,Duka,4");
}

TEST_F(WarigaTest_2024, setup51) {
    wariga.setup("2024-09-03");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Warigadean,3,-,0,Menga,5,Pasah,9,Menala,8,Pon,7,Paniron,8,Anggara,3,Yama,9,Nohan,3,Pandita,5");
}

TEST_F(WarigaTest_2024, setup52) {
    wariga.setup("2024-09-04");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Warigadean,3,Luang,1,Pepet,4,Beteng,4,Sri,6,Wage,4,Was,9,Budha,7,Ludra,3,Ogan,7,Pati,7");
}

TEST_F(WarigaTest_2024, setup53) {
    wariga.setup("2024-09-05");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Warigadean,3,-,0,Menga,5,Kajeng,7,Laba,5,Kliwon,8,Maulu,3,Wraspati,8,Brahma,7,Erengan,1,Manusa,3");
}

TEST_F(WarigaTest_2024, setup54) {
    wariga.setup("2024-09-06");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Warigadean,3,Luang,1,Pepet,4,Pasah,9,Jaya,1,Umanis,5,Tungleh,7,Sukra,6,Kala,1,Urungan,4,Pati,7");
}

TEST_F(WarigaTest_2024, setup55) {
    wariga.setup("2024-09-07");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Warigadean,3,-,0,Menga,5,Beteng,4,Menala,8,Pahing,9,Aryang,6,Saniscara,9,Uma,4,Tulus,6,Dewa,9");
}

TEST_F(WarigaTest_2024, setup56) {
    wariga.setup("2024-09-08");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Julungwangi,7,-,0,Menga,5,Kajeng,7,Sri,6,Pon,7,Urukung,5,Redite,5,Sri,6,Dadi,8,Suka,10");
}

TEST_F(WarigaTest_2024, setup57) {
    wariga.setup("2024-09-09");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Julungwangi,7,-,0,Menga,5,Pasah,9,Laba,5,Wage,4,Paniron,8,Soma,4,Indra,5,Dangu,5,Dewa,9");
}

TEST_F(WarigaTest_2024, setup58) {
    wariga.setup("2024-09-10");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Julungwangi,7,Luang,1,Pepet,4,Beteng,4,Jaya,1,Kliwon,8,Was,9,Anggara,3,Guru,8,Jangur,8,Pati,7");
}

TEST_F(WarigaTest_2024, setup59) {
    wariga.setup("2024-09-11");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Julungwangi,7,-,0,Menga,5,Kajeng,7,Menala,8,Umanis,5,Maulu,3,Budha,7,Yama,9,Gigis,9,Suka,10");
}

TEST_F(WarigaTest_2024, setup60) {
    wariga.setup("2024-09-12");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Julungwangi,7,Luang,1,Pepet,4,Pasah,9,Sri,6,Pahing,9,Tungleh,7,Wraspati,8,Ludra,3,Nohan,3,Raja,8");
}

TEST_F(WarigaTest_2024, setup61) {
    wariga.setup("2024-09-13");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Julungwangi,7,Luang,1,Pepet,4,Beteng,4,Laba,5,Pon,7,Aryang,6,Sukra,6,Brahma,7,Ogan,7,Duka,4");
}

TEST_F(WarigaTest_2024, setup62) {
    wariga.setup("2024-09-14");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Julungwangi,7,Luang,1,Pepet,4,Kajeng,7,Jaya,1,Wage,4,Urukung,5,Saniscara,9,Kala,1,Erengan,1,Duka,4");
}

TEST_F(WarigaTest_2024, setup63) {
    wariga.setup("2024-09-15");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sungsang,1,Luang,1,Pepet,4,Pasah,9,Menala,8,Kliwon,8,Paniron,8,Redite,5,Uma,4,Urungan,4,Duka,4");
}

TEST_F(WarigaTest_2024, setup64) {
    wariga.setup("2024-09-16");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sungsang,1,Luang,1,Pepet,4,Beteng,4,Sri,6,Umanis,5,Was,9,Soma,4,Sri,6,Tulus,6,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup65) {
    wariga.setup("2024-09-17");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sungsang,1,-,0,Menga,5,Kajeng,7,Laba,5,Pahing,9,Maulu,3,Anggara,3,Indra,5,Dadi,8,Suka,10");
}

TEST_F(WarigaTest_2024, setup66) {
    wariga.setup("2024-09-18");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sungsang,1,-,0,Menga,5,Pasah,9,Jaya,1,Pon,7,Tungleh,7,Budha,7,Guru,8,Dangu,5,Sri,6");
}

TEST_F(WarigaTest_2024, setup67) {
    wariga.setup("2024-09-19");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sungsang,1,-,0,Menga,5,Beteng,4,Menala,8,Wage,4,Aryang,6,Wraspati,8,Yama,9,Jangur,8,Suka,10");
}

TEST_F(WarigaTest_2024, setup68) {
    wariga.setup("2024-09-20");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sungsang,1,-,0,Menga,5,Kajeng,7,Sri,6,Kliwon,8,Urukung,5,Sukra,6,Ludra,3,Gigis,9,Sri,6");
}

TEST_F(WarigaTest_2024, setup69) {
    wariga.setup("2024-09-21");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Sungsang,1,-,0,Menga,5,Pasah,9,Laba,5,Umanis,5,Paniron,8,Saniscara,9,Brahma,7,Nohan,3,Sri,6");
}

TEST_F(WarigaTest_2024, setup70) {
    wariga.setup("2024-09-22");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dungulan,4,-,0,Menga,5,Beteng,4,Jaya,1,Pahing,9,Was,9,Redite,5,Kala,1,Ogan,7,Sri,6");
}

TEST_F(WarigaTest_2024, setup71) {
    wariga.setup("2024-09-23");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dungulan,4,Luang,1,Pepet,4,Kajeng,7,Jaya,1,Pon,7,Maulu,3,Soma,4,Kala,1,Erengan,1,Pati,7");
}

TEST_F(WarigaTest_2024, setup72) {
    wariga.setup("2024-09-24");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dungulan,4,Luang,1,Pepet,4,Pasah,9,Jaya,1,Wage,4,Tungleh,7,Anggara,3,Kala,1,Urungan,4,Raja,8");
}

TEST_F(WarigaTest_2024, setup73) {
    wariga.setup("2024-09-25");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dungulan,4,Luang,1,Pepet,4,Beteng,4,Menala,8,Kliwon,8,Aryang,6,Budha,7,Uma,4,Tulus,6,Manuh,2");
}

TEST_F(WarigaTest_2024, setup74) {
    wariga.setup("2024-09-26");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dungulan,4,Luang,1,Pepet,4,Kajeng,7,Sri,6,Umanis,5,Urukung,5,Wraspati,8,Sri,6,Dadi,8,Duka,4");
}

TEST_F(WarigaTest_2024, setup75) {
    wariga.setup("2024-09-27");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dungulan,4,Luang,1,Pepet,4,Pasah,9,Laba,5,Pahing,9,Paniron,8,Sukra,6,Indra,5,Dangu,5,Manuh,2");
}

TEST_F(WarigaTest_2024, setup76) {
    wariga.setup("2024-09-28");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dungulan,4,-,0,Menga,5,Beteng,4,Jaya,1,Pon,7,Was,9,Saniscara,9,Guru,8,Jangur,8,Manusa,3");
}

TEST_F(WarigaTest_2024, setup77) {
    wariga.setup("2024-09-29");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kuningan,6,Luang,1,Pepet,4,Kajeng,7,Menala,8,Wage,4,Maulu,3,Redite,5,Yama,9,Gigis,9,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup78) {
    wariga.setup("2024-09-30");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kuningan,6,-,0,Menga,5,Pasah,9,Sri,6,Kliwon,8,Tungleh,7,Soma,4,Ludra,3,Nohan,3,Suka,10");
}

TEST_F(WarigaTest_2024, setup79) {
    wariga.setup("2024-10-01");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kuningan,6,-,0,Menga,5,Beteng,4,Laba,5,Umanis,5,Aryang,6,Anggara,3,Brahma,7,Ogan,7,Dewa,9");
}

TEST_F(WarigaTest_2024, setup80) {
    wariga.setup("2024-10-02");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kuningan,6,-,0,Menga,5,Kajeng,7,Jaya,1,Pahing,9,Urukung,5,Budha,7,Kala,1,Erengan,1,Manusa,3");
}

TEST_F(WarigaTest_2024, setup81) {
    wariga.setup("2024-10-03");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kuningan,6,Luang,1,Pepet,4,Pasah,9,Menala,8,Pon,7,Paniron,8,Wraspati,8,Uma,4,Urungan,4,Manuh,2");
}

TEST_F(WarigaTest_2024, setup82) {
    wariga.setup("2024-10-04");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kuningan,6,-,0,Menga,5,Beteng,4,Sri,6,Wage,4,Was,9,Sukra,6,Sri,6,Tulus,6,Pandita,5");
}

TEST_F(WarigaTest_2024, setup83) {
    wariga.setup("2024-10-05");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kuningan,6,Luang,1,Pepet,4,Kajeng,7,Laba,5,Kliwon,8,Maulu,3,Saniscara,9,Indra,5,Dadi,8,Raja,8");
}

TEST_F(WarigaTest_2024, setup84) {
    wariga.setup("2024-10-06");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Langkir,5,-,0,Menga,5,Pasah,9,Jaya,1,Umanis,5,Tungleh,7,Redite,5,Guru,8,Dangu,5,Pandita,5");
}

TEST_F(WarigaTest_2024, setup85) {
    wariga.setup("2024-10-07");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Langkir,5,Luang,1,Pepet,4,Beteng,4,Menala,8,Pahing,9,Aryang,6,Soma,4,Yama,9,Jangur,8,Duka,4");
}

TEST_F(WarigaTest_2024, setup86) {
    wariga.setup("2024-10-08");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Langkir,5,-,0,Menga,5,Kajeng,7,Sri,6,Pon,7,Urukung,5,Anggara,3,Ludra,3,Gigis,9,Pandita,5");
}

TEST_F(WarigaTest_2024, setup87) {
    wariga.setup("2024-10-09");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Langkir,5,Luang,1,Pepet,4,Pasah,9,Laba,5,Wage,4,Paniron,8,Budha,7,Brahma,7,Nohan,3,Pati,7");
}

TEST_F(WarigaTest_2024, setup88) {
    wariga.setup("2024-10-10");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Langkir,5,-,0,Menga,5,Beteng,4,Jaya,1,Kliwon,8,Was,9,Wraspati,8,Kala,1,Ogan,7,Manusa,3");
}

TEST_F(WarigaTest_2024, setup89) {
    wariga.setup("2024-10-11");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Langkir,5,Luang,1,Pepet,4,Kajeng,7,Menala,8,Umanis,5,Maulu,3,Sukra,6,Uma,4,Erengan,1,Pati,7");
}

TEST_F(WarigaTest_2024, setup90) {
    wariga.setup("2024-10-12");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Langkir,5,-,0,Menga,5,Pasah,9,Sri,6,Pahing,9,Tungleh,7,Saniscara,9,Sri,6,Urungan,4,Dewa,9");
}

TEST_F(WarigaTest_2024, setup91) {
    wariga.setup("2024-10-13");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangsia,8,-,0,Menga,5,Beteng,4,Laba,5,Pon,7,Aryang,6,Redite,5,Indra,5,Tulus,6,Suka,10");
}

TEST_F(WarigaTest_2024, setup92) {
    wariga.setup("2024-10-14");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangsia,8,-,0,Menga,5,Kajeng,7,Jaya,1,Wage,4,Urukung,5,Soma,4,Guru,8,Dadi,8,Dewa,9");
}

TEST_F(WarigaTest_2024, setup93) {
    wariga.setup("2024-10-15");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangsia,8,Luang,1,Pepet,4,Pasah,9,Menala,8,Kliwon,8,Paniron,8,Anggara,3,Yama,9,Dangu,5,Pati,7");
}

TEST_F(WarigaTest_2024, setup94) {
    wariga.setup("2024-10-16");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangsia,8,-,0,Menga,5,Beteng,4,Sri,6,Umanis,5,Was,9,Budha,7,Ludra,3,Jangur,8,Suka,10");
}

TEST_F(WarigaTest_2024, setup95) {
    wariga.setup("2024-10-17");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangsia,8,Luang,1,Pepet,4,Kajeng,7,Laba,5,Pahing,9,Maulu,3,Wraspati,8,Brahma,7,Gigis,9,Raja,8");
}

TEST_F(WarigaTest_2024, setup96) {
    wariga.setup("2024-10-18");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangsia,8,Luang,1,Pepet,4,Pasah,9,Jaya,1,Pon,7,Tungleh,7,Sukra,6,Kala,1,Nohan,3,Duka,4");
}

TEST_F(WarigaTest_2024, setup97) {
    wariga.setup("2024-10-19");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangsia,8,Luang,1,Pepet,4,Beteng,4,Menala,8,Wage,4,Aryang,6,Saniscara,9,Uma,4,Ogan,7,Duka,4");
}

TEST_F(WarigaTest_2024, setup98) {
    wariga.setup("2024-10-20");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pujut,9,Luang,1,Pepet,4,Kajeng,7,Sri,6,Kliwon,8,Urukung,5,Redite,5,Sri,6,Erengan,1,Duka,4");
}

TEST_F(WarigaTest_2024, setup99) {
    wariga.setup("2024-10-21");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pujut,9,Luang,1,Pepet,4,Pasah,9,Laba,5,Umanis,5,Paniron,8,Soma,4,Indra,5,Urungan,4,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup100) {
    wariga.setup("2024-10-22");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pujut,9,-,0,Menga,5,Beteng,4,Jaya,1,Pahing,9,Was,9,Anggara,3,Guru,8,Tulus,6,Suka,10");
}

TEST_F(WarigaTest_2024, setup101) {
    wariga.setup("2024-10-23");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pujut,9,-,0,Menga,5,Kajeng,7,Menala,8,Pon,7,Maulu,3,Budha,7,Yama,9,Dadi,8,Sri,6");
}

TEST_F(WarigaTest_2024, setup102) {
    wariga.setup("2024-10-24");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pujut,9,-,0,Menga,5,Pasah,9,Sri,6,Wage,4,Tungleh,7,Wraspati,8,Ludra,3,Dangu,5,Suka,10");
}

TEST_F(WarigaTest_2024, setup103) {
    wariga.setup("2024-10-25");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pujut,9,-,0,Menga,5,Beteng,4,Laba,5,Kliwon,8,Aryang,6,Sukra,6,Brahma,7,Jangur,8,Sri,6");
}

TEST_F(WarigaTest_2024, setup104) {
    wariga.setup("2024-10-26");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pujut,9,-,0,Menga,5,Kajeng,7,Jaya,1,Umanis,5,Urukung,5,Saniscara,9,Kala,1,Gigis,9,Sri,6");
}

TEST_F(WarigaTest_2024, setup105) {
    wariga.setup("2024-10-27");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pahang,3,-,0,Menga,5,Pasah,9,Menala,8,Pahing,9,Paniron,8,Redite,5,Uma,4,Nohan,3,Sri,6");
}

TEST_F(WarigaTest_2024, setup106) {
    wariga.setup("2024-10-28");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pahang,3,Luang,1,Pepet,4,Beteng,4,Sri,6,Pon,7,Was,9,Soma,4,Sri,6,Ogan,7,Pati,7");
}

TEST_F(WarigaTest_2024, setup107) {
    wariga.setup("2024-10-29");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pahang,3,Luang,1,Pepet,4,Kajeng,7,Laba,5,Wage,4,Maulu,3,Anggara,3,Indra,5,Erengan,1,Raja,8");
}

TEST_F(WarigaTest_2024, setup108) {
    wariga.setup("2024-10-30");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pahang,3,Luang,1,Pepet,4,Pasah,9,Jaya,1,Kliwon,8,Tungleh,7,Budha,7,Guru,8,Urungan,4,Manuh,2");
}

TEST_F(WarigaTest_2024, setup109) {
    wariga.setup("2024-10-31");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pahang,3,Luang,1,Pepet,4,Beteng,4,Menala,8,Umanis,5,Aryang,6,Wraspati,8,Yama,9,Tulus,6,Duka,4");
}

TEST_F(WarigaTest_2024, setup110) {
    wariga.setup("2024-11-01");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pahang,3,Luang,1,Pepet,4,Kajeng,7,Sri,6,Pahing,9,Urukung,5,Sukra,6,Ludra,3,Dadi,8,Manuh,2");
}

TEST_F(WarigaTest_2024, setup111) {
    wariga.setup("2024-11-02");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Pahang,3,-,0,Menga,5,Pasah,9,Laba,5,Pon,7,Paniron,8,Saniscara,9,Brahma,7,Dangu,5,Manusa,3");
}

TEST_F(WarigaTest_2024, setup112) {
    wariga.setup("2024-11-03");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Krulut,7,Luang,1,Pepet,4,Beteng,4,Jaya,1,Wage,4,Was,9,Redite,5,Kala,1,Jangur,8,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup113) {
    wariga.setup("2024-11-04");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Krulut,7,-,0,Menga,5,Kajeng,7,Menala,8,Kliwon,8,Maulu,3,Soma,4,Uma,4,Gigis,9,Suka,10");
}

TEST_F(WarigaTest_2024, setup114) {
    wariga.setup("2024-11-05");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Krulut,7,-,0,Menga,5,Pasah,9,Sri,6,Umanis,5,Tungleh,7,Anggara,3,Sri,6,Nohan,3,Dewa,9");
}

TEST_F(WarigaTest_2024, setup115) {
    wariga.setup("2024-11-06");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Krulut,7,-,0,Menga,5,Beteng,4,Laba,5,Pahing,9,Aryang,6,Budha,7,Indra,5,Ogan,7,Manusa,3");
}

TEST_F(WarigaTest_2024, setup116) {
    wariga.setup("2024-11-07");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Krulut,7,Luang,1,Pepet,4,Kajeng,7,Jaya,1,Pon,7,Urukung,5,Wraspati,8,Guru,8,Erengan,1,Manuh,2");
}

TEST_F(WarigaTest_2024, setup117) {
    wariga.setup("2024-11-08");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Krulut,7,-,0,Menga,5,Pasah,9,Menala,8,Wage,4,Paniron,8,Sukra,6,Yama,9,Urungan,4,Pandita,5");
}

TEST_F(WarigaTest_2024, setup118) {
    wariga.setup("2024-11-09");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Krulut,7,Luang,1,Pepet,4,Beteng,4,Sri,6,Kliwon,8,Was,9,Saniscara,9,Ludra,3,Tulus,6,Raja,8");
}

TEST_F(WarigaTest_2024, setup119) {
    wariga.setup("2024-11-10");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Merakih,1,-,0,Menga,5,Kajeng,7,Laba,5,Umanis,5,Maulu,3,Redite,5,Brahma,7,Dadi,8,Pandita,5");
}

TEST_F(WarigaTest_2024, setup120) {
    wariga.setup("2024-11-11");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Merakih,1,Luang,1,Pepet,4,Pasah,9,Jaya,1,Pahing,9,Tungleh,7,Soma,4,Kala,1,Dangu,5,Duka,4");
}

TEST_F(WarigaTest_2024, setup121) {
    wariga.setup("2024-11-12");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Merakih,1,-,0,Menga,5,Beteng,4,Menala,8,Pon,7,Aryang,6,Anggara,3,Uma,4,Jangur,8,Pandita,5");
}

TEST_F(WarigaTest_2024, setup122) {
    wariga.setup("2024-11-13");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Merakih,1,Luang,1,Pepet,4,Kajeng,7,Sri,6,Wage,4,Urukung,5,Budha,7,Sri,6,Gigis,9,Pati,7");
}

TEST_F(WarigaTest_2024, setup123) {
    wariga.setup("2024-11-14");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Merakih,1,-,0,Menga,5,Pasah,9,Laba,5,Kliwon,8,Paniron,8,Wraspati,8,Indra,5,Nohan,3,Manusa,3");
}

TEST_F(WarigaTest_2024, setup124) {
    wariga.setup("2024-11-15");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Merakih,1,Luang,1,Pepet,4,Beteng,4,Jaya,1,Umanis,5,Was,9,Sukra,6,Guru,8,Ogan,7,Pati,7");
}

TEST_F(WarigaTest_2024, setup125) {
    wariga.setup("2024-11-16");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Merakih,1,-,0,Menga,5,Kajeng,7,Menala,8,Pahing,9,Maulu,3,Saniscara,9,Yama,9,Erengan,1,Dewa,9");
}

TEST_F(WarigaTest_2024, setup126) {
    wariga.setup("2024-11-17");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tambir,4,-,0,Menga,5,Pasah,9,Sri,6,Pon,7,Tungleh,7,Redite,5,Ludra,3,Urungan,4,Suka,10");
}

TEST_F(WarigaTest_2024, setup127) {
    wariga.setup("2024-11-18");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tambir,4,-,0,Menga,5,Beteng,4,Laba,5,Wage,4,Aryang,6,Soma,4,Brahma,7,Tulus,6,Dewa,9");
}

TEST_F(WarigaTest_2024, setup128) {
    wariga.setup("2024-11-19");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tambir,4,Luang,1,Pepet,4,Kajeng,7,Jaya,1,Kliwon,8,Urukung,5,Anggara,3,Kala,1,Dadi,8,Pati,7");
}

TEST_F(WarigaTest_2024, setup129) {
    wariga.setup("2024-11-20");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tambir,4,-,0,Menga,5,Pasah,9,Menala,8,Umanis,5,Paniron,8,Budha,7,Uma,4,Dangu,5,Suka,10");
}

TEST_F(WarigaTest_2024, setup130) {
    wariga.setup("2024-11-21");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tambir,4,Luang,1,Pepet,4,Beteng,4,Sri,6,Pahing,9,Was,9,Wraspati,8,Sri,6,Jangur,8,Raja,8");
}

TEST_F(WarigaTest_2024, setup131) {
    wariga.setup("2024-11-22");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tambir,4,Luang,1,Pepet,4,Kajeng,7,Laba,5,Pon,7,Maulu,3,Sukra,6,Indra,5,Gigis,9,Duka,4");
}

TEST_F(WarigaTest_2024, setup132) {
    wariga.setup("2024-11-23");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Tambir,4,Luang,1,Pepet,4,Pasah,9,Jaya,1,Wage,4,Tungleh,7,Saniscara,9,Guru,8,Nohan,3,Duka,4");
}

TEST_F(WarigaTest_2024, setup133) {
    wariga.setup("2024-11-24");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangkungan,6,Luang,1,Pepet,4,Beteng,4,Menala,8,Kliwon,8,Aryang,6,Redite,5,Yama,9,Ogan,7,Duka,4");
}

TEST_F(WarigaTest_2024, setup134) {
    wariga.setup("2024-11-25");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangkungan,6,Luang,1,Pepet,4,Kajeng,7,Sri,6,Umanis,5,Urukung,5,Soma,4,Ludra,3,Erengan,1,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup135) {
    wariga.setup("2024-11-26");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangkungan,6,-,0,Menga,5,Pasah,9,Laba,5,Pahing,9,Paniron,8,Anggara,3,Brahma,7,Urungan,4,Suka,10");
}

TEST_F(WarigaTest_2024, setup136) {
    wariga.setup("2024-11-27");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangkungan,6,-,0,Menga,5,Beteng,4,Jaya,1,Pon,7,Was,9,Budha,7,Kala,1,Tulus,6,Sri,6");
}

TEST_F(WarigaTest_2024, setup137) {
    wariga.setup("2024-11-28");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangkungan,6,-,0,Menga,5,Kajeng,7,Menala,8,Wage,4,Maulu,3,Wraspati,8,Uma,4,Dadi,8,Suka,10");
}

TEST_F(WarigaTest_2024, setup138) {
    wariga.setup("2024-11-29");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangkungan,6,-,0,Menga,5,Pasah,9,Sri,6,Kliwon,8,Tungleh,7,Sukra,6,Sri,6,Dangu,5,Sri,6");
}

TEST_F(WarigaTest_2024, setup139) {
    wariga.setup("2024-11-30");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Medangkungan,6,-,0,Menga,5,Beteng,4,Laba,5,Umanis,5,Aryang,6,Saniscara,9,Indra,5,Jangur,8,Sri,6");
}

TEST_F(WarigaTest_2024, setup140) {
    wariga.setup("2024-12-01");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Matal,5,-,0,Menga,5,Kajeng,7,Jaya,1,Pahing,9,Urukung,5,Redite,5,Guru,8,Gigis,9,Sri,6");
}

TEST_F(WarigaTest_2024, setup141) {
    wariga.setup("2024-12-02");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Matal,5,Luang,1,Pepet,4,Pasah,9,Menala,8,Pon,7,Paniron,8,Soma,4,Yama,9,Nohan,3,Pati,7");
}

TEST_F(WarigaTest_2024, setup142) {
    wariga.setup("2024-12-03");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Matal,5,Luang,1,Pepet,4,Beteng,4,Sri,6,Wage,4,Was,9,Anggara,3,Ludra,3,Ogan,7,Raja,8");
}

TEST_F(WarigaTest_2024, setup143) {
    wariga.setup("2024-12-04");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Matal,5,Luang,1,Pepet,4,Kajeng,7,Laba,5,Kliwon,8,Maulu,3,Budha,7,Brahma,7,Erengan,1,Manuh,2");
}

TEST_F(WarigaTest_2024, setup144) {
    wariga.setup("2024-12-05");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Matal,5,Luang,1,Pepet,4,Pasah,9,Jaya,1,Umanis,5,Tungleh,7,Wraspati,8,Kala,1,Urungan,4,Duka,4");
}

TEST_F(WarigaTest_2024, setup145) {
    wariga.setup("2024-12-06");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Matal,5,Luang,1,Pepet,4,Beteng,4,Menala,8,Pahing,9,Aryang,6,Sukra,6,Uma,4,Tulus,6,Manuh,2");
}

TEST_F(WarigaTest_2024, setup146) {
    wariga.setup("2024-12-07");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Matal,5,-,0,Menga,5,Kajeng,7,Sri,6,Pon,7,Urukung,5,Saniscara,9,Sri,6,Dadi,8,Manusa,3");
}

TEST_F(WarigaTest_2024, setup147) {
    wariga.setup("2024-12-08");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Uye,8,Luang,1,Pepet,4,Pasah,9,Laba,5,Wage,4,Paniron,8,Redite,5,Indra,5,Dangu,5,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup148) {
    wariga.setup("2024-12-09");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Uye,8,-,0,Menga,5,Beteng,4,Jaya,1,Kliwon,8,Was,9,Soma,4,Guru,8,Jangur,8,Suka,10");
}

TEST_F(WarigaTest_2024, setup149) {
    wariga.setup("2024-12-10");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Uye,8,-,0,Menga,5,Kajeng,7,Menala,8,Umanis,5,Maulu,3,Anggara,3,Yama,9,Gigis,9,Dewa,9");
}

TEST_F(WarigaTest_2024, setup150) {
    wariga.setup("2024-12-11");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Uye,8,-,0,Menga,5,Pasah,9,Sri,6,Pahing,9,Tungleh,7,Budha,7,Ludra,3,Nohan,3,Manusa,3");
}

TEST_F(WarigaTest_2024, setup151) {
    wariga.setup("2024-12-12");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Uye,8,Luang,1,Pepet,4,Beteng,4,Laba,5,Pon,7,Aryang,6,Wraspati,8,Brahma,7,Ogan,7,Manuh,2");
}

TEST_F(WarigaTest_2024, setup152) {
    wariga.setup("2024-12-13");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Uye,8,-,0,Menga,5,Kajeng,7,Jaya,1,Wage,4,Urukung,5,Sukra,6,Kala,1,Erengan,1,Pandita,5");
}

TEST_F(WarigaTest_2024, setup153) {
    wariga.setup("2024-12-14");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Uye,8,Luang,1,Pepet,4,Pasah,9,Menala,8,Kliwon,8,Paniron,8,Saniscara,9,Uma,4,Urungan,4,Raja,8");
}

TEST_F(WarigaTest_2024, setup154) {
    wariga.setup("2024-12-15");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Menail,9,-,0,Menga,5,Beteng,4,Sri,6,Umanis,5,Was,9,Redite,5,Sri,6,Tulus,6,Pandita,5");
}

TEST_F(WarigaTest_2024, setup155) {
    wariga.setup("2024-12-16");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Menail,9,Luang,1,Pepet,4,Kajeng,7,Laba,5,Pahing,9,Maulu,3,Soma,4,Indra,5,Dadi,8,Duka,4");
}

TEST_F(WarigaTest_2024, setup156) {
    wariga.setup("2024-12-17");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Menail,9,-,0,Menga,5,Pasah,9,Jaya,1,Pon,7,Tungleh,7,Anggara,3,Guru,8,Dangu,5,Pandita,5");
}

TEST_F(WarigaTest_2024, setup157) {
    wariga.setup("2024-12-18");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Menail,9,Luang,1,Pepet,4,Beteng,4,Menala,8,Wage,4,Aryang,6,Budha,7,Yama,9,Jangur,8,Pati,7");
}

TEST_F(WarigaTest_2024, setup158) {
    wariga.setup("2024-12-19");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Menail,9,-,0,Menga,5,Kajeng,7,Sri,6,Kliwon,8,Urukung,5,Wraspati,8,Ludra,3,Gigis,9,Manusa,3");
}

TEST_F(WarigaTest_2024, setup159) {
    wariga.setup("2024-12-20");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Menail,9,Luang,1,Pepet,4,Pasah,9,Laba,5,Umanis,5,Paniron,8,Sukra,6,Brahma,7,Nohan,3,Pati,7");
}

TEST_F(WarigaTest_2024, setup160) {
    wariga.setup("2024-12-21");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Menail,9,-,0,Menga,5,Beteng,4,Jaya,1,Pahing,9,Was,9,Saniscara,9,Kala,1,Ogan,7,Dewa,9");
}

TEST_F(WarigaTest_2024, setup161) {
    wariga.setup("2024-12-22");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Prangbakat,3,-,0,Menga,5,Kajeng,7,Menala,8,Pon,7,Maulu,3,Redite,5,Uma,4,Erengan,1,Suka,10");
}

TEST_F(WarigaTest_2024, setup162) {
    wariga.setup("2024-12-23");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Prangbakat,3,-,0,Menga,5,Pasah,9,Sri,6,Wage,4,Tungleh,7,Soma,4,Sri,6,Urungan,4,Dewa,9");
}

TEST_F(WarigaTest_2024, setup163) {
    wariga.setup("2024-12-24");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Prangbakat,3,Luang,1,Pepet,4,Beteng,4,Laba,5,Kliwon,8,Aryang,6,Anggara,3,Indra,5,Tulus,6,Pati,7");
}

TEST_F(WarigaTest_2024, setup164) {
    wariga.setup("2024-12-25");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Prangbakat,3,-,0,Menga,5,Kajeng,7,Jaya,1,Umanis,5,Urukung,5,Budha,7,Guru,8,Dadi,8,Suka,10");
}

TEST_F(WarigaTest_2024, setup165) {
    wariga.setup("2024-12-26");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Prangbakat,3,Luang,1,Pepet,4,Pasah,9,Menala,8,Pahing,9,Paniron,8,Wraspati,8,Yama,9,Dangu,5,Raja,8");
}

TEST_F(WarigaTest_2024, setup166) {
    wariga.setup("2024-12-27");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Prangbakat,3,Luang,1,Pepet,4,Beteng,4,Sri,6,Pon,7,Was,9,Sukra,6,Ludra,3,Jangur,8,Duka,4");
}

TEST_F(WarigaTest_2024, setup167) {
    wariga.setup("2024-12-28");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Prangbakat,3,Luang,1,Pepet,4,Kajeng,7,Laba,5,Wage,4,Maulu,3,Saniscara,9,Brahma,7,Gigis,9,Duka,4");
}

TEST_F(WarigaTest_2024, setup168) {
    wariga.setup("2024-12-29");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Bala,7,Luang,1,Pepet,4,Pasah,9,Jaya,1,Kliwon,8,Tungleh,7,Redite,5,Kala,1,Nohan,3,Duka,4");
}

TEST_F(WarigaTest_2024, setup169) {
    wariga.setup("2024-12-30");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Bala,7,Luang,1,Pepet,4,Beteng,4,Menala,8,Umanis,5,Aryang,6,Soma,4,Uma,4,Ogan,7,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup170) {
    wariga.setup("2024-12-31");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Bala,7,-,0,Menga,5,Kajeng,7,Sri,6,Pahing,9,Urukung,5,Anggara,3,Sri,6,Erengan,1,Suka,10");
}

TEST_F(WarigaTest_2024, setup171) {
    wariga.setup("2025-01-01");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Bala,7,-,0,Menga,5,Pasah,9,Laba,5,Pon,7,Paniron,8,Budha,7,Indra,5,Urungan,4,Sri,6");
}

TEST_F(WarigaTest_2024, setup172) {
    wariga.setup("2025-01-02");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Bala,7,-,0,Menga,5,Beteng,4,Jaya,1,Wage,4,Was,9,Wraspati,8,Guru,8,Tulus,6,Suka,10");
}

TEST_F(WarigaTest_2024, setup173) {
    wariga.setup("2025-01-03");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Bala,7,-,0,Menga,5,Kajeng,7,Menala,8,Kliwon,8,Maulu,3,Sukra,6,Yama,9,Dadi,8,Sri,6");
}

TEST_F(WarigaTest_2024, setup174) {
    wariga.setup("2025-01-04");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Bala,7,-,0,Menga,5,Pasah,9,Sri,6,Umanis,5,Tungleh,7,Saniscara,9,Ludra,3,Dangu,5,Sri,6");
}

TEST_F(WarigaTest_2024, setup175) {
    wariga.setup("2025-01-05");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ugu,1,-,0,Menga,5,Beteng,4,Laba,5,Pahing,9,Aryang,6,Redite,5,Brahma,7,Jangur,8,Sri,6");
}

TEST_F(WarigaTest_2024, setup176) {
    wariga.setup("2025-01-06");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ugu,1,Luang,1,Pepet,4,Kajeng,7,Jaya,1,Pon,7,Urukung,5,Soma,4,Kala,1,Gigis,9,Pati,7");
}

TEST_F(WarigaTest_2024, setup177) {
    wariga.setup("2025-01-07");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ugu,1,Luang,1,Pepet,4,Pasah,9,Menala,8,Wage,4,Paniron,8,Anggara,3,Uma,4,Nohan,3,Raja,8");
}

TEST_F(WarigaTest_2024, setup178) {
    wariga.setup("2025-01-08");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ugu,1,Luang,1,Pepet,4,Beteng,4,Sri,6,Kliwon,8,Was,9,Budha,7,Sri,6,Ogan,7,Manuh,2");
}

TEST_F(WarigaTest_2024, setup179) {
    wariga.setup("2025-01-09");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ugu,1,Luang,1,Pepet,4,Kajeng,7,Laba,5,Umanis,5,Maulu,3,Wraspati,8,Indra,5,Erengan,1,Duka,4");
}

TEST_F(WarigaTest_2024, setup180) {
    wariga.setup("2025-01-10");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ugu,1,Luang,1,Pepet,4,Pasah,9,Jaya,1,Pahing,9,Tungleh,7,Sukra,6,Guru,8,Urungan,4,Manuh,2");
}

TEST_F(WarigaTest_2024, setup181) {
    wariga.setup("2025-01-11");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Ugu,1,-,0,Menga,5,Beteng,4,Menala,8,Pon,7,Aryang,6,Saniscara,9,Yama,9,Tulus,6,Manusa,3");
}

TEST_F(WarigaTest_2024, setup182) {
    wariga.setup("2025-01-12");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wayang,4,Luang,1,Pepet,4,Kajeng,7,Sri,6,Wage,4,Urukung,5,Redite,5,Ludra,3,Dadi,8,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup183) {
    wariga.setup("2025-01-13");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wayang,4,-,0,Menga,5,Pasah,9,Laba,5,Kliwon,8,Paniron,8,Soma,4,Brahma,7,Dangu,5,Suka,10");
}

TEST_F(WarigaTest_2024, setup184) {
    wariga.setup("2025-01-14");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wayang,4,-,0,Menga,5,Beteng,4,Jaya,1,Umanis,5,Was,9,Anggara,3,Kala,1,Jangur,8,Dewa,9");
}

TEST_F(WarigaTest_2024, setup185) {
    wariga.setup("2025-01-15");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wayang,4,-,0,Menga,5,Kajeng,7,Menala,8,Pahing,9,Maulu,3,Budha,7,Uma,4,Gigis,9,Manusa,3");
}

TEST_F(WarigaTest_2024, setup186) {
    wariga.setup("2025-01-16");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wayang,4,Luang,1,Pepet,4,Pasah,9,Sri,6,Pon,7,Tungleh,7,Wraspati,8,Sri,6,Nohan,3,Manuh,2");
}

TEST_F(WarigaTest_2024, setup187) {
    wariga.setup("2025-01-17");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wayang,4,-,0,Menga,5,Beteng,4,Laba,5,Wage,4,Aryang,6,Sukra,6,Indra,5,Ogan,7,Pandita,5");
}

TEST_F(WarigaTest_2024, setup188) {
    wariga.setup("2025-01-18");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Wayang,4,Luang,1,Pepet,4,Kajeng,7,Jaya,1,Kliwon,8,Urukung,5,Saniscara,9,Guru,8,Erengan,1,Raja,8");
}

TEST_F(WarigaTest_2024, setup189) {
    wariga.setup("2025-01-19");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kelawu,6,-,0,Menga,5,Pasah,9,Menala,8,Umanis,5,Paniron,8,Redite,5,Yama,9,Urungan,4,Pandita,5");
}

TEST_F(WarigaTest_2024, setup190) {
    wariga.setup("2025-01-20");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kelawu,6,Luang,1,Pepet,4,Beteng,4,Sri,6,Pahing,9,Was,9,Soma,4,Ludra,3,Tulus,6,Duka,4");
}

TEST_F(WarigaTest_2024, setup191) {
    wariga.setup("2025-01-21");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kelawu,6,-,0,Menga,5,Kajeng,7,Laba,5,Pon,7,Maulu,3,Anggara,3,Brahma,7,Dadi,8,Pandita,5");
}

TEST_F(WarigaTest_2024, setup192) {
    wariga.setup("2025-01-22");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kelawu,6,Luang,1,Pepet,4,Pasah,9,Jaya,1,Wage,4,Tungleh,7,Budha,7,Kala,1,Dangu,5,Pati,7");
}

TEST_F(WarigaTest_2024, setup193) {
    wariga.setup("2025-01-23");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kelawu,6,-,0,Menga,5,Beteng,4,Menala,8,Kliwon,8,Aryang,6,Wraspati,8,Uma,4,Jangur,8,Manusa,3");
}

TEST_F(WarigaTest_2024, setup194) {
    wariga.setup("2025-01-24");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kelawu,6,Luang,1,Pepet,4,Kajeng,7,Sri,6,Umanis,5,Urukung,5,Sukra,6,Sri,6,Gigis,9,Pati,7");
}

TEST_F(WarigaTest_2024, setup195) {
    wariga.setup("2025-01-25");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Kelawu,6,-,0,Menga,5,Pasah,9,Laba,5,Pahing,9,Paniron,8,Saniscara,9,Indra,5,Nohan,3,Dewa,9");
}

TEST_F(WarigaTest_2024, setup196) {
    wariga.setup("2025-01-26");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dukut,5,-,0,Menga,5,Beteng,4,Jaya,1,Pon,7,Was,9,Redite,5,Guru,8,Ogan,7,Suka,10");
}

TEST_F(WarigaTest_2024, setup197) {
    wariga.setup("2025-01-27");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dukut,5,-,0,Menga,5,Kajeng,7,Menala,8,Wage,4,Maulu,3,Soma,4,Yama,9,Erengan,1,Dewa,9");
}

TEST_F(WarigaTest_2024, setup198) {
    wariga.setup("2025-01-28");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dukut,5,Luang,1,Pepet,4,Pasah,9,Sri,6,Kliwon,8,Tungleh,7,Anggara,3,Ludra,3,Urungan,4,Pati,7");
}

TEST_F(WarigaTest_2024, setup199) {
    wariga.setup("2025-01-29");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dukut,5,-,0,Menga,5,Beteng,4,Laba,5,Umanis,5,Aryang,6,Budha,7,Brahma,7,Tulus,6,Suka,10");
}

TEST_F(WarigaTest_2024, setup200) {
    wariga.setup("2025-01-30");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dukut,5,Luang,1,Pepet,4,Kajeng,7,Jaya,1,Pahing,9,Urukung,5,Wraspati,8,Kala,1,Dadi,8,Raja,8");
}

TEST_F(WarigaTest_2024, setup201) {
    wariga.setup("2025-01-31");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dukut,5,Luang,1,Pepet,4,Pasah,9,Menala,8,Pon,7,Paniron,8,Sukra,6,Uma,4,Dangu,5,Duka,4");
}

TEST_F(WarigaTest_2024, setup202) {
    wariga.setup("2025-02-01");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Dukut,5,Luang,1,Pepet,4,Beteng,4,Sri,6,Wage,4,Was,9,Saniscara,9,Sri,6,Jangur,8,Duka,4");
}

TEST_F(WarigaTest_2024, setup203) {
    wariga.setup("2025-02-02");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Watugunung,8,Luang,1,Pepet,4,Kajeng,7,Laba,5,Kliwon,8,Maulu,3,Redite,5,Indra,5,Gigis,9,Duka,4");
}

TEST_F(WarigaTest_2024, setup204) {
    wariga.setup("2025-02-03");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Watugunung,8,Luang,1,Pepet,4,Pasah,9,Jaya,1,Umanis,5,Tungleh,7,Soma,4,Guru,8,Nohan,3,Raksasa,1");
}

TEST_F(WarigaTest_2024, setup205) {
    wariga.setup("2025-02-04");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Watugunung,8,-,0,Menga,5,Beteng,4,Menala,8,Pahing,9,Aryang,6,Anggara,3,Yama,9,Ogan,7,Suka,10");
}

TEST_F(WarigaTest_2024, setup206) {
    wariga.setup("2025-02-05");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Watugunung,8,-,0,Menga,5,Kajeng,7,Sri,6,Pon,7,Urukung,5,Budha,7,Ludra,3,Erengan,1,Sri,6");
}

TEST_F(WarigaTest_2024, setup207) {
    wariga.setup("2025-02-06");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Watugunung,8,-,0,Menga,5,Pasah,9,Laba,5,Wage,4,Paniron,8,Wraspati,8,Brahma,7,Urungan,4,Suka,10");
}

TEST_F(WarigaTest_2024, setup208) {
    wariga.setup("2025-02-07");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Watugunung,8,-,0,Menga,5,Beteng,4,Jaya,1,Kliwon,8,Was,9,Sukra,6,Kala,1,Tulus,6,Sri,6");
}

TEST_F(WarigaTest_2024, setup209) {
    wariga.setup("2025-02-08");
    std::string lineCheck = wariga.getPawukonStr() + "," +
                           std::to_string(wariga.getPawukonUrip()) + "," +
                           wariga.ekaWara.getName() + "," +
                           std::to_string(wariga.ekaWara.getUrip()) + "," +
                           wariga.dwiWara.getName() + "," +
                           std::to_string(wariga.dwiWara.getUrip()) + "," +
                           wariga.triWara.getName() + "," +
                           std::to_string(wariga.triWara.getUrip()) + "," +
                           wariga.caturWara.getName() + "," +
                           std::to_string(wariga.caturWara.getUrip()) + "," +
                           wariga.pancaWara.getName() + "," +
                           std::to_string(wariga.pancaWara.getUrip()) + "," +
                           wariga.sadWara.getName() + "," +
                           std::to_string(wariga.sadWara.getUrip()) + "," +
                           wariga.saptaWara.getName() + "," +
                           std::to_string(wariga.saptaWara.getUrip()) + "," +
                           wariga.astaWara.getName() + "," +
                           std::to_string(wariga.astaWara.getUrip()) + "," +
                           wariga.sangaWara.getName() + "," +
                           std::to_string(wariga.sangaWara.getUrip()) + "," +
                           wariga.dasaWara.getName() + "," +
                           std::to_string(wariga.dasaWara.getUrip());
    ASSERT_EQ(lineCheck, "Watugunung,8,-,0,Menga,5,Kajeng,7,Menala,8,Umanis,5,Maulu,3,Saniscara,9,Uma,4,Dadi,8,Sri,6");
}

