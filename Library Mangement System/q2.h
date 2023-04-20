/*
Muhammad Ali Ahson
i21-2535
Section -C
Assignment 04
*/
#pragma once
#ifndef q2_h
#define q2_h
#pragma once
#include <iostream>
#include "string.h"
#include "string"
#include <string.h>
#include <string>
using namespace std;
 
class Account {
	string account_type;
	string first_name, middle_name, last_name;
	string cnic;
	string address;
	long int phone_num;
	string DOB;
	string unique;
	int balance;
	int tran[10];
	int yello;
public:
	Account():account_type(""), first_name(""), middle_name(""), last_name(""), cnic(""), address(""),
		phone_num (0), DOB(""), unique(""),balance(0),yello(0) {
		for (int i = 0; i < 10; i++) {
			tran[i] = 0;
		}
}
	Account(string acc,string fn,string mn, string ln, string CNIC,string address_1,long int phone_1,string dob,int bal) 
		:account_type(acc), first_name(fn), middle_name(mn), last_name(ln), cnic(CNIC),
		address(address_1),phone_num(phone_1), DOB(dob),balance(bal) {}
	void setaccount_type(string type) {
		this->account_type = type;
	}
	void setfirst_name(string fn) {
		this->first_name = fn;
	}
	void setmiddle_name(string mn) {
		this->middle_name = mn;
	}
	void setlast_name(string ln) {
		this->last_name = ln;
	}
	void setcnic(string cn) {
		this->cnic = cn;
	}
	void setaddress(string add) {
		this->address = add;
	}
	void setphone_num(long int cn) {
		this->phone_num = cn;
	}
	void setdob(string dn) {
		this->DOB = dn;
	}
	void setunique(string c, string a= "PK") {
		a = "PK";
		this->unique = a + c;
	}
	void setbalace(int bal) {
		this->balance = bal;
	}
	//
	string getaccount_type() {
		return this->account_type;
	}
	string getfirst_name() {
		return	this->first_name ;
	}
	string getmiddle_name() {
		return this->middle_name ;
	}
	string getlast_name() {
		return	this->last_name ;
	}
	string getcnic() {
		return this->cnic ;
	}
	string getaddress() {
		return	this->address ;
	}
	long int getphone_num() {
		return this->phone_num ;
	}
	string getdob() {
		return	this->DOB;
	}
	int getbalace() {
		return this->balance;
	}
	string getunique() {
		return this->unique;
	}

	void withdraw(int m,string t) {
		int w;
		if (t == "Saving Account") {
			if (m < 5000) {
				this->balance = this->balance - m;
			}
			else if (m > 5000) {
				w = this->balance * 0.2;
				this->balance = this->balance - m;
				this->balance = this->balance - w;
			}
			else {
				w = this->balance * 2.5;
				this->balance = this->balance - m;
				this->balance = this->balance - w;
			}
		}
		else
		{
			this->balance = this->balance - m;
		}
		transaction(m);
		cout << "Your Current Balance " << this->balance << endl;
	}
	void Deposit_money(int m) {
		this->balance = this->balance + m;

		cout << "Your Current Balance " << this->balance << endl;
	}
	void transaction(int r) {
		if (yello < 10) {
			this->tran[yello] = r;
			yello++;
		}
	}
	void gettrans() {
		for (int i = 0; i < 10; i++) {
			cout << i << "  " << this->tran[i] << endl;
		}
	}

};


class Systemuser {
	Account a[100];
	int count;
public:
	Systemuser() :count(0) {}
	void Register() {
		string c;
		long int b;
		cout << "Welcome to Our Bank Management System" << endl;
		cout << "Please enter your credentials to register your account" << endl;
		cout << "------------------------------------------------------" << endl;
		cout << "Please enter your Account type" << endl;
		cin >>  c;
		a[count].setaccount_type(c);
		cout << "Please enter your First Name" << endl;
		cin >> c;
		a[count].setfirst_name(c);
		cout << "Please enter your Middle Name" << endl;
		cin >> c;
		a[count].setmiddle_name(c);
		cout << "Please enter your Last Name" << endl;
		cin >> c;
		a[count].setlast_name(c);
		cout << "Please enter your CNIC" << endl;
		cin >> c;
		a[count].setcnic(c);
		cout << "Please enter your Address" << endl;
		cin >> c;
		a[count].setaddress(c);
		cout << "Please enter your Phone number" << endl;
		cin >> b;
		a[count].setphone_num(b);
		cout << "Please enter your Date of Birth in year/month/date  format" << endl;
		cin >> c;
		a[count].setdob(c);
		a[count].setunique(a[count].getcnic(), "pk");
		count++;
	}
	void Withdraw_money() {
		string q, w;
		int e;
		cout << "Welcome to Our Bank Management System" << endl;
		cout << "Please enter your credentials to Withdraw money" << endl;
		cout << "------------------------------------------------------" << endl;
		cout << "Please enter your Account Number" << endl;
		cin >> q;

		cout << "Please enter your CNIC Number" << endl;
		cin >> w;
		for (int i = 0; i < count; i++) {
			if ((a[i].getunique() == q) && (a[i].getcnic() == w)) {
				cout << "Please enter your Ammount" << endl;
				cin >> e;
				if (e < a[i].getbalace()) {
					cout << "The Ammount withdraw " << e << endl;
					a[i].withdraw(e,a[i].getaccount_type());
					cout << "thanks for using our System";
				}
				else {
					cout << "Not enough money in the account" << endl;
				}
			}
			else {
				cout << "wrong input" << endl;
				break;
			}
		}
	}
	void Deposit_money() {
		string q, w;
		int e;
		cout << "Welcome to Our Bank Management System" << endl;
		cout << "Please enter your credentials to Deposit money" << endl;
		cout << "------------------------------------------------------" << endl;
		cout << "Please enter your Account Number" << endl;
		cin >> q;

		cout << "Please enter your CNIC Number" << endl;
		cin >> w;
		for (int i = 0; i < count; i++) {
			if ((a[i].getunique() == q) && (a[i].getcnic() == w)) {
				cout << "Please enter your Ammount to deposit " << endl;
				cin >> e;
				cout << "The deposit Amount   " << e << endl;
				a[i].Deposit_money(e);

				cout << "thanks for using our System";
			}
			else {
				cout << "Not Account Found" << endl;
				break;
			}
		}	
}
	void Balance_inquiry() {
		string q, w;
		cout << "Welcome to Our Bank Management System" << endl;
		cout << "Please enter your credentials to Balance Inquiry" << endl;
		cout << "------------------------------------------------------" << endl;
		cout << "Please enter your Account Number" << endl;
		cin >> q;

		cout << "Please enter your CNIC Number" << endl;
		cin >> w;
		for (int i = 0; i < count; i++) {
			if ((a[i].getunique() == q) && (a[i].getcnic() == w)) {
				cout << "Current Balace in your Account " << a[i].getbalace() << endl;
			}
			else {
				cout << "Not Account Found" << endl;
				break;
			}
		}
	}
	void Transaction_History() {
		string q, w;
		cout << "Welcome to Our Bank Management System" << endl;
		cout << "Please enter your credentials to Balance Inquiry" << endl;
		cout << "------------------------------------------------------" << endl;
		cout << "Please enter your Account Number" << endl;
		cin >> q;

		cout << "Please enter your CNIC Number" << endl;
		cin >> w;
		for (int i = 0; i < count; i++) {
			if ((a[i].getunique() == q) && (a[i].getcnic() == w)) {
				a[i].gettrans();
			}
			else {
				cout << "Not Account Found" << endl;
				break;
			}
		}
	}

};

#endif
