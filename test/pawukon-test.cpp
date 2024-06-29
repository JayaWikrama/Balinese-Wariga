#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <sys/time.h>

#include "pawukon.hpp"

class PawukonTest:public::testing::Test {
protected:
    Pawukon pawukon;

    void SetUp() override {
        // tidak ada kebutuhan pre-set
    }

    void TearDown() override {
        // tidak ada kebutuhan post-set
    }
};

/* Test Case untuk Constructor */

TEST_F(PawukonTest, DefaultConstructor1) {
    // Tes untuk default constructor
    bool test = (pawukon.getPawukon() >= Pawukon::WUKU_SINTA && pawukon.getPawukon() <= Pawukon::WUKU_WATUGUNUNG);
    ASSERT_EQ(test, true);
}

TEST_F(PawukonTest, DefaultConstructor2) {
    // Tes untuk default constructor
    bool test = (pawukon.getRahina() >= Pawukon::REDITE && pawukon.getRahina() <= Pawukon::SANISCARA);
    ASSERT_EQ(test, true);
}

TEST_F(PawukonTest, DefaultConstructor3) {
    // Tes untuk default constructor
    ASSERT_NE(pawukon.getPawukonStr(), "unknown");
}

TEST_F(PawukonTest, DefaultConstructor4) {
    // Tes untuk default constructor
    ASSERT_NE(pawukon.getPawukonUrip(), 0);
}

TEST_F(PawukonTest, CustomConstructor1) {
    // Tes untuk custom constructor - 2000-03-01
    Pawukon customPawukon(951868800);
    ASSERT_EQ(customPawukon.getPawukon(), Pawukon::WUKU_TAMBIR);
}

TEST_F(PawukonTest, CustomConstructor2) {
    // Tes untuk custom constructor - 2000-03-01
    Pawukon customPawukon(951868800);
    ASSERT_EQ(customPawukon.getRahina(), Pawukon::BUDHA);
}

TEST_F(PawukonTest, CustomConstructor3) {
    // Tes untuk custom constructor - 2000-03-01
    Pawukon customPawukon(951868800);
    ASSERT_EQ(customPawukon.getPawukonStr(), "Tambir");
}

TEST_F(PawukonTest, CustomConstructor4) {
    // Tes untuk custom constructor - 2000-03-01
    Pawukon customPawukon(951868800);
    ASSERT_EQ(customPawukon.getPawukonUrip(), 4);
}

/* Test Case untuk Setter dan Getter */

TEST_F(PawukonTest, SetterAndGetter_setTime_1) {
    // Tes setter - 1996-02-04
    pawukon.setTime(823392000);
    ASSERT_EQ(pawukon.getPawukon(), Pawukon::WUKU_KRULUT);
}

TEST_F(PawukonTest, SetterAndGetter_setTime_2) {
    // Tes setter - 1996-02-04
    pawukon.setTime(823392000);
    ASSERT_EQ(pawukon.getRahina(), Pawukon::REDITE);
}

TEST_F(PawukonTest, SetterAndGetter_setTime_3) {
    // Tes setter - 1996-02-04
    pawukon.setTime(823392000);
    ASSERT_EQ(pawukon.getPawukonStr(), "Krulut");
}

TEST_F(PawukonTest, SetterAndGetter_setTime_4) {
    // Tes setter - 1996-02-04
    pawukon.setTime(823392000);
    ASSERT_EQ(pawukon.getPawukonUrip(), 7);
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_1) {
    pawukon.setPawukonRahina(Pawukon::WUKU_SUNGSANG, Pawukon::SUKRA);
    ASSERT_EQ(pawukon.getPawukon(), Pawukon::WUKU_SUNGSANG);
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_2) {
    pawukon.setPawukonRahina(Pawukon::WUKU_SUNGSANG, Pawukon::SUKRA);
    ASSERT_EQ(pawukon.getRahina(), Pawukon::SUKRA);
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_3) {
    pawukon.setPawukonRahina(Pawukon::WUKU_SUNGSANG, Pawukon::SUKRA);
    ASSERT_EQ(pawukon.getPawukonStr(), "Sungsang");
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_4) {
    pawukon.setPawukonRahina(Pawukon::WUKU_SUNGSANG, Pawukon::SUKRA);
    ASSERT_EQ(pawukon.getPawukonUrip(), 1);
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_InvInput_1) {
    pawukon.setPawukonRahina(Pawukon::WUKU_UNKNOWN, Pawukon::SUKRA);
    ASSERT_EQ(pawukon.getPawukon(), Pawukon::WUKU_UNKNOWN);
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_InvInput_2) {
    pawukon.setPawukonRahina(Pawukon::WUKU_UNKNOWN, Pawukon::SUKRA);
    ASSERT_EQ(pawukon.getRahina(), Pawukon::UNKNOWN);
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_InvInput_3) {
    pawukon.setPawukonRahina(Pawukon::WUKU_UNKNOWN, Pawukon::SUKRA);
    ASSERT_EQ(pawukon.getPawukonStr(), "unknown");
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_InvInput_4) {
    pawukon.setPawukonRahina(Pawukon::WUKU_UNKNOWN, Pawukon::SUKRA);
    ASSERT_EQ(pawukon.getPawukonUrip(), 0);
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_InvInput_5) {
    pawukon.setPawukonRahina(Pawukon::WUKU_SINTA, Pawukon::UNKNOWN);
    ASSERT_EQ(pawukon.getPawukon(), Pawukon::WUKU_UNKNOWN);
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_InvInput_6) {
    pawukon.setPawukonRahina(Pawukon::WUKU_SINTA, Pawukon::UNKNOWN);
    ASSERT_EQ(pawukon.getRahina(), Pawukon::UNKNOWN);
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_InvInput_7) {
    pawukon.setPawukonRahina(Pawukon::WUKU_SINTA, Pawukon::UNKNOWN);
    ASSERT_EQ(pawukon.getPawukonStr(), "unknown");
}

TEST_F(PawukonTest, SetterAndGetter_setPawukonRahina_InvInput_8) {
    pawukon.setPawukonRahina(Pawukon::WUKU_SINTA, Pawukon::UNKNOWN);
    ASSERT_EQ(pawukon.getPawukonUrip(), 0);
}
