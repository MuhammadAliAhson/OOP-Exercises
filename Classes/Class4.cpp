# include <iostream>
# include <string>
using namespace std;

class Employee {
private:
	string Name;
	int age;
	int NIC;
	string address;
	int salary;
	int zipcode;
public:
	Employee(string name, int Age, int nic, string Adress, int Salary) {
		Name = name;
		age = Age;
		NIC = nic;
		address = Adress;
		salary = Salary;
	}
	void setZipCode(int Zipcode) {
		zipcode = Zipcode;
	}
	int getZipCode() {
		return zipcode;
	}
	string getName(){
		return Name;
	}
	int getage(){
		return age;
	}
	int getNIC(){
		return NIC;
	}
	string getaddress(){
		return address;
	}
	int getsalary(){
		return salary;
	}
};

void printEmployee(Employee e1) {
	cout << e1.getName() << endl;
	cout << e1.getage() << endl;
	cout << e1.getNIC() << endl;
	cout << e1.getaddress() << endl;
	cout << e1.getsalary() << endl;
	cout << e1.getZipCode() << endl;
}

int main() {
	string Name;
	int age;
	int NIC;
	string address;
	int salary;
	int zipcode;
	cout << "Name: ";
	cin >> Name;
	cout << "Age: ";
	cin >> age;
	cout << "Nic number: ";
	cin >> NIC;
	cout << "Address: ";
	cin >> address;
	cout << "Salary: ";
	cin >> salary;
	cout << "Zip code: ";
	cin >> zipcode;
	Employee e1(Name, age, NIC, address, salary);
	e1.setZipCode(zipcode);
	printEmployee(e1);
	return 0;
}


