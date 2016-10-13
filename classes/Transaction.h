#pragma once
#include <string>

class Transaction
{
	std::string log;
	int transactionCount;
public:
	explicit Transaction(std::string log = "", int transactionCount = 0)
		: log(log),
		transactionCount(transactionCount)
	{
	}
	~Transaction();

	std::string logFormat(std::string type, std::string t, std::string balance_string);
	std::string logFormat(std::string type, int dollars, int cents, Money balance_money);
	std::string logFormat(std::string type, Money t, Money balance_money);

	void transact(std::string type, std::string t, std::string balance_string);
	void transact(std::string type, Money t, Money balance_money);
	void transact(std::string type, int dollars, int cents, Money balance_money);

	std::string get(void) const;
	void print(void) const;
};

