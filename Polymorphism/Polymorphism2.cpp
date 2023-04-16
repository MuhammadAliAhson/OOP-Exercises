#include <iostream>
#include <string>
//#include <conio.h>


using namespace std;




class Computer{
private:
	string companyName;
	float price;
public:
	Computer(){}


	Computer(string companyName,float price){
		this->companyName=companyName;
		this->price=price;
	}


	virtual void show(){
		cout<<"Company name: "<<companyName<<"\n";
		cout<<"Company price: "<<price<<"\n";
	}
};


class Desktop: public Computer{
private:
	string color;
	float monitorSize;
	string processorType;
public:
	Desktop (){}


	Desktop (string companyName,float price,string color,float monitorSize,string processorType):Computer(companyName,price){
		this->color=color;
		this->monitorSize=monitorSize;
		this->processorType=processorType;
	}


	virtual void show(){
		Computer::show();
		cout<<"Desktop color: "<<color<<"\n";
		cout<<"Desktop monitor size: "<<monitorSize<<"\n";
		cout<<"Desktop processor type: "<<processorType<<"\n";
	}
};


class Laptop : public Computer{
private:
	string color;
	float size;
	string processorType;
public:
	Laptop  (){}


	Laptop  (string companyName,float price,string color,float size,string processorType):Computer(companyName,price){
		this->color=color;
		this->size=size;
		this->processorType=processorType;
	}


	virtual void show(){
		Computer::show();
		cout<<"Laptop color: "<<color<<"\n";
		cout<<"Laptop size: "<<size<<"\n";
		cout<<"Laptop processor type: "<<processorType<<"\n";
	}
};


int main(void){
	Computer* computer;




	Desktop* desktop=new Desktop("HP",350,"Black",17.5,"Io35");
	computer=desktop;
	computer->show();


	cout<<"\n\n";


	Laptop* laptop=new Laptop("Apple",1500,"Gray",13,"Io4887");
	computer=laptop;
	computer->show();




	system("pause");
	return 0;
}