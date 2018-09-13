#include <iostream>
using namespace std;

void Count()
{
	static int cnt;
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main()
{
	for (int i = 0; i < 10; i++)
		Count();
	return 0;
}