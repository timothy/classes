#include "stdafx.h"
#include "Money.h"
#include <iostream>

using namespace std;

void Money::add(int dAmt, int pennyAmt) {
	if (dAmt > 0) {
		dollars += dAmt;
	}
	if (pennyAmt > 0) {
		if (pennyAmt + cents < 100)
		{
			cents += pennyAmt;
		}
		else
		{
			dollars += (pennyAmt + cents) / 100;
			cents = (pennyAmt + cents) % 100;
		}
	}
}

void Money::add(Money money) {
	add(money.getDollars(), money.getChange());
}

void Money::sub(int dAmt, int pennyAmt) {
	if (dAmt > 0) {
		dollars -= dAmt;
	}
	if (pennyAmt > 0) {
		if (cents - pennyAmt > 0)
		{
			cents -= pennyAmt;
		}
		else
		{
			dollars -= 1;
			cents = (100 - pennyAmt);
		}
	}
}

void Money::sub(Money money) {
	sub(money.getDollars(), money.getChange());
}