#include "gmock/gmock.h"
#include <vector>
#include "primeFactors.cpp"

using namespace testing;
using std::vector;


TEST(PrimeFactors, Of1)
{
	PrimeFactors primeFacotrs;
	vector<int> expected = {};

	EXPECT_EQ(expected, primeFacotrs.of(1));

}

TEST(PrimeFactors, Of2)
{
	PrimeFactors primeFacotrs;
	vector<int> expected = {2};

	EXPECT_EQ(expected, primeFacotrs.of(2));

}