// Copyright 2025 UNN-CS
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(SumPrimeTest, SmallBounds) {
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(3), 2);
  EXPECT_EQ(sumPrime(10), 17);
  EXPECT_EQ(sumPrime(20), 77);
  EXPECT_EQ(sumPrime(30), 129);
}

TEST(SumPrimeTest, LargeBounds) {
  EXPECT_EQ(sumPrime(100), 1060);
  EXPECT_EQ(sumPrime(1000), 76127);
  EXPECT_EQ(sumPrime(2000000), 142913828922);
}

TEST(SumPrimeTest, EdgeCases) {
  EXPECT_EQ(sumPrime(0), 0);
  EXPECT_EQ(sumPrime(1), 0);
  EXPECT_EQ(sumPrime(2), 0);
  EXPECT_EQ(sumPrime(500000), 9914236195);
}

TEST(CheckPrimeTest, SmallNumbers) {
  EXPECT_FALSE(checkPrime(0));
  EXPECT_FALSE(checkPrime(1));
  EXPECT_TRUE(checkPrime(2));
  EXPECT_TRUE(checkPrime(3));
  EXPECT_FALSE(checkPrime(4));
  EXPECT_FALSE(checkPrime(9));
  EXPECT_TRUE(checkPrime(7));
  EXPECT_FALSE(checkPrime(15));
}

TEST(CheckPrimeTest, LargeNumbers) {
  EXPECT_TRUE(checkPrime(9973));
  EXPECT_FALSE(checkPrime(10000));
  EXPECT_TRUE(checkPrime(7919));
  EXPECT_FALSE(checkPrime(7921));
  EXPECT_TRUE(checkPrime(104729));
  EXPECT_FALSE(checkPrime(104730));
}

TEST(CheckPrimeTest, SpecialCases) {
  EXPECT_FALSE(checkPrime(10007 * 10007));
  EXPECT_TRUE(checkPrime(2147483647));
  EXPECT_FALSE(checkPrime(2147483646));
}

TEST(NPrimeTest, FirstPrimes) {
  EXPECT_EQ(nPrime(1), 2);
  EXPECT_EQ(nPrime(2), 3);
  EXPECT_EQ(nPrime(5), 11);
  EXPECT_EQ(nPrime(10), 29);
  EXPECT_EQ(nPrime(20), 71);
}

TEST(NPrimeTest, LargeIndices) {
  EXPECT_EQ(nPrime(100), 541);
  EXPECT_EQ(nPrime(500), 3571);
  EXPECT_EQ(nPrime(1000), 7919);
  EXPECT_EQ(nPrime(1500), 12553);
}

TEST(NPrimeTest, BoundaryCases) {
  EXPECT_EQ(nPrime(0), 0);
  EXPECT_EQ(nPrime(2000), 17389);
}

TEST(NextPrimeTest, BasicCases) {
  EXPECT_EQ(nextPrime(2), 3);
  EXPECT_EQ(nextPrime(10), 11);
  EXPECT_EQ(nextPrime(13), 17);
  EXPECT_EQ(nextPrime(20), 23);
}

TEST(NextPrimeTest, LargeNumbers) {
  EXPECT_EQ(nextPrime(9972), 9973);
  EXPECT_EQ(nextPrime(10000), 10007);
  EXPECT_EQ(nextPrime(50000), 50021);
}

TEST(NextPrimeTest, SpecialCases) {
  EXPECT_EQ(nextPrime(1), 2);
  EXPECT_EQ(nextPrime(0), 2);
  EXPECT_EQ(nextPrime(2147483647), 2147483659);
  EXPECT_EQ(nextPrime(2147483646), 2147483647);
}  
