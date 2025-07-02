#include<vector>
using std::vector;

class PrimeFactors
{
public:
	vector<int> of(int number)
	{
		vector<int> result = {};
		while (number > 1) {
			if (number % 2 == 0) {
				result.push_back(2);
				number /= 2;
			}
			if (number % 3 == 0) {
				result.push_back(3);
				number /= 3;
			}
		}
		
		return result;
	}

};