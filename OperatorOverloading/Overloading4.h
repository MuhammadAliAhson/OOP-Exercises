#pragma once
#include<iostream>
using namespace std;


class Date {
private:
	int Day, Month, Year;
public:
	Date(int x, int y, int z) {
		Day = x;
		Month = y;
		Year = z;
	}
	bool operator >(const Date& d) {
		return (Day > d.Day);
	}
	bool operator <(const Date& d) {
		return (Day < d.Day);
	}
	bool operator ==(const Date& d) {
		return (Day == d.Day);
	}

};