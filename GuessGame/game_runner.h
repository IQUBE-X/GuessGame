#include "game_arrays.h"

// Global Variables
int maxTries = 5;

void TakePlayerGuess(int maxLimit, int options[50]) {
	int choice;
	int tries = 0;
	int answer = options[rand() % maxLimit];
	
	while (maxTries <= 5) {
		if (tries == 5) {
			cout << "You are out of tries. You lose." << endl;
			break;
		} else {
			cout << "Guess a number between 1 - " << maxLimit << ": " << endl;
			cin >> choice;

			tries++;

			if (choice > maxLimit || choice < 1) {
				cout << "Invalid Guess. Quitting the game...";
			}
			else {
				if (choice == answer) {
					cout << "That's right! You got it in " << tries << " tries.";
					break;
				}
				else {
					if (choice < answer) {
						cout << "Your guess is wrong! Hint: The number is greater than your choice." << endl;
					}
					else {
						cout << "Your guess is wrong! Hint: The number is smaller than your choice." << endl;
					}
				}
			}
		}
	}
}

// Main Game function
void Game() {
	int level;
	cout << "Choose a level from 1 - 5: " << endl;
	cin >> level;

	if (level == 1) {
		TakePlayerGuess(10, Lvl1Array);
	}
	else if (level == 2) {
		TakePlayerGuess(20, Lvl2Array);
	}
	else if (level == 3) {
		TakePlayerGuess(30, Lvl3Array);
	}
	else if (level == 4) {
		TakePlayerGuess(40, Lvl4Array);
	}
	else if (level == 5) {
		TakePlayerGuess(50, Lvl5Array);
	}
	else {
		cout << "Choose a level between 1-5 ONLY." << endl;
	}
}