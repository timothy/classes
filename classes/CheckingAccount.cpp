#include "stdafx.h"
#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(int dollars, int cents)
{
	Deposit(dollars, cents);
}
CheckingAccount::CheckingAccount()
{
}


CheckingAccount::~CheckingAccount()
{
}

void CheckingAccount::Deposit(Money money)
{
	balance.add(money);
	transaction_.transact(depositStr, money, balance);
}

void CheckingAccount::Deposit(int dollars, int cents)
{
	balance.add(dollars, cents);
	transaction_.transact(depositStr, dollars, cents, balance);
}

void CheckingAccount::Withdraw(Money money)
{
	balance.sub(money);
	transaction_.transact(withdrawStr, money, balance);
}

void CheckingAccount::Withdraw(int dollars, int cents)
{
	balance.sub(dollars, cents);
	transaction_.transact(withdrawStr, dollars, cents, balance);
}
