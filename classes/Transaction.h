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

	void transact(std::string t);
	 std::string veiw(void) const;
	 void print(void) const;
};

