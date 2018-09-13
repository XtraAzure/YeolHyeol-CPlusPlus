#include <iostream>
using namespace std;

class Account
{
private: 
	int accID; // 계좌번호
	int balance; //잔액
	char *cusName; // 고객이름
public:
	Account(int ID, int money, char *name)
		:accID(ID), balance(money)
	{
		cusName = new char[strlen(name) + 1];
		strcpy(cusName, name);
	}
	Account(const Account &ref)
		:accID(ref.accID), balance(ref.balance)
	{
		cusName = new char[strlen(ref.cusName) + 1];
		strcpy(cusName, ref.cusName);
	}
	int GetAccID() { return accID; }

	void Deposit(int money)
	{
		balance += money;
	}

	int Withdraw(int money) // 출금액 반환, 부족 시 0 반환
	{
		if (balance < money)
			return 0;

		balance -= money;
		return money;
	}

	void ShowAccInfo()
	{
		cout << "계좌ID: " << accID << endl;
		cout << "이름: " << cusName << endl;
		cout << "잔액: " << balance << endl;
	}
	~Account()
	{
		delete[]cusName;
	}
};
