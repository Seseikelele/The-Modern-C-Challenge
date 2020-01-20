#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
	cout << "Set upper limit: ";

	unsigned limit;
	cin >> limit;

	unsigned sum = 0;
	for(unsigned i = 0; i < limit; ++i)
	{
		if(i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
		}
	}
	cout << "sum of numbers divisible by three or five [0 - " << limit << "): " << sum << endl;
}
