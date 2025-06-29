/*
* Guess the Random Number
* Author: Zachary Bram
*		Program generates a random number of 1-100 where
*		user must guess what the number is. If not the correct number,
*		user must keep guessing until value is reached.
*/


#include <iostream>
using namespace std;

int main()
{

	//Random Number
	srand(time(NULL));


	int randVal = (rand() % 100) + 1;
	int guessCount = 0;
	int userGuess;
	bool guessedNumber = false;

	//If you wish to print the random value, uncomment line below
	//cout << randVal << endl;

	while (!guessedNumber) {
		cout << "Please enter in your guess(1-100): ";
		cin >> userGuess;

		cout << endl;
		guessCount++;

		if (userGuess < 1 || userGuess > 100) {
			cout << "You entered an invalid input. Please retry." << endl;
		}
		else if(userGuess != randVal) {
			cout << "Sorry. Incorrect guess! Try again." << endl;
		}
		else {
			cout << "Congrats! You got the number in " << guessCount << " attempt(s)!" << endl;
			guessedNumber = true;
		}
	}

	return 0;
}