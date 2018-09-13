#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;

void QuestionOne()
{
	const char *str1 = "ABC 123 ";
	const char *str2 = "DEF 456 ";
	char str3[50];

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;
	strcpy(str3, str1);
	strcat(str3, str2);
	cout << str3 << endl;

	if (strcmp(str1, str2) == 0)
		cout << "문자열이 같다." << endl;
	else
		cout << "문자열이 같지않다." << endl;
}

void QuestionTwo()
{
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
		printf("Random number #%d: %d\n", i, rand() % 100);
}

int main()
{
	QuestionOne();
	QuestionTwo();

	return 0;
}