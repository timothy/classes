#pragma once
#include <string>

//simple structure example -- very close to what a class is only it will default to public
struct Money
{
private:
	int dollars;
	int cents;
public:
	Money(int dollars = 0, int cents = 0)
		: dollars(dollars),
		  cents(cents)
	{
	}

	void add(int dAmt, int pennyAmt) {
		if (dAmt > 0) {
			dollars += dAmt;
		}
		if (pennyAmt > 0) {
			if (pennyAmt < 100)
			{
				cents += pennyAmt;
			}
			else
			{
				dollars += pennyAmt / 100;
				cents += pennyAmt % 100;
			}
		}
	}

	void sub(int dAmt, int pennyAmt) {
		if (dAmt > 0) {
			dollars -= dAmt;
		}
		if (pennyAmt > 0) {
			if (pennyAmt < 100)
			{
				cents -= pennyAmt;
			}
			else
			{
				dollars -= pennyAmt / 100;
				cents -= pennyAmt % 100;
			}
		}
	}

	std::string printBalance() const
	{
		return "$" + std::to_string(dollars) + "." + std::to_string(cents);
	}
};