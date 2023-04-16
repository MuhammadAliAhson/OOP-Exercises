#pragma once
#include<iostream>
using namespace std;

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
