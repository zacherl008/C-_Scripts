//Definition of a rectangle class containing multiple shape-related functions

#include <iostream>
using namespace std;

class rectangleType
{
private:
	double length;	
	double width;
public:
	rectangleType(double l, double w){
		length = l;
		width = w;
	}

	rectangleType(){
		length = 0;
		width = 0;
	}
	void setDimension(double l, double w){
		length = l;
		width = w;
	}

	double getLength() const{
		return length;
	}

	double getWidth() const{
		return width;
	}

	double area() const{
		double area = length * width;
		cout << "Area is " << area << endl;
		return area;
	}

	double perimeter() const{
		double perimeter = (2 * length) + (2 * width);
		cout << "Perimeter is " << perimeter << endl;
		return perimeter;
	}
	void print() const{
		cout << "Length is: " << length << endl;
		cout << "Width is: " << width << endl;
	}

};

int main( )
{
	rectangleType rect;
	rectangleType rect2 (5.0, 3.35);

	rect.setDimension(3.5, 6.6757);
	rect.print();
	rect.perimeter();
}
