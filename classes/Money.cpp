#include "stdafx.h"
#include "Money.h"
#include <iostream>

using namespace std;

void Money::add(int dAmt, int pennyAmt) {
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

void Money::add(Money money) {
	if (money.getDollars() > 0) {
		dollars += money.getDollars();
	}
	if (money.getChange() > 0) {
		if (money.getChange() < 100)
		{
			cents += money.getChange();
		}
		else
		{
			dollars += money.getChange() / 100;
			cents += money.getChange() % 100;
		}
	}
}

void Money::sub(int dAmt, int pennyAmt) {
	if (dAmt > 0) {
		dollars -= dAmt;
	}//todo make sure you cannot have a negative pennyAmt.
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

void Money::sub(Money money) {
	if (money.getDollars() > 0) {
		dollars -= money.getDollars();
	}
	if (money.getChange() > 0) {
		if (money.getChange() < 100)
		{
			cents -= money.getChange();
		}
		else
		{
			dollars -= money.getChange() / 100;
			cents -= money.getChange() % 100;
		}
	}
}