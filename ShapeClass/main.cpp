//Practice creating classes

#include "rectangle.h"
#include "Shape.h"
#include "Square.h"
#include <iostream>
using namespace std;

int main()
{
	//creating data values
	int length = 0, width = 0 , perimeter = 0;

	cout << "Enter a length" << endl;
	cin >> length;
	cout << endl << "Enter a width" << endl;
	cin >> width;
	cout << "Width: " << width << "  Length: " << length << endl;

	//check to see if length and width are the same
	if (length == width) {
		//Square s(length);
		//perimeter = s.getPerimeter();
		cout << endl << "Shape is square " << endl;
		cout << "Perimeter:  " << perimeter << endl << endl;
	}
	else {
	
//	Rectangle r(length, width);
//	perimeter = r.getPerimeter();
	cout << endl << "Shape is rectangle " << endl;
	cout << "Perimeter:  " << perimeter << endl << endl;
	
	}

}
