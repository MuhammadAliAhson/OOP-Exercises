#include<iostream>
using namespace std;
class Employee {
protected:
	string name;
	int empID;
public:
	Employee() {
		name = "";
		empID = 0;
	}
	Employee(string a, int b) {
		name = a;
		empID = b;
	}
	virtual void calculate_the_income(int hours = 240) {}
	virtual void calculate_the_hourly_income(int hours) {}

};
class Hourly_Employee : public Employee {
private:
	double Hourly_Income;
public:
	Hourly_Employee(string a, int b, double HI) : Employee(a, b) {
		Hourly_Income = HI;
	}
	void calculate_the_hourly_income(int hours) {
		cout << "The income of hourly employee for " << hours << " is " << hours * 150 << endl;
	}
};
class PermanentEmployee : public Employee {
private:
	double Hourly_Income;
public:
	PermanentEmployee(string a, int b, double HI) : Employee(a, b) {
		Hourly_Income = HI;
	}
	void calculate_the_income(int hours = 240) {
		cout << "The income of permanent employee for " << hours << " is " << hours * 150 << endl;
	}
};
int main() {
	Employee* emp;
	Hourly_Employee emp1("Ali", 1, 1.2);
	PermanentEmployee emp2("Ali", 1, 1.2);
	emp = &emp1;
	emp->calculate_the_hourly_income(10);
	emp = &emp2;
	emp->calculate_the_income(240);
	return 0;
}