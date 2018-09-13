#include <iostream>
using namespace std;

void IncreOne(int &num)
{
	num++;
}

void InverSign(int &num)
{
	num *= -1;
}

void QuestionOne()
{
	int val = 20;
	IncreOne(val);
	cout << val << endl;

	InverSign(val);
	cout << val << endl;
}

void SwapPointer(int *(&pref1), int *(&pref2))
{
	int * ptr = pref1;
	pref1 = pref2;
	pref2 = ptr;
}

void QuestionTwo()
{
	int num1 = 5;
	int *ptr1 = &num1;

	int num2 = 10;
	int *ptr2 = &num2;

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;

	SwapPointer(ptr1, ptr2);

	cout << *ptr1 << endl;
	cout << *ptr2 << endl;
}

int main()
{
	QuestionOne();
	QuestionTwo();

	return 0;
}