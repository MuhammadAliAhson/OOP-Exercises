#pragma once
#include <iostream>
#include "string"
#include <cmath>
using namespace std;


template <class t>

t add(t a, t b) {
	return (a + b);
}
template <class t>

t* add(t a[], t b[]) {
	int size = sizeof(a);
	t * c=new t[size];
	for (int i = 0; i <= size; i++) {
		c[i] = a[i] + b[i];
	}
	cout << "Value of the " << size << endl;
	return c;
}
template <class t>

t sub(t a, t b) {
	return (a - b);
}
template <class t>

t Div(t a, t b) {
	return (a / b);
}
template <class t>

t prime(t a) {
	for (int i = 2; i < a/2; i++) {
		if (a % i != 0) {
			return true;
		}
	}
	return false;
}


int Fact(int a) {
	if (a == 0) {
		return 1 ;
	}
return a*	Fact(a - 1);
	
}
int SQRT(int num) {
	return sqrt(num);
}
bool superString(string s) {
	if (s == "ZYY") {
		return true;
	}
	else if (s == "ZYYZ") {
		return false;
	}
	else {
		return false;
	}
}

int SplitToSets(int a[],int num) {
	int size = sizeof(a);
	int high=0;
	int low=0;
	int min = 0;
	//cout << "Value of size of a"<<size << endl;
	int choice = num % 2;
	int temp;
	for (int i = 0; i < num - 1; i++) {
		min = i;
		for (int j = i + 1; j < num; j++)
			if (a[j] < a[min])
				min = j;
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
		for (int i = 0; i < num; i++) {
			cout << a[i] << endl;
		}

	if (choice == 1) {
		
		for (int i = 0; i <= (num / 2) - 1; i++) {
			low += a[i];
		}
		for (int i = (num / 2) ; i < num; i++) {
			high += a[i];
			
		}
		cout << "low " << low << endl;
		cout << "high " << high << endl;
		return high - low;
	}
	else {
		for (int i = 0; i < (num / 2) ; i++) {
			low += a[i];
		}
		for (int i = (num / 2) ; i < num; i++) {
			high += a[i];

		}
		cout << "low " << low << endl;
		cout << "high " << high << endl;
		return high - low;
	}	
	}


int subPalindrome(string f) {
	const char* c = f.c_str();
	int size = strlen(c);
	return size;
}
	
	

