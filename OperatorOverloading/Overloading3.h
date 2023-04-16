#pragma once
#include<iostream>
using namespace std;

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