#pragma once
#include <iostream>
class Overs
{

	const int size = 2;
	int* arr = new int[size];

public:

	Overs(int overs = 0, int balls = 0) {

		arr[0] = overs;
		arr[1] = balls;

	}

	int getBalls()
	{
		if (arr[1] == 6)
		{
			arr[0]++;
			arr[1] = 0;
		}
		else if (arr[1] > 6)
		{
			arr[0] += arr[1] / 6;
			arr[1] = arr[1] % 6;
		}

		return arr[1];
	}


	int getOvers()
	{
		return arr[0];
	}

	Overs operator++()
	{
		this->arr[1]++;
		return *this;
	}

	Overs operator++(int i)
	{
		Overs tmp(arr[0], arr[1]);
		this->arr[1]++;
		return tmp;
	}

};