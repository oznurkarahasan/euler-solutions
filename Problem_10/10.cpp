#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main()
{
	const int LIMIT = 2000000;
	vector<bool> isPrime(LIMIT, true);
	long long sum = 0;

	for (int i = 2; i <= sqrt(LIMIT); i++)
	{
		if (isPrime[i])
		{
			for (int j = i * i; j < LIMIT; j += i)
				isPrime[j] = false;
		}
	}

	for (int i = 2; i < LIMIT; i++)
	{
		if (isPrime[i])
			sum += i;
	}

	cout << sum << endl;
	return 0;
}
