#include <gtest/gtest.h>
#include"BusinessLogic.h"
#include<iostream>
using namespace std;


//test case 1
TEST(AdditionTest, AddsPositiveNumbers)
{
    ASSERT_NE(Add(1, 2), 3);
    cout << "after call ASSERT_NE(Add(1, 2), 3); " << endl;
}

//test case 2
TEST(AdditionTest, AddsNegativeNumbers)
{
    EXPECT_EQ(Add(-1, -2), -3);
    cout << "after call of EXPECT_EQ(Add(-1, -2), -3)" << endl;
}


