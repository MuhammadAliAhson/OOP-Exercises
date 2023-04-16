#pragma once
#include<iostream>
using namespace std;
class Distance {
private:
	int feet;
	int inches;


public:
	Distance()
	{
		feet = 0;
		inches = 0;

		if (inches > 12)
		{
			for (int i = 0; inches > 12; i++)
			{
				feet = feet + 1;
				inches = inches - 12;


			}
		}
	}
	Distance(int f, int i) {
		feet = f;
		inches = i;
       
		if (inches > 12)
		{



			for (int i = 0; inches > 12; i++)
			{
				feet = feet + 1;
				inches = inches - 12;


			}
		}

	}
	void setFeets(int f) {
		feet = f;


	}
	void setInches(int i)
		
		
		{
		 
		if (inches > 12)
		{

			for (int i = 0; inches > 12; i++)
			{
				feet = feet + 1;
				i = i - 12;



			}
			inches = i;

		}
		else
			inches = i;

	}

	int getFeets() {

		return feet;
	}
	int getInches()
	{
		return inches;
}

	Distance operator+ (const Distance& amp)
	{
		Distance temp(this->feet + amp.feet, this->inches + amp.inches);
		return temp;
	}
		

		Distance operator- (const Distance & amp)
		{
			Distance temp(this->feet - amp.feet, this->inches - amp.inches);
			return temp;

		}

		
};