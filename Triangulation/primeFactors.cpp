#include<vector>
using std::vector;

class PrimeFactors
{
public:
	vector<int> of(int number)
	{
		vector<int> result = {};
		int divisor = 2;

		while ((number > 1) && (divisor <= number)){
			if (number % divisor == 0) {
				result.push_back(divisor);
				number /= divisor;
				continue;
			}
			else {
				divisor += 1;
			}
		}
		
		return result;
	}

};