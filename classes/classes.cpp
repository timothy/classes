// classes.cpp : Defines the entry point for the console application.
//testing out the different syntax of classes, structs...
//doing this as a refresh to c++ syntax


#include "stdafx.h"
#include <ctime>
using namespace std;

int main()
{
	srand(time(nullptr));

	CheckingAccount ch1;
	CheckingAccount ch2(5, 5);
	CheckingAccount ch3(5, 33);
	ch3.Withdraw(5, 83);
	ch3.printTransaction();

	CheckingAccount ch4(5, 330);
	ch4.Withdraw(5, 830);
	ch4.printTransaction();

	ch2.printTransaction();

//	if you come out with a negative account balance than you have to go to financial management class!
	for(auto i = 0; i < 10; i++)
	{
		ch1.Deposit(rand() % 30 + 1, rand() % 100 + 1);
		ch1.Withdraw(rand() % 5 + 1, rand() % 100 + 1);
	}
	ch1.printTransaction();
	
	return 0;
}

