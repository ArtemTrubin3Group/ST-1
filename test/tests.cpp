// Copyright 2024 Trubin Artem
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"


TEST(PrimeTest, CheckPrimeWithPrimeNumber) {
  EXPECT_TRUE(checkPrime(13));
}


TEST(PrimeTest, CheckPrimeWithCompositeNumber) {
  EXPECT_FALSE(checkPrime(12));
}


TEST(PrimeTest, NthPrimeNumber) {
  EXPECT_EQ(13, nPrime(6));
}


TEST(PrimeTest, NextPrimeNumber) {
  EXPECT_EQ(11, nextPrime(7));
}


TEST(PrimeTest, SumOfPrimeNumbers) {
  uint64_t expectedSum = 2 + 3 + 5 + 7 + 11 + 13 + 17;
  EXPECT_EQ(expectedSum, sumPrime(19));
}
