#include <iostream>
using namespace std;

class FruitSeller
{
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money)
	{
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}

	void ShowSalesResult()
	{
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int mymoney; // private:
	int numOfAPples; // private

public:
	void InitMembers(int money)
	{
		mymoney = money;
		numOfAPples = 0;
	}
	void BuyApples(FruitSeller &seller, int money)
	{
		numOfAPples += seller.SaleApples(money);
		mymoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "현재 잔액: " << mymoney << endl;
		cout << "사과 개수: " << numOfAPples << endl << endl;
	}
};

int main()
{
	FruitSeller seller;
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);
	buyer.BuyApples(seller, 2000); // 과일의 구매!

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSalesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}