#include <gtest/gtest.h>

int Add(int a, int b) {
    return a + b;
}

TEST(AdditionTest, AddsPositiveNumbers) {
    EXPECT_EQ(Add(1, 2), 3);
}

TEST(AdditionTest, AddsNegativeNumbers) {
    EXPECT_EQ(Add(-1, -2), -3);
}
