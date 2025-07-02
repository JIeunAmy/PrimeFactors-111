#include "gmock/gmock.h"
#include <vector>
#include "primeFactors.cpp"

using namespace testing;
using std::vector;

class PrimeFixture : public Test
{
public:
	PrimeFactors primeFactors;
	vector<int> expected;

};

TEST_F(PrimeFixture, Of1)
{
	expected = {};

	EXPECT_EQ(expected, primeFactors.of(1));
}

TEST_F(PrimeFixture, Of2)
{
	expected = {2};

	EXPECT_EQ(expected, primeFactors.of(2));
}

TEST_F(PrimeFixture, Of3)
{
	expected = {3};

	EXPECT_EQ(expected, primeFactors.of(3));
}