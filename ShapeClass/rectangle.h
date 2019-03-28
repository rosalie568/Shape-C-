#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include "Square.h"
#include <iostream>



class Rectangle : public Shape {

	private:
		int length, width;

	public:
		Rectangle();
		Rectangle(int x, int y);
		int getArea();
		int getPerimeter();
		
};

Rectangle::Rectangle() {
	length = 0;
	width = 0;
}

Rectangle::Rectangle(int x, int y) {
	length = x;
	width = y;
}

int Rectangle::getArea() {
	return length * width;
}

int Rectangle::getPerimeter() {
	return 2*(width + length);
}

#endif