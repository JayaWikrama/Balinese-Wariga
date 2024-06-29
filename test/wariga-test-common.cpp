#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <sys/time.h>

#include "wariga.hpp"

class WarigaTestCommon:public::testing::Test {
protected:
    Wariga wariga;

    void SetUp() override {
        // tidak ada kebutuhan pre-set
    }

    void TearDown() override {
        // tidak ada kebutuhan post-set
    }
};

/* Test Case untuk Constructor */

TEST_F(WarigaTestCommon, DefaultConstructor1) {
    // Tes untuk default constructor
    bool test = (wariga.getPawukon() >= Wariga::WUKU_SINTA && wariga.getPawukon() <= Wariga::WUKU_WATUGUNUNG);
    ASSERT_EQ(test, true);
}

TEST_F(WarigaTestCommon, DefaultConstructor2) {
    // Tes untuk default constructor
    bool test = (wariga.getRahina() >= Wariga::REDITE && wariga.getRahina() <= Wariga::SANISCARA);
    ASSERT_EQ(test, true);
}

TEST_F(WarigaTestCommon, DefaultConstructor3) {
    // Tes untuk default constructor
    ASSERT_NE(wariga.getPawukonStr(), "unknown");
}

TEST_F(WarigaTestCommon, DefaultConstructor4) {
    // Tes untuk default constructor
    ASSERT_NE(wariga.getPawukonUrip(), 0);
}

TEST_F(WarigaTestCommon, CustomConstructor1) {
    // Tes untuk custom constructor - 2000-03-01
    Wariga customPawukon(951868800);
    ASSERT_EQ(customPawukon.getPawukon(), Wariga::WUKU_TAMBIR);
}

TEST_F(WarigaTestCommon, CustomConstructor2) {
    // Tes untuk custom constructor - 2000-03-01
    Wariga customPawukon(951868800);
    ASSERT_EQ(customPawukon.getRahina(), Wariga::BUDHA);
}

TEST_F(WarigaTestCommon, CustomConstructor3) {
    // Tes untuk custom constructor - 2000-03-01
    Wariga customPawukon(951868800);
    ASSERT_EQ(customPawukon.getPawukonStr(), "Tambir");
}

TEST_F(WarigaTestCommon, CustomConstructor4) {
    // Tes untuk custom constructor - 2000-03-01
    Wariga customPawukon(951868800);
    ASSERT_EQ(customPawukon.getPawukonUrip(), 4);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}