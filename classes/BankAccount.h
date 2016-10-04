#pragma once
#include "Money.h"



//this is an example of a polymorphic class
class BankAccount
{
	Money balance;
public:
	BankAccount();
	virtual ~BankAccount();
};

