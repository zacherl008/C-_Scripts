#include <iostream>
using namespace std;

//Program to take a score from the user, determine if it is valid, and then analyze it.

int main ( )
{
	int input;

	cout << "Please input an integer between 0 and 100: ";
	cin >> input; 

	if ((input < -1) || (input > 101)){
		cout << "You have entered an invalid score. Skipping" << endl;
	}

	int i = 0;
	int high = input;
	int low = input;

	while (input != -99){
		cout << "Please input an integer between 0 and 100. Enter -99 to end: ";
		cin >> input;
		
		if ((input > -1) && (input < 101)){			
			if(input > high){
				high = input;
			}
			if(input < low){
				low = input;
			}			
			i++;
		}	
	
		else if(input == -99){
			break;
		}	

		else {
			cout << "You have entered an invalid score. Skipping." << endl;
		} 	
	
	}
	if (i == 0){
		cout << "No valid integers have been entered. A high and low cannot be provided." << endl;
	}
	else{
		cout << "Your high score is: " << high << " " << "Your low score is: " << low << endl;
	}
	
}

