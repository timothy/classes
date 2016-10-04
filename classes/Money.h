#pragma once

//simple stuct example
struct Money
{
private:
	int dollars;
	int cents;
public:
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

//TODO make print balance method...

};