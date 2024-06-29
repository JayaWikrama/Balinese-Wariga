#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <sys/time.h>

#include "wewaran.hpp"

class WewaranTest:public::testing::Test {
protected:
    BalineseWewaran wewaran;

    void SetUp() override {
        // tidak ada kebutuhan pre-set
    }

    void TearDown() override {
        // tidak ada kebutuhan post-set
    }
};

/* Test Case untuk Constructor */

TEST_F(WewaranTest, DefaultConstructor1) {
    // Tes untuk default constructor
    ASSERT_EQ(wewaran.getId(), 0);
}

TEST_F(WewaranTest, DefaultConstructor2) {
    // Tes untuk default constructor
    ASSERT_EQ(wewaran.getUrip(), 0);
}

TEST_F(WewaranTest, DefaultConstructor3) {
    // Tes untuk default constructor
    ASSERT_EQ(wewaran.getName(), "");
}

TEST_F(WewaranTest, CustomConstructor1) {
    // ID = 1
    // URIP = 2
    // NAME = "test"
    BalineseWewaran customWewaran(1, 2, "test");
    ASSERT_EQ(customWewaran.getId(), 1);
}

TEST_F(WewaranTest, CustomConstructor2) {
    // ID = 1
    // URIP = 2
    // NAME = "test"
    BalineseWewaran customWewaran(1, 2, "test");
    ASSERT_EQ(customWewaran.getUrip(), 2);
}

TEST_F(WewaranTest, CustomConstructor3) {
    // ID = 1
    // URIP = 2
    // NAME = "test"
    BalineseWewaran customWewaran(1, 2, "test");
    ASSERT_EQ(customWewaran.getName(), "test");
}

/* Test Case untuk Setter dan Getter */

TEST_F(WewaranTest, SetterAndGetter_setId) {
    wewaran.setId(10);
    ASSERT_EQ(wewaran.getId(), 10);
}

TEST_F(WewaranTest, SetterAndGetter_setUrip) {
    wewaran.setUrip(10);
    ASSERT_EQ(wewaran.getUrip(), 10);
}

TEST_F(WewaranTest, SetterAndGetter_setName) {
    wewaran.setName("QWERTY");
    ASSERT_EQ(wewaran.getName(), "QWERTY");
}