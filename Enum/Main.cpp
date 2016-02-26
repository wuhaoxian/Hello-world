#include <iostream>

using namespace std;

enum some_big_cities {
	Guangzhou = 4,
	Shenzhen = 4,
	Hongkong = 4,
	Shanghai = 2,
	Beijing = 3,
	Chongqi = 5
};

int main(void)
{
	some_big_cities wh1 = Guangzhou;
	some_big_cities wh2 = Shenzhen;
	some_big_cities wh3 = Hongkong;
	if (wh1 == wh2)
		cout << "They are in same area" << endl;

	int a = Guangzhou + Shenzhen;
	cout << a << endl;
	return 0;
}