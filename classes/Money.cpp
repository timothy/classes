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

void Money::sub(int dAmt, int pennyAmt) {
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