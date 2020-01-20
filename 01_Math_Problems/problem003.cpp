#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	unsigned first;
	cout << "First number: ";
	cin >> first;
	unsigned second;
	cout << "Second number: ";
	cin >> second;

	unsigned a = first;
	unsigned b = second;
	while(b != 0)
	{
		unsigned r = a % b;
		a = b;
		b = r;
	}

	unsigned lcm = first * (second / a);
	cout << "Least common multiple: " << lcm << endl;
}
