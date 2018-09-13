#include <iostream>
#include <cstring>
using namespace std;

class Gun
{
private:
	int bullet; // ������ �Ѿ��� ��
public:
	Gun(int bnum) : bullet(bnum)
	{}
	void Shot()
	{
		cout << "BBANG!" << endl;
		bullet--;
	}
};

class Police
{
private:
	int handcuffs; // ������ ������ ��
	Gun * pistol; // �����ϰ� �ִ� ����
public:
	Police(int bnum, int bcuff)
		: handcuffs(bcuff)
	{
		if (bnum > 0)
			pistol = new Gun(bnum);
		else
			pistol = NULL;
	}
	void PutHandcuff()
	{
		cout << "SNAP!" << endl;
		handcuffs--;
	}
	void Shot()
	{
		if (pistol == NULL)
			cout << "Hut BBANG!" << endl;
		else
			pistol->Shot();
	}
	~Police()
	{
		if (pistol != NULL)
			delete pistol;
	}
};

int main()
{
	Police pman1(5, 3);
	pman1.Shot();
	pman1.PutHandcuff();

	Police pman2(0, 3); // No pistol
	pman2.Shot();
	pman2.PutHandcuff();
	return 0;
}