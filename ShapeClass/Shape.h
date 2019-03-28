//Shape class

class Shape
{
	private:
		int length, width, perimeter;

	public:
		Shape(int x, int y) {
			length = x;
			width = y;
		}

		void getPerimeter();

		void draw();
		
};


