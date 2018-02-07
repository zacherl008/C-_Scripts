//Simulation of a game of craps.
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rollDie();
int rollEm();

int main ( )
{
	int turn = 0;
	srand(time(0));
	int diceRoll = rollEm();
	int point = diceRoll;
	cout << "You rolled " << diceRoll << ". ";
	for (int i = 0; i < 1; i++){
		if((diceRoll == 7) || (diceRoll == 11)){
			cout << "You win!" << endl;	
		}
		else if ((diceRoll == 12) || (diceRoll == 2) || (diceRoll == 3)){
			cout << "You lose!" << endl;
		}
		else{
			cout << "Rolling again. Your point is " << point << ". " << endl;
			diceRoll = rollEm();
			turn ++;
		} 
	}
	while ((diceRoll != point) && (diceRoll != 7) && (turn != 0)){
		cout << "You rolled " << diceRoll << ". Rolling again. Your point is " << point << "." << endl;
		diceRoll = rollEm();
		turn ++;
	}
	if ((diceRoll == 7) && (turn != 0)){
		
		cout << "You rolled " << diceRoll << ". You lose!" << endl;
	}
	else if ((diceRoll == point) && (turn != 0)){
		cout << "You rolled " << diceRoll << ". You win!" << endl;
	}
	
}

int rollDie()
{	
	int roll;	
	roll = (rand ( ) % 6) + 1;
	return roll;
}
	
int rollEm()
{
	int roll1, roll2, sum;
	roll1 = rollDie();
	roll2 = rollDie();
	sum = roll1 + roll2;
	return sum;
}

