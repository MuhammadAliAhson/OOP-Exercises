/*
Muhammad Ali Ahson
i21-2535
Section -C
Assignment 04
*/
#include <iostream>
#include "q3.h"
using namespace std;
int main() {
	stocks a("+", 5, 100, 2000);
	cout << "1 " << endl;
	a.addcurrent_price(100);
	cout << "2 " << endl;
	cout<<a.profit_return()<<endl;
	
	cout << "3  " << endl;
	real_state r("Islamad", "G\11", 2012, 100, 20000);
	cout << "4  " << endl;
	cout<<r.getmarket_value()<<endl;
	cout<<r.profit_return() << endl;
	cout << r.profit << endl; 
	r.addlocation("Punjab");
	cout << "5  " << endl;
	r.addmarket_value(100);
	cout << "6  " << endl;

	Profit h;
	cout << "7  " << endl;
	h.Profit_max(r,a);

	return 0;
}
