#ifndef _ADD_TEST_HPP__
#define __ADD_TEST_HPP__

#include "gtest/gtest.h"
#include "Add.hpp"
#include "op.hpp"

SevenOpMock* sevenhalf = new SevenOpMock();
NegativeSevenOpMock* negseven = new NegativeSevenOpMock();
ZeroOpMock* zero = new ZeroOpMock();

TEST(AddTest,AddEvaluateNonZero) {
    Add* test = new Add(sevenhalf, sevenhalf);
    EXPECT_EQ(test->evaluate(), 15);
}

TEST(AddTest, AddEvaluateNonZero2) {
    Add* test = new Add(negseven, negseven);
    EXPECT_EQ(test->evaluate(), -15);
}

TEST(AddTest, AddEvaluateNegative) {
    Add* test = new Add(sevenhalf, negseven);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(AddTest, AddEvaluateZero) {
    Add* test = new Add(sevenhalf, zero);
    EXPECT_EQ(test->evaluate(), 7.5);
}

TEST(AddTest, AddStringifyNonZero) {
    Add* test = new Add(sevenhalf, sevenhalf);
    EXPECT_EQ(test->stringify(), "7.5 + 7.5");
}

TEST(AddTest, AddStringifyNegative) {
    Add* test = new Add(sevenhalf, negseven);
    EXPECT_EQ(test->stringify(), "7.5 + -7.5");
}

TEST(AddTest, AddStringifyZero) {
    Add* test = new Add(sevenhalf, zero);
    EXPECT_EQ(test->stringify(), "7.5 + 0");
}



#endif //__ADD_TEST_HPP__
