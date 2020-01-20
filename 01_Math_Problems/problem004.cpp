#include <iostream>

using namespace std;

bool is_prime(const int n)
{
	if(n <= 3)
	{
		return 1 < n;
	}
	if(n % 2 == 0 || n % 3 == 0)
	{
		return false;
	}
	for(auto i = 5; i * i <= n; i += 6)
	{
		if(n % i == 0 || n % (i + 2) == 0)
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int limit = 0;
	cout << "Upper limit: ";
	cin >> limit;

	for(auto i = limit; 1 < i; --i)
	{
		if(is_prime(i))
		{
			cout << "Highest prime number: " << i << endl;
			return 0;
		}
	}
}