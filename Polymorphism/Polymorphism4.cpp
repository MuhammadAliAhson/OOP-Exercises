#include<iostream>
using namespace std;

class Shape
{
public: double a, b;
	  void get_data()
	  {
		  cin >> a >> b;
	  }
	  virtual void display_area() = 0;
};


class Triangle :public Shape
{
public: void display_area()
{
	cout << "Area of triangle " << 0.5 * a * b << endl;
}
};

class Rectangle :public Shape
{
public: void display_area()
{
	cout << "Area of rectangle " << a * b << endl;
}
};

class Circle :public Shape
{
public: void display_area()
{
	cout << "Area of Circle " << 3.14 * a * b << endl;
}
};

int main()
{
	Triangle t;
	Shape* st = &t;
	cout << "Enter base and altitude: ";
	st->get_data();
	st->display_area();


	Rectangle r;
	Shape* sr = &r;
	cout << "Enter length and breadth: ";
	sr->get_data();
	sr->display_area();


	Circle c;
	Shape* sc = &c;
	cout << "Enter radius of circle two times(Note enter same radius both times ) : ";
	sc->get_data();
	sc->display_area();
}