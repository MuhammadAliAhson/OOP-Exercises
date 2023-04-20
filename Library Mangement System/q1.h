/*
Muhammad Ali Ahson
i21-2535
Section -C
Assignment 04
*/
#pragma once
#include <iostream>
#include "string.h"
#include "string"
#include <string.h>
#include <string>
using namespace std;


class Page {
	// is ko book wali class mn composition krni h 
	string text;
	int Page_number;
public:
	Page() :text(""), Page_number(0) {
	}
	Page(string text_1, int page) :text(text_1), Page_number(page)
	{
	}
	void settext(string t) {
		this->text = t;
	}
	void setpagenum(int n) {
		this->Page_number = n;
	}
	string gettext() {
		return this->text;
	}
	int getpagenum() {
		return this->Page_number;
	}

};
class Book {
	Page p; // composition
	string Title;
	string Author;
	string ISBN;
	// composition to library Mangement System
	// aggregation to Library Data base 
public:
	Book() :Title(""), Author(""), ISBN("") {

	}
	Book(string title_1, string author_1, string isbn) : Title(title_1), Author(author_1), ISBN(isbn)
	{
	}
	void settitle(string title_1) {
		this->Title = title_1;
	}
	void setAuthor(string author_1) {
		this->Author = author_1;
	}
	void setISBN(string isbn) {
		this->ISBN = isbn;
	}
	string gettitle() {
		return this->Title;
	}
	string getAuthor() {
		return this->Author;
	}
	string getIsbn() {
		return this->ISBN;
	}
	void Show_due_date() {

	}
	void Reservation_status() {

	}
	void Book_request() {

	}
	void Renew_info() {

	}


};

class Account {

	int reversed_books;
	int no_of_borrowed_books;
	int no_of_lost_books;
	float fine_amount;
	// aggregation to library Database
public:
	Account() : reversed_books(0), no_of_borrowed_books(0), no_of_lost_books(0), fine_amount(0.0) {}
	Account(int rev, int borrow, int lost, float fine) : reversed_books(rev), no_of_borrowed_books(borrow), no_of_lost_books(lost), fine_amount(fine)
	{
	}
	void setreversed_books(int rev) {
		this->reversed_books = rev;
	}
	void setno_of_borrowed_books(int bor) {
		this->no_of_borrowed_books = bor;
	}
	void setno_of_lost_books(int lost) {
		this->no_of_lost_books = lost;
	}
	void setfine_amount(float fine) {
		this->fine_amount = fine;
	}
	int getreversed_books() {
		return this->reversed_books;
	}
	int getno_of_borrowed_books() {
		return this->no_of_borrowed_books;
	}
	int getno_of_lost_books() {
		return	this->no_of_lost_books;
	}
	float getfine_amount() {
		return this->fine_amount;
	}
	// a fine calculator???
	float caluculate_fine() {

	}
	// undone
	//////
};

class Library_Database {
	
