#include <gtest/gtest.h>

extern "C" {
#include "mathy.h";
}

TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(3, 5), 8);
    EXPECT_EQ(add(10, 20), 30);
}

TEST(SubtractTest, PositiveNumbers) {
    EXPECT_EQ(subtract(5, 3), 2);
    EXPECT_EQ(subtract(20, 10), 10);
}