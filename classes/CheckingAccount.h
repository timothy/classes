#pragma once
#include "BankAccount.h"
#include "Transaction.h"

class CheckingAccount : public BankAccount
{
	Transaction transaction_;
	Money fee = Money(2, 50);
	const std::string depositStr = "Deposit";
	const std::string withdrawStr = "Withdraw";
public:
	CheckingAccount(int dollars, int cents);
	CheckingAccount();
	~CheckingAccount();

	void Deposit(Money money) override;
	void Deposit(int dollars, int cents);

	void Withdraw(Money money) override;
	void Withdraw(int dollars, int cents);

	void printTransaction(void) const { transaction_.print(); }
	std::string getTransaction(void) const { return transaction_.get(); }
};

