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


/// <summary>
/// ////////////////////////////Question 2
/// </summary>

class Matrix
{
public:
	Matrix();
	void setMatrixValues(int matrixArray[3][3]);
	void displayMatrix();
	Matrix operator + (Matrix const& obj)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrix[i][j] += obj.matrix[i][j];
			}
		}
		return *this;
	}
	Matrix operator - (Matrix const& obj)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrix[i][j] -= obj.matrix[i][j];
			}
		}
		return *this;
	}
	Matrix operator = (Matrix const& obj)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				matrix[i][j] == obj.matrix[i][j];
			}
		}
		return *this;
	}


	 int getSpecificIndexValue(int i, int j)
	{
		 return matrix[i][j];
	}

private:
	int matrix[3][3];
};

Matrix::Matrix()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = 0;
		}
	}
}

void Matrix::setMatrixValues(int matrixArray[3][3])
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matrix[i][j] = matrixArray[i][j];
		}
	}
}

void Matrix::displayMatrix()
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j];
			cout << " ";
		}
		cout << endl;
	}
}

/// <summary>
/// ////////////////////////////Question 4
/// </summary>



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


////////////Question 3


//Q#3
class Product {
private:
	int quantity;
	int serialNo;
public:
	static int objCount;
	Product(int totalQuantityOfProduct, int serialNumberOfProduct)
	{
		quantity = totalQuantityOfProduct;
		serialNo = serialNumberOfProduct;
	}
	int getQuantity() 
	{
		return quantity;
	}
	Product operator =(const Product& pro) 
	{
		Product temp(this->quantity += pro.quantity, this->serialNo += pro.serialNo);
		return temp;
	}
	Product operator-=(int a) {
		Product temp(this->quantity = a * -1, this->serialNo);
		return temp;
	}
};
int Product::objCount
{
objCount = 0
};
