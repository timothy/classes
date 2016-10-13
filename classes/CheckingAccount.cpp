#include "stdafx.h"
#include "CheckingAccount.h"


CheckingAccount::CheckingAccount()
{
}


CheckingAccount::~CheckingAccount()
{
}

void CheckingAccount::Deposit(Money money)
{
	transaction_.transact(money);
	balance.add(money);
}

void CheckingAccount::Withdraw(Money money)
{
	transaction_.transact(money);
	balance.add(money);
}