#ifndef __POW_TEST_HPP__
#define __POW_TEST_HPP__

#include "gtest/gtest.h"
#include "Pow.hpp"
#include "op.hpp"

TwoPowMock* twopos = new TwoPowMock();
NegOnePowMock* negone = new NegOnePowMock();
ZeroPowMock* zero = new ZeroPowMock();

TEST(PowTest, PowEvaluateNonZero) {
    Pow* test = new Pow(twopos, twopos);
    EXPECT_EQ(test->evaluate(), 4 );
}

TEST(PowTest, PowEvaluatePowZero) {
    Pow* test = new Pow(twopos, ZeroPowMock);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(PowTest, PowEvaluateNegative) {
    Pow* test = new Pow(twopos, negone);
    EXPECT_EQ(test->evaluate(), 0.5);
}

TEST(PowTest, PowEvaluateDoubleZero) {
    Pow* test = new Pow(ZeroPowMock, ZeroPowMock);
    EXPECT_EQ(test->evaluate(), 1);
}

TEST(PowTest, PowStringifyNonZero) {
    Pow* test = new Pow(twopos, twopos);
    EXPECT_EQ(test->stringify(), "2 ** 2");
}

TEST(PowTest, PowStringifyNegative) {
    Pow* test = new Pow(twopos, negone);
    EXPECT_EQ(test->stringify(), "2 ** -1");
}

TEST(PowTest, PowStringifyZero) {
    Pow* test = new Pow(twopos, zero);
    EXPECT_EQ(test->stringify(), "2 ** 0");
}



#endif //__POW_TEST_HPP__

