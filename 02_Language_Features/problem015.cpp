#include <iostream>
#include <sstream>
#include <array>

using namespace std;

class IPv4
{
	array<uint8_t, 4> octets;

public:
	IPv4() : octets({0}) {}

	IPv4(uint8_t first, uint8_t second, uint8_t third, uint8_t fourth)
		: octets({first, second, third, fourth}) {}

	IPv4(uint32_t ip)
	{
		octets = {
			static_cast<uint8_t>(ip >> 24 & 255),
			static_cast<uint8_t>(ip >> 16 & 255),
			static_cast<uint8_t>(ip >> 8  & 255),
			static_cast<uint8_t>(ip       & 255)
		};
	}

	string toString()
	{
		ostringstream os;
		os << static_cast<int>(octets[0]) << '.';
		os << static_cast<int>(octets[1]) << '.';
		os << static_cast<int>(octets[2]) << '.';
		os << static_cast<int>(octets[3]);
		return os.str();
	}
};

int main(int argc, char** argv)
{
	IPv4 ip1;
	IPv4 ip2(192, 168, 0, 1);
	IPv4 ip3(0b01111111000000000000000000000001);
	cout << ip1.toString() << endl;
	cout << ip2.toString() << endl;
	cout << ip3.toString() << endl;
}