#pragma once
#include <string>
#include <iostream>

//simple structure example -- A "struct" is very close to what a "class" is - will default to public
struct Money
{
private:
	int dollars;
	int cents;
public:
	explicit Money(int dollars = 0, int cents = 0)
		: dollars(dollars),
		  cents(cents)
	{
	}

	void add(int dAmt, int pennyAmt);
	void sub(int dAmt, int pennyAmt);

	std::string veiw() const
	{
		return "$" + std::to_string(dollars) + "." + std::to_string(cents);
	}

	void print(void) const
	{
		std::cout << "$" + std::to_string(dollars) + "." + std::to_string(cents);
	}
};