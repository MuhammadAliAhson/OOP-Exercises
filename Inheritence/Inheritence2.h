#pragma once
#include <iostream>
using namespace std;

class Base {
protected:
	float length;
		float width;
public:
		Base() :length(0.0), width(0.0) {}
		Base(float len, float wid) {
			this->length = len;
				this->width = wid;
		}
		float Rectangle() {

			return length * width;
		}
		
};
class Rectangle: public Base  {
public:
	Rectangle() :Base(){

	}
	Rectangle(float length, float width):Base(length,width) {
	}
	float areaOfRectangle() {

		 return Base::Rectangle();
		
	}

};
class Square: protected Base {
public:
	Square() : Base() {};
	Square(float length, float width) :Base(length, width) {
	}
	float areaOfSquare() {
		return length * length;
	}
};

class Triangle:public Base {
public:
	Triangle() : Base() {};
	Triangle(float length, float width) :Base(length, width) {
	}
	float areaOfTriangle() {
		return  0.5 * (length * width);
	}

};