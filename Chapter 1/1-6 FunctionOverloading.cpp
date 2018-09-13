#include <iostream>

void MyFunc()
{
	std::cout << "MyFunc() called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char ) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main()
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}