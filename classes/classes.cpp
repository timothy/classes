// classes.cpp : Defines the entry point for the console application.
//testing out the different syntax of classes, structs...
//doing this as a refresh to c++ syntax


#include "stdafx.h"
#include <ctime>
using namespace std;

//TODO find out where the infinite loop is happening...
int main()
{
	srand(time(nullptr));

	CheckingAccount ch1;
	CheckingAccount ch2(5, 5);

	ch2.printTransaction();

	//if you come out with a negative account balance than you have to go to financial management class!
	for(auto i = 0; i < 10; i++)
	{
		ch1.Deposit(rand() % 30 + 1, rand() % 100 + 1);
		ch1.Withdraw(rand() % 5 + 1, rand() % 100 + 1);
	}
	ch1.printTransaction();
	
	return 0;
}

