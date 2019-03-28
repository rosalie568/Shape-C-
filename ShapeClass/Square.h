#include "pch.h"
#include "rectangle.h"
#include "Shape.h"
#include "Square.h"
#include <iostream>
using namespace std;

class Square : public Rectangle {
	private:
		int side;

	public:
		Square(int x);
		Square();
		
};

Square::Square() {
	side = 0;
}

Square::Square(int x) {
	Rectangle(x, x);
}
