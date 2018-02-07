#include <iostream>
using namespace std;

//Simple arithmetic with user input and three integers.

int main ( )
{
	cout << "Please enter your first integer, x." << endl;
	int x;
	cin >> x;
	
	cout << "Please enter your second integer, y." << endl;
	int y;
	cin >> y;

	cout << "Please enter your third integer, z." << endl;
	int z;
	cin >> z;

	int XPlusZ = x + z;
	int YMinusX = y - x;
	int XTimesYMinusZ = (x * y) - z;
	int XBy5 = x / 5;
	int ZMod3 = z % 3;
	int Math = (x - 3) / (z + 4) * (-5) * (x + 2);
	
	cout << "X + Z equals ";
	cout << XPlusZ << endl;
	cout << "Y - X equals ";
	cout << YMinusX << endl;
	cout << "(X * Y) - Z equals ";
	cout << XTimesYMinusZ << endl;
	cout << "X / 5 equals ";
	cout << XBy5 << endl;
	cout << "Z % 3 equals ";
	cout << ZMod3 << endl;
	cout << "(X - 3) / (Z + 4) * (-5) * (X + 2) equals ";
	cout << Math << endl;
}

