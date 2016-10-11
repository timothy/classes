#include "stdafx.h"
#include "Transaction.h"
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

string Transaction::veiw(void) const
{
	return log;
}

void Transaction::print(void) const
{
	cout << log << endl;
}