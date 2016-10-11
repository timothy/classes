#pragma once
#include "BankAccount.h"
class CheckingAccount :	public BankAccount
{
public:
	CheckingAccount();
	~CheckingAccount();

	 void Deposit(Money money);
	 void Withdraw(Money money);
};