	Account* a;// aggregation
	Book List_of_book[10];// aggregation
	int count;
	// aggregation to Librarian
public:
	Library_Database():count(0) {
		for (int i = 0; i < 10; i++) {
			List_of_book[i].setAuthor("");
			List_of_book[i].setISBN("");
			List_of_book[i].settitle("");
		}
	}
	// undone 
	void Add() {
		string stitle;
		cout << "Addition of the book "<<endl;
		cout << "Please Enter the title of the book" << endl;
		cin >> stitle;
		List_of_book[count].settitle(stitle);
		cout << "Please Enter the ISBN of the book" << endl;
		cin >> stitle;
		List_of_book[count].setISBN(stitle);
		cout << "Please Enter the Author name of the book" << endl;
		cin >> stitle;
		List_of_book[count].setAuthor(stitle);
		 count++;
		 cout << "New Book have been added Successfully " << endl;
	}
	void Delete() {
		cout << "Deletion of the book " << endl;
		string isbn_1;

		if ((count == 0) && (count > 10)) {
			cout << "There is no book to delete" << endl;
		}
		else {
			cout << "Enter ISBN: ";
			cin >> isbn_1;
			for (int i = 0; i < count; i++) {
				//finding a match using for loop
				if (List_of_book[i].getIsbn() == isbn_1) {
					cout << "\nBOOK FOUND\n\n";
					List_of_book[i].setISBN(""); //setting the value to none
					List_of_book[i].setAuthor("");
					List_of_book[i].settitle("");

					for (int a = i; a < count; a++) {
						//adjusting the values after deletion of data eg. data from book[4] copied to book[3]
						List_of_book[a] = List_of_book[a + 1];
					}
					List_of_book[9].setISBN(""); //adjustment if the library is full(10 books)
					List_of_book[9].settitle("");
					List_of_book[9].setAuthor("");
					count--; //calling function to decrement counter
					cout << "\nBOOK SUCCESSFULLY DELETED!" << endl;

				}

			}
		}
	}
	void Update() {
		cout << "Update of the book " << endl;
		string isbn_1, stitle;

		if ((count == 0) && (count > 10)) {
			cout << "There is no book to delete" << endl;
		}
		else {
			cout << "Enter ISBN to update the exiating book: ";
			cin >> isbn_1;
			for (int i = 0; i < count; i++) {
				//finding a match using for loop
				if (List_of_book[i].getIsbn() == isbn_1) {
					cout << "\nBOOK FOUND\n\n";
					cout << "ISBN: " << List_of_book[i].getIsbn() << endl;
					cout << "TITLE: " << List_of_book[i].gettitle() << endl;
					cout << "AUTHOR: " << List_of_book[i].getAuthor() << endl;
					cout << "///////////////////////////////////////////////////////////" << endl;
					cout << "Please Enter the title of the book to update " << endl;
					cin >> stitle;
					List_of_book[i].settitle(stitle);
					cout << "Please Enter the ISBN of the book to update" << endl;
					cin >> stitle;
					List_of_book[i].setISBN(stitle);
					cout << "Please Enter the Author name of the book to update" << endl;
					cin >> stitle;
					List_of_book[i].setAuthor(stitle);
					cout << "///////////////////////////////////////////////////////////" << endl;
					cout << "The updated book record" << endl;
					cout << "ISBN: " << List_of_book[i].getIsbn() << endl;
					cout << "TITLE: " << List_of_book[i].gettitle() << endl;
					cout << "AUTHOR: " << List_of_book[i].getAuthor() << endl;
				}
			}
		}
	}
	void display() {
		cout << "Display of the book " << endl;
		string isbn_1;
		cout << "Enter ISBN to update the exiating book: ";
		cin >> isbn_1;
		for (int i = 0; i < count; i++) {
			//finding a match using for loop
			if (List_of_book[i].getIsbn() == isbn_1) {
				cout << "\nBOOK FOUND\n\n";
				cout << "ISBN: " << List_of_book[i].getIsbn() << endl;
				cout << "TITLE: " << List_of_book[i].gettitle() << endl;
				cout << "AUTHOR: " << List_of_book[i].getAuthor() << endl;
			}
			else {
				cout << "No dispay for this ISBN number ";
				break;
			}
		}

	}
	void Search() {
		cout << "Search of the book " << endl;
		string isbn_1;
		cout << "Enter ISBN to update the exiating book: ";
		cin >> isbn_1;
		for (int i = 0; i < count; i++) {
			//finding a match using for loop
			if (List_of_book[i].getIsbn() == isbn_1) {
				cout << "\nBOOK FOUND\n\n";
				cout << "ISBN: " << List_of_book[i].getIsbn() << endl;
				cout << "TITLE: " << List_of_book[i].gettitle() << endl;
				cout << "AUTHOR: " << List_of_book[i].getAuthor() << endl;
			}
			else {
				cout << "No dispay for this ISBN number ";
				break;
			}
		}
	}
};
class Librarian {

	Library_Database ldb; // aggregation
	string name;
	int ID;
	string password;
	// composition to Library Mangement System	
public:
	Librarian() :name(""),ID(0),password("") {
	}
	Librarian(string name_1,int id_1,string pass) :name(name_1), ID(id_1), password(pass) {
	}
	void setname(string name_2) {
		this->name = name_2;
	}
	void setID(int id) {
		this->ID = id;
	}
	void setpassword(string pass_2) {
		this->password = pass_2;
	}
	string getname() {
		return this->name;
	}
	int getid() {
		return this->ID;
	}
	string getpassword() {
		return this->password;
	}
	void Verify_librarian() {
		cout << "To log in to the Lirarian password " << endl;
		cout << "Please enter your credentials below" << endl;
		string name_1, pass_1;
		int Id_1;
		cout << "Please enter the user name " << endl;
		cin >> name_1;
		cout << "Please enter the user ID " << endl;
		cin >> Id_1;
		cout << "Please enter the user password " << endl;
		cin >> pass_1;
		if ((this->name == name_1) && (this->password == pass_1) && (this->ID == Id_1)) {
			cout << "Congratulation you are successfully login the Librarian portal" << endl;
		}
		else {
			cout << "Entered Input in Invalid " << endl;
			cout << "Please enter the correct credential " << endl;
		}
	}
	void add() {
		ldb.Add();
	}
	void Delete() {
		ldb.Delete();
	}
	void update() {
		ldb.Update();
	}
	void display() {
		ldb.display();
	}
	void search() {
		ldb.Search();
	}
	// undone
	


