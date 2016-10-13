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

void Transaction::transact(string t)
{
	transactionCount++;
	log + "Transaction Number:" + to_string(transactionCount) + "\nAmount:" + t + " \n\n";
}

void Transaction::transact(Money money)
{
	transactionCount++;
	log + "Transaction Number:" + to_string(transactionCount) + "\nAmount:" 
	+ to_string(money.getDollars()) +"."+ to_string(money.getChange()) 
	+ " \n\n";
}

string Transaction::veiw(void) const
{
	return log;
}

void Transaction::print(void) const
{
	cout << log << endl;
}