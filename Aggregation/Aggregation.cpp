#include<iostream>
#include<string>
using namespace std;

class Instructor
{
private:
	char FirstName[30];
	char LastName[30];
	int office_no;

public:
	Instructor(string FirstN = "", string LastN = "", int office_no = 0) : office_no(office_no) {
		strcpy_s(FirstName, FirstN.c_str());
		strcpy_s(LastName, LastN.c_str());
	}

	Instructor setNum(int office_Number) {
		office_no = office_Number;
		return *this;
	}

	Instructor setF(string FirstN)
	{
		strcpy_s(FirstName, FirstN.c_str());
		return *this;
	}

	Instructor setL(string LastN)
	{
		strcpy_s(LastName, LastN.c_str());
		return *this;
	}

	int getNum()
	{
		return office_no;
	}
	void printF()
	{
		cout << endl << FirstName << endl;
	}

	void printL()
	{
		cout << endl << LastName << endl;
	}

	void PrintAll()
	{
		cout << endl << "Name is: " << FirstName << LastName << "\t Office Number: " << office_no << endl;
	}

};

class Textbook
{
private:
	char title[30], author[30], publisher[30];
public:

	Textbook(string t = "", string a = "", string p = "")
	{
		strcpy_s(title, t.c_str());
		strcpy_s(author, a.c_str());
		strcpy_s(publisher, p.c_str());
	}

	Textbook setT(string t)
	{
		strcpy_s(title, t.c_str());
		return *this;
	}

	Textbook setA(string a)
	{
		strcpy_s(author, a.c_str());
		return *this;
	}

	Textbook setL(string p)
	{
		strcpy_s(publisher, p.c_str());
		return *this;
	}

	void printT()
	{
		cout << endl << title << endl;
	}

	void printA()
	{
		cout << endl << author << endl;
	}

	void printP()
	{
		cout << endl << publisher << endl;
	}
	void PrintAll()
	{
		cout << endl << "Title is: " << title << "\t Author is: " << author << "\t Publisher is: " << publisher << endl;
	}
};

class Course
{
private:
	char Name[30];
	Instructor* instructor;
	Textbook* book;
public:

	Course()
	{

	}
	Course(string N, Instructor& I, Textbook& T)
	{
		strcpy_s(Name, N.c_str());
		instructor = &I;
		book = &T;
	}
	void getAll()
	{
		cout << "Student Name is: " << Name << endl;
		(*instructor).PrintAll();
		(*book).PrintAll();
	}
};

int main() {

	Instructor I("Ali", "Ahson", 303);
	Textbook c("Tension", "Siddique", "Faiq Production");
	Course C("Ali", I, c);

	C.getAll();
}