//Calculate minutes, hours, days, months, and years from the user input of seconds.

#include <iostream>
using namespace std;

int main ( )
{
	double seconds, minutes, hours, days, months, years;
	
	cout << "Please input a number of seconds greater than or equal to zero: ";
	cin >> seconds;
	
	int const minInSec = 60;
	int const minInHour = 60;
	int const hourInDay = 24;
	int const dayInMonth = 30;
	int const monthInYear = 12;
	
	minutes = seconds / minInSec;
	hours = minutes / minInHour;
	days = hours / hourInDay;
	months = days / dayInMonth;
	years = months / monthInYear;

	cout << "seconds: " << seconds << endl;
	cout << "minutes: " << minutes << endl;
	cout << "hours: " << hours << endl;
	cout << "days: " << days << endl;
	cout << "months: " << months << endl;
	cout << "years: " << years << endl;
}

