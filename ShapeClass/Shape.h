//Shape class
#ifndef SHAPE_H
#define SHAPE_H

class Shape
{
	private:
		int area, perimeter;

	public:
		Shape();
		int getArea();
		
};

Shape::Shape() {
	area = 0;
	perimeter = 0;
}

int Shape::getArea() {
	return area;
}


#endif