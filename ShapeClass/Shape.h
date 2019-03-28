//Shape class
#include "pch.h"
#include "rectangle.h"
#include "Shape.h"
#include "Square.h"
#include <iostream>
using namespace std;

class Shape
{
	private:
		int area, perimeter;

	public:
		Shape();
		int getArea();
		
};

Shape::Shape(){
	area = 0;
	perimeter = 0;
}

int Shape::getArea() {
	return area;
}


