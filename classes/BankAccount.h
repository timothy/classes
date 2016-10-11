#pragma once
#include "Money.h"



//this is an example of a polymorphic class
class BankAccount
{
protected:
	Money balance;
public:
	BankAccount() {};
	virtual ~BankAccount() {};

	virtual void Deposit(Money money) = 0;
	virtual void Withdraw(Money money) = 0;
};