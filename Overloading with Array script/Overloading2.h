#pragma once
class Point {
private:

	int *arr= new int [2];
public:
	Point(int x = 0, int y = 0) {
		arr[0] = x;
		arr[1] = y;
	}

	int& operator[](int x) {
		return arr[x];
	}
};