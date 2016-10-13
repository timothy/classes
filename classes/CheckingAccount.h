#pragma once
#include "BankAccount.h"
#include "Transaction.h"

class CheckingAccount :	public BankAccount
{
	Transaction transaction_;
public:
	CheckingAccount();
	~CheckingAccount();

	 void Deposit(Money money) override;
	 void Withdraw(Money money) override;
};

