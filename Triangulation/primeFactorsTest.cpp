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