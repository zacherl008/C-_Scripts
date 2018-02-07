//Program to determine even or odd, greater than 10, and positive negative or zero.

#include <iostream>
using namespace std;

int main ( )
{
	int input;
	cout << "Please enter an integer: ";
	cin >> input;
	
	cout << "Your integer is " << input << "." << endl;

	if (input > 0){
		cout << "Your integer is greater than 0." << endl;
	}
	else if (input == 0){
		cout << "Your integer is equal to 0." << endl;
	}
	else{
		cout << "Your integer is less than 0." << endl;
	}

	if (input % 2 == 0){
		cout << "Your integer is even." << endl;
	}
	else{
		cout << "Your integer is odd." << endl;
	}

	if (input > 10){
		cout << "Your integer is greater than 10." << endl;
	}
	else{
		cout << "Your integer is not greater than 10." << endl;
	}
}

