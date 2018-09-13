#include <iostream>
using namespace std;

class FruitSeller
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:
	FruitSeller(int price, int num, int money)
		: APPLE_PRICE(price), numOfApples(num), myMoney(money)
	{

	}
	int SaleApples(int money)
	{

	}
	void ShowsalesResult() const
	{

	}
};

class FruitBuyer
{
private:
	int myMoney;
	int numOfApples;
public:
	FruitBuyer(int money)
		: myMoney(money), numOfApples(0)
	{

	}
	void BuyApples(FruitSeller &seller, int money)
	{}
	void ShowBuyResult() const
	{

	}
};

int main()
{

}