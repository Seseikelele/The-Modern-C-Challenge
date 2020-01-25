#include <cmath>
#include <iostream>

using namespace std;

int sum_proper_divisors(const int n)
{
	int value = 1;

	for(int i = 2; i <= sqrt(n); ++i)
	{
		if(n % i == 0)
		{
			value += (i == (n / i)) ? i : (i + n / i);
		}
	}

	return value;
}

void print_abundant(const int limit)
{
	for(int num = 10; num <= limit; ++num)
	{
		int sum = sum_proper_divisors(num);
		if(num < sum)
		{
			cout << num << ", abundance: " << sum - num << endl;
		}
	}
}

int main()
{
	int limit = 0;
	cout << "Upper limit: ";
	cin >> limit;

	print_abundant(limit);
}//abundance