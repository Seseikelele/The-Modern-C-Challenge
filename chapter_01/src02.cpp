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

	while(second != 0)
	{
		unsigned r = first % second;
		first = second;
		second = r;
	}

	cout << "Greatest common denominator: " << first << endl;
}
