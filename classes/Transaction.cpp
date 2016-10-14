#include "stdafx.h"
#include "Transaction.h"
#include "Money.h"
#include <iostream>

using namespace std;
//Transaction::Transaction()
//{
//	Transaction::transactionCount = 0;
//	Transaction::log = "";
//}


Transaction::~Transaction()
{
}

std::string Transaction::addZero(int cents)
{
	return cents < 10 ? "0" : "";
}

std::string Transaction::logFormat(std::string type, std::string amt, std::string balance_string) const
{
	return "Transaction Number:" + to_string(transactionCount) + "\n" +
		type + " Amount: $" + amt +
		"\nEnd Balance: $" + balance_string + "\n\n";
}

std::string Transaction::logFormat(std::string type, int dollars, int cents, Money balance_money) const
{
	Money money(dollars, cents);
	return logFormat(type, to_string(money.getDollars()) + "." + addZero(money.getCents()) + to_string(money.getCents()), to_string(balance_money.getDollars()) + "." + addZero(balance_money.getCents()) + to_string(balance_money.getCents()));
}

std::string Transaction::logFormat(std::string type, Money t, Money balance_money) const
{
	return logFormat(type, to_string(t.getDollars()) + "." + addZero(t.getCents()) + to_string(t.getCents()), to_string(balance_money.getDollars()) + "." + addZero(balance_money.getCents()) + to_string(balance_money.getCents()));
}

void Transaction::transact(string type, string t, string balance_string)
{
	transactionCount++;
	log += logFormat(type, t, balance_string);
}

void Transaction::transact(string type, Money money, Money balance_money)
{
	transactionCount++;
	log += logFormat(type, money, balance_money);
}

void Transaction::transact(string type, int dollars, int cents, Money balance_money)
{
	transactionCount++;
	log += logFormat(type, dollars, cents, balance_money);
}

string Transaction::get(void) const
{
	return log;
}

void Transaction::print(void) const
{
	cout << log << endl;
}