	~Librarian() {
	}


};
class Student {
	string batch;
	string designation;
	// inheritance to user
public:
	Student(): batch(""), designation("") {

	}
	Student(string batch_1, string design) {
		batch = batch_1;
		designation = design;
	}
	void setbatch(string bat) {
		batch = bat;
	}
	void setdesignation(string design) {
		designation = design;
	}
	string getbatch() {
		return batch;
	}
	string getdesignation() {
		return designation;
	}

};
class Staff {
	string department;
	string designation;
	// inheritance to user
public:
	Staff():department(""), designation("") {

	}
	Staff(string depart, string design) {
		department = depart;
		designation = design;
	}
	void setdepartment(string depart) {
		department = depart;
	}
	void setdesignation(string design) {
		designation = design;
	}
	string getdepartment() {
		return department;
	}
	string getdesignation() {
		return designation;
	}


};
class user : public Student, public Staff
{
public:
	int ID;
	string name;
	Account a;
	// compostion to library mangement system
	user():ID(0),name("") {
	}
	user(int id_1, string name_1) :ID(id_1), name(name_1) {
	}
	void setID(int id_1) {
		this->ID = id_1;
	}
	void setname(string name_1) {
		this->name = name_1;
	}
	int getID() {
		return this->ID;
	}
	string getname() {
		return this->name;
	}
	void Verify() {

	}

};
class Library_Mangement_System {
	Book b;// composition
	Librarian lin;//composition
	user us;//composition
	int usertype;
	string username;
	string password;
public:

	Library_Mangement_System() {
		this->usertype = 0;
		this->username = "";
		this->password = "";
	}
	Library_Mangement_System(int type_1, string name, string passw) {
		this->usertype = type_1;
		this->username = name;
		this->password = passw;
	}
	void setusertype(int choice) {
		this->usertype = choice;
	}
	void setusername(string name) {
		this->username = name;
	}
	void setpassword(string pass) {
		this->password;
	}
	int getusertype() {
		return this->usertype;
	}
	string getusername() {
		return this->username;
	}
	string getpassword() {
		return this->password;
	}

	void login() {
		
			cout << " Please press 1 for the Librarian domain and 0 for the other catogary " << endl;
			string loginname, loginpassword;
			int linid;
			cout << "Please enter the user type " << endl;
			cin >> this->usertype;
			if (this->usertype != 0 && this->usertype != 1) {
				cout << "You have entered a wrong input" << endl;
				cout << " Please entered 1 for the Librarian domain and 0 for the other catogary  " << endl;
				return;
			}
			/// for the librarrian
			if (this->usertype = 1) {
				cout << "Please enter the user name " << endl;
				cin >> loginname;
				cout << "Please enter the user password " << endl;
				cin >> loginpassword;
				if ((this->username == loginname) && (this->password == loginpassword)) {
					cout << "You are successfully login to  Librarian portal " << endl;
					//librarian cin lo
				}
				else {
					cout << "Your ID is not registered in your system" << endl;
					cout << "Please Register yourself" << endl;
				}
			}
			else if (this->usertype = 0) {
				cout << "Please enter the user name " << endl;
				cin >> loginname;
				cout << "Please enter the user password " << endl;
				cin >> loginpassword;
				if ((this->username == loginname) && (this->password == loginpassword)) {
					// user will be used
					cout << "You are successfully login to  user portal  " << endl;
				}
				else {
					cout << "Your ID is not registered in your system" << endl;
					cout << "Please Register yourself" << endl;
				}
			}
		
		
		
	}
	void Register() {
		cout << "Please enter the user type " << endl;
		cin >> this->usertype;
		cout << "Please enter the user name " << endl;
		cin >> username;
		cout << "Please enter the user password " << endl;
		cin >> password;
		cout << "You have been registered successfully!" << endl;
	}
	void logout() {

	}

};
