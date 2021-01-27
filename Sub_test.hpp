#ifndef __SUB_TEST_HPP__
#define __SUB_TEST_HPP__

#include "gtest/gtest.h"
#include "Sub.hpp"
#include "op.hpp"

SevenOpMock* sevenhalf = new SevenOpMock();
NegativeSevenOpMock* negseven = new NegativeSevenOpMock();
ZeroOpMock* zero = new ZeroOpMock();

TEST(SubTest, SubequalZero) {
    Sub* test = new Sub(sevenhalf, sevenhalf);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(SubTest, Subneganswer) {
    Sub* test = new Sub(negseven, negseven);
    EXPECT_EQ(test->evaluate(), -15);
}

TEST(SubTest, SubdoubleNegative) {
    Sub* test = new Sub(sevenhalf, negseven);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(SubTest, SubZero) {
    Sub* test = new Sub(sevenhalf, zero);
    EXPECT_EQ(test->evaluate(), 7.5);
}

TEST(SubTest, SubStringifyNonZero) {
    Sub* test = new Sub(sevenhalf, sevenhalf);
    EXPECT_EQ(test->stringify(), "7.5 - 7.5");
}

TEST(SubTest, SubStringifyNegative) {
    Sub* test = new Sub(sevenhalf, negseven);
    EXPECT_EQ(test->stringify(), "7.5 - -7.5");
}

TEST(SubTest, SubStringifyZero) {
    Sub* test = new Sub(sevenhalf, zero);
    EXPECT_EQ(test->stringify(), "7.5 - 0");
}



#endif //__SUB_TEST_HPP__
