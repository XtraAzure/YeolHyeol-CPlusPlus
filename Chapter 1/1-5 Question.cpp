#include <iostream>

void QuestionOne()
{
	int input[5];
	int sum = 0;
	for (int i = 1; 5 >= i; i++)
	{
		std::cout << i << "번째 정수 입력: ";
		std::cin >> input[i - 1];
		sum += input[i - 1];
	}

	std::cout << sum << "\n";
}

void QuestionTwo()
{
	char name[20];
	char phone[20];

	std::cin >> name;
	std::cin >> phone;

	std::cout << name <<"\n" << phone << "\n";
}

void QuestionThree()
{
	int input;

	std::cin >> input;

	for (int i = 1; 10> i; i++)
	{
		std::cout << input << "* " << i <<"= " << input*i << "\n";
	}
}

void QuestionFour()
{
	int sale;
	while(1)
	{
		std::cout <<"판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> sale;
		if (sale == -1)
			break;
		std::cout << "이번 달 급여: " << (50+sale*0.12)<<"만원\n";
	}
	std::cout << "프로그램을 종료합니다.\n";
}

int main()
{
	QuestionFour();

	system("pause");
	return 0;
}