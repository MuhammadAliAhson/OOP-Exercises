# include <iostream>
# include "Constructor1.h"
using namespace std;

void Point::insertPoint(int x1, int y1) {
	x = x1;
	y = y1;
}
void Point::displayPoint(int snum) {
	cout << "Point" << snum << " Cordinates of Point " << snum << " are " << "(" << x << "," << y << ")" << endl;
}

void Triangle::displayData() {
	p1.displayPoint(1);
	p2.displayPoint(2);
	p3.displayPoint(3);
}

int main() {

	Point p1;
	p1.insertPoint(0, 0);
	Point p2;
	p2.insertPoint(10, 10);
	Point p3;
	p3.insertPoint(20, 0);
	Triangle c1(p1, p2, p3);
	c1.displayData();
	Triangle c2(0, 0, 10, 50, 20, 0);
	c2.displayData();

	return 0;
}