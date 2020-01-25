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
	limit -= 6;
	for(auto i = 2; i <= limit; ++i)
	{
		if(is_prime(i) && is_prime(i + 6))
		{
			cout << i << " and " << i + 6 << endl;
		}
	}
}