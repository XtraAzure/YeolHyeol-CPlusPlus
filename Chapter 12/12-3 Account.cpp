#include "BankingCommoncDec1.h"
#include "Account.h"
#include <iostream>
using namespace std;

Account::Account(int ID, int money, String name)
	: accID(ID), balance(money)
{
	// cusName = new char[strlen(name)+1];
	// strcpy(cusName, name);
	cusName = name;
}

//Account::Account(const Account & ref {.....}
//Account& Account::operator=(const Account& ref {.....}

int Account::GetAccID() const { return accID; }

void Account::Deposit(int money)
{
	balance += money;
}

int Account::Withdraw(int money)
{
	if (balance < money)
		return 0;

	balance -= money;
	return money;
}

void Account::ShowAccInfo() const
{
	cout << "°èÁÂ ID: " << accID << endl;
	cout << "ÀÌ¸§: " << cusName << endl;
	cout << "ÀÜ¾×: " << balance << endl;
}

// Account::~Account() {....}

