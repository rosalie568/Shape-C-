
//Practice creating classes
#include "pch.h"
#include "rectangle.h"
#include "Shape.h"
#include "Square.h"
#include <iostream>
using namespace std;

int main()
{
	//creating data values
	int length, width, perimeter;

	cout << "Enter a length" << endl;
	cin >> length;
	cout << endl << "Enter a width" << endl;
	cin >> width;
	cout << "Width: " << width << "  Length: " << length << endl;

	Rectangle r(length, width);
	Square s;

	//check to see if length and width are the same
	if (length == width)
		Square s(length);

	//set values for classes
	perimeter = s.getPerimeter();

	cout << "Perimeter:  " << perimeter << endl << endl;

	return 0;
}
