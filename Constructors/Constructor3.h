/*
Muhammad Ali Ahson

*/


#pragma once
#ifndef Q3_h
#define Q3_h
class Matrix3 {
private:
	float arr[3][3];
public:
	Matrix3();
	Matrix3(float);
	Matrix3 dot (Matrix3);
	float retreive(int, int);
};
#endif