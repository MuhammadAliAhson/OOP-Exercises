/*
Muhammad Ali Ahson
i21-2535
Section -C
Assignment 04
*/
#include <iostream>
#include "q2.h"
using namespace std;
int main() {
	Account a("Saving","Muhammad","Ali","Ahson","38201","Islamabad",0324,"june", 1000);
	Systemuser s;
	s.Register();
	s.Withdraw_money();
	s.Deposit_money();
	s.Balance_inquiry();
	s.Transaction_History();

	return 0;
}
