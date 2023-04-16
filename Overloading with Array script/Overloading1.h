#pragma once
class Point {
private:

	int arr[2];
public:
	Point (int x, int y) {
		arr[0] = x;
		arr[1] = y;
	}

	int operator[](int x) {
		return arr[x];
	}
};