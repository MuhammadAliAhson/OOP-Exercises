
#pragma once

class Point {
public:
	int x;
	int y;
	Point(int x1 = 0, int y1 = 0) {
		int x = x1;
		int y = y1;
	}
	void insertPoint(int, int);
	void displayPoint(int);
};

class Triangle {
private:
	Point p1;
	Point p2;
	Point p3;
public:
	Triangle() {
		p1.insertPoint(0, 0);
		p2.insertPoint(0, 0);
		p3.insertPoint(0, 0);
	}
	Triangle(Point a, Point b, Point c) {
		p1 = a;
		p2 = b;
		p3 = c;
	}
	Triangle(int a1, int a2, int a3, int a4, int a5, int a6) {
		p1.insertPoint(a1, a2);
		p2.insertPoint(a3, a4);
		p3.insertPoint(a5, a6);
	}
	void insertData();
	void displayData();
};