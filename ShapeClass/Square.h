
#include "Shape.h"
#include "rectangle.h"

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
