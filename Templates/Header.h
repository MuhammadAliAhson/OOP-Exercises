#pragma once
#include <iostream>
using namespace std;
template<class t>
t smaller(t one=0, t two=0, t three=0) {
	if (three !=0) {
		if (one < two && one < three) {
			return one;
		}
		else if (two < one && two < three) {
			return two;
		}
		else {
			return three;
		}
	}
	else {
	if (one > two) {
		return two;
	}
	else {
		return one;
	}
}
}

template<class T>
T *sameElement(T a[], T b[], T val1,T val2) {
	T *rel=new T[2];
	int count = 0;
	for (int i = 0; i < val1; i++) {
		for (int j = 0; j < val2; j++) {
			if (a[i] == b[j]) {
				rel[count] = a[i];
				count++;
			}
		}

	}
	return rel;
}



template<class T>
T* concatenateArrays(T arr1[], T arr2[], int size1, int size2)
{
	T* arr3 = new T[6];
	int size = 0;
	for (int i = 0; i < size1; i++)
	{
		for (int j = 0; j < size2; j++)
		{
			if (arr1[i] != arr2[j])
			{
				arr3[size] = arr1[i];
				size++;
				//cout << endl << arr3[size] << endl << size << endl;

			}

			else if (arr1[i] == arr2[j])
			{
				continue;
			}

			break;
		}

	}

	for (int i = 0; i < size2; i++)
	{
		for (int j = 0; j < size1; j++)
		{
			if (arr2[i] == arr1[j])
			{
				continue;
			}

			else if (arr2[i] != arr1[j] && arr2[i] != arr1[j + 1] && arr2[i] != arr1[j + 2] && arr2[i] != arr1[j + 3])
			{
				arr3[size] = arr2[i];
				size++;
			}


			break;
		}

	}

	for (int i = 0; i < size; i++)
	{
		cout << endl << arr3[i] << endl;
	}

	return arr3;
}










/*

template < class Y>
Y* concatenateArrays(Y a[], Y b[], Y val1, Y val2) {
	Y* rel = new Y[6];
	int count = 0;
	for (int i = 0; i < val1; i++) {
		rel[count] = a[i];
		count++;
	}
	int h = 0;
	for (int i = 0; i < val1; i++) {
		for (int j = 0; j < val2; j++) {
			if (b[i] == a[j]) {
				j = val2 ;
				h++;
			}
		}
	}
	for (int i = h - 1; i < val2; i++) {


			rel[count] = b[i];
		count++;
	}

	for (int i = 0; i < 6; i++) {
		cout << rel[i] << endl;
	}


	return rel;

}

*/

template <class T>


class container
{
private:
	T* values;
	int capacity;
	int counter;

public:

	container(int capacity = 0) : capacity(capacity)
	{
		values = new T[capacity];
		counter = 0;

	}

	bool isFull()
	{
		if (counter == capacity)
			return true;
		else
			return false;
	}
	/*for (int i = h - 1; i < val2; i++) {


			rel[count] = b[i];
		count++;
	}

	for (int i = 0; i < 6; i++) {
		cout << rel[i] << endl;
	}
*/
	bool insert(T value)
	{
		if (isFull() == false)
		{
			values[counter] = value;
			counter++;
			return true;
		}
		else
			return false;

	}

	bool search(T value)
	{
		int i = 0;

		for (int i = 0; i < counter; i++)
		{
			if (values[i] == value)
				return true;
		}

		return false;
	}
	/*for (int i = h - 1; i < val2; i++) {


			rel[count] = b[i];
		count++;
	}

	for (int i = 0; i < 6; i++) {
		cout << rel[i] << endl;
	}
*/

	bool remove(T value)
	{
		T* temp = values;

		for (int i = 0; i < counter; i++)
		{
			if (values[i] == value)
			{
				for (int j = i; j < counter; j++)
				{
					values[i] = values[i + 1];
				}
				counter--;
			}

		}
		/*for (int i = h - 1; i < val2; i++) {


			rel[count] = b[i];
		count++;
	}

	for (int i = 0; i < 6; i++) {
		cout << rel[i] << endl;
	}
*/

		return true;
	}

	void Print()
	{
		for (int i = 0; i < counter; i++)
		{
			cout << values[i] << "\t";
		}

		cout << endl;
	}
};

