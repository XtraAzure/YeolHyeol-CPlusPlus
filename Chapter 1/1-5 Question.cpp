#include <iostream>

void QuestionOne()
{
	int input[5];
	int sum = 0;
	for (int i = 1; 5 >= i; i++)
	{
		std::cout << i << "��° ���� �Է�: ";
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
		std::cout <<"�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sale;
		if (sale == -1)
			break;
		std::cout << "�̹� �� �޿�: " << (50+sale*0.12)<<"����\n";
	}
	std::cout << "���α׷��� �����մϴ�.\n";
}

int main()
{
	QuestionFour();

	system("pause");
	return 0;
}