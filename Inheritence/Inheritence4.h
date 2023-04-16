
#pragma once
#include <iostream>
using namespace std;

class Staff {
protected:
	string name;
	string cnic;
	short int dob;
	unsigned long int contact;
public:
	Staff() :cnic(""), dob(0), contact(0), name("") {
	}
	Staff(string name_1, short int year, string cnic_1, unsigned long int con) :cnic(cnic_1), dob(year), contact(con), name(name_1) {
	}
	string getName() {
		return name;
	}
	int getDob() {
		return dob;
	}
	string getCnic() {
		return cnic;
	}
	unsigned long int	getContact() {
		return contact;
	}
	int getAge() {
		return 2022 - dob;
	}

};

class Faculty : protected Staff {
protected:
	int payscale;
	string Subject;
	int roomnumber;
	string rank;
public:
	Faculty() {
	}
	Faculty(string name_1, short int year, string cnic_1, unsigned long int con, int room_1, string rank_1, string sub, int paysca) {
		name = name_1;
		dob = year;
		cnic = cnic_1;
		contact = con;
		roomnumber = room_1;
		rank = rank_1;
		Subject = sub;
		payscale = paysca;
	}
	
	int getRoomNumber() {
		return roomnumber;
	}
	string getRank() {
		return this->rank;
	}
	string getSubject() {
		return this->Subject;
	}
	int getPayScale() {
		return payscale;
	}

};

class NonFaculty : public Staff {
protected:
	string duty, timing, endtiming;
public:
	NonFaculty(string name_1, short int year, string cnic_1, unsigned long int con, string duty_1, string strt, string endtime) {
		name = name_1;
		dob = year;
		cnic = cnic_1;
		contact = con;
		duty = duty_1;
		timing = strt;
		endtiming = endtime;
	}
	string getName() {
		return name;
	}
	int getDob() {
		return dob;
	}
	string getCnic() {
		return cnic;
	}
	unsigned long int	getContact() {
		return contact;
	}
	string getDuty() {
		return duty;
	}
	string getStartTiming() {
		return timing;
	}
	string getEndTiming() {
		return endtiming;
	}
};
class HOD:public Faculty {
private:
	int DEPTID;
	string department;
public:
	HOD();
	HOD(int dep, string department_1, string name_1, short int year, string cnic_1, unsigned long int con, int room_1, string rank_1, string sub, int paysca) {
		name = name_1;
		dob = year;
		cnic = cnic_1;
		contact = con;
		DEPTID = dep;
		department = department_1;
	}
	string getDepartment() {
		return department;
	}
	int getDeptID() {
		return DEPTID;
	}

};
class Teacher : public Faculty{
public:
	string program;
	Teacher(string department_1, string name_1, short int year, string cnic_1, unsigned long int con, int room_1, string rank_1, string sub, int paysca) {
		program = department_1;
		name = name_1;
		dob = year;
		cnic = cnic_1;
		contact = con;
		roomnumber = room_1;
		rank = rank_1;
		Subject = sub;
		payscale = paysca;
	}
	string getProgram() {
		return program;
	}
 };