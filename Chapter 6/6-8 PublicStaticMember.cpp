#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;
public: // ���ʿ������� ������ �Լ��� ������ �������� �����ϱ⵵ ��
	SoSimple() 
	{
		simObjCnt++;
	}
};

int SoSimple::simObjCnt = 0;

int main()
{
	cout << SoSimple::simObjCnt << "��° SoSimple ��ü" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "��° SoSImple ��ü" << endl;
	cout << sim1.simObjCnt << "��° SoSimple ��ü" << endl;
	cout << sim2.simObjCnt << "��° SoSimple ��ü" << endl;
	return 0;
}