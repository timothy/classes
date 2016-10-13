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

std::string Transaction::logFormat(std::string type, std::string t, std::string balance_string)
{
	return "Transaction Number:" + to_string(transactionCount) + "\n" +
		type + " Amount: $" + t +
		"\nEnd Balance: $" + balance_string + "\n\n";
}

std::string Transaction::logFormat(std::string type, int dollars, int cents, Money balance_money)
{
	return logFormat(type, to_string(dollars) +"."+ to_string(cents), to_string(balance_money.getDollars()) + "." + to_string(balance_money.getChange()));
}

std::string Transaction::logFormat(std::string type, Money t, Money balance_money)
{
	return logFormat(type, to_string(t.getDollars()) + "." + to_string(t.getChange()), to_string(balance_money.getDollars()) + "." + to_string(balance_money.getChange()));
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
	log += logFormat(type, dollars,  cents, balance_money);
}

string Transaction::get(void) const
{
	return log;
}

void Transaction::print(void) const
{
	cout << log << endl;
}