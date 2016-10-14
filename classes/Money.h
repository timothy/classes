#pragma once
#include <string>
#include <iostream>

//simple structure example -- A "struct" is very close to what a "class" is - A "struct" will default to public
// just in case the way that the money is added, subtracted, divided, multiplied... ever changes...
struct Money
{
private:
	int dollars;
	int cents;
public:
	//Note: "explicit" means constructor or conversion function doesn't allow implicit conversions or copy-initialization.
	explicit Money(int dollars = 0, int cents = 0)
		: dollars(dollars),
		cents(cents)
	{
	}

	void add(int dAmt, int pennyAmt);
	void add(Money money);
	void sub(int dAmt, int pennyAmt);
	void sub(Money money);

	int getDollars(void) const { return dollars; }
	int getCents(void) const { return cents; }

	std::string veiw() const
	{
		return "$" + std::to_string(dollars) + "." + std::to_string(cents);
	}

	void print(void) const
	{
		std::cout << "$" + std::to_string(dollars) + "." + std::to_string(cents);
	}
};