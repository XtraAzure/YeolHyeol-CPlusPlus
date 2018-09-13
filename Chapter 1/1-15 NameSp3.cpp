#include <iostream>

namespace BestComImp1
{
	void SimpleFunc();
}

namespace BestComImp1
{
	void PrettyFunc();
}

namespace ProgComImp1
{
	void SimpleFunc();
}

int main()
{
	BestComImp1::SimpleFunc();
	return 0;
}

void BestComImp1::SimpleFunc()
{
	std::cout << "BestCom이 정의한 함수" << std::endl;
	PrettyFunc(); // 동일 이름공간
	ProgComImp1::SimpleFunc(); // 다른 이름공간
}

void BestComImp1::PrettyFunc()
{
	std::cout << "So Pretty!!" << std::endl;
}

void ProgComImp1::SimpleFunc()
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}