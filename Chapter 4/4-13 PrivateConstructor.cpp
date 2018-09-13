#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA() : num(0) {}
	AAA &CreteInitObj(int n) const
	{
		AAA * ptr = new AAA(n);
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }

private:
	AAA(int n) : num(n) {}
};

int main()
{
	AAA base;
	base.ShowNum();

	AAA &obj1 = base.CreteInitObj(3);
	obj1.ShowNum();

	AAA &obj2 = base.CreteInitObj(12);
	obj2.ShowNum();

	delete &obj1;
	delete &obj2;
	return 0;
}
