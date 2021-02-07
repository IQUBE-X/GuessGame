#include<random>
#include<ctime>

void TakePlayerGuess(int maxLimit, int maxTries, int answer) {
	int choice;
	int tries = 0;
	
	while (maxTries <= 5) {

		cout << "Guess a number between 1 - " << maxLimit << ": " << endl;
		cin >> choice;

		tries++;

		if (choice > maxLimit || choice < 1) {
			cout << "Invalid Guess." << endl;
		}
		else {
			if (tries == maxTries + 1) {
				cout << "You are out of tries. The answer was : " << answer << endl;
				break;

			} else {
				if (choice == answer) {
					cout << "That's right! You got it in " << tries << " tries.";
					break;
				}
				else {
					if (choice < answer) {
						cout << "Your guess is wrong! Hint: The number is greater than your choice. Tries left: " << maxTries - tries << endl;
					}
					else {
						cout << "Your guess is wrong! Hint: The number is smaller than your choice. Tries left: " << maxTries - tries << endl;
					}
				}
			}
		}
	}
}

// Generate random values
int GenerateRandomValue(int lowestValue, int highestValue) {
	int randomValue;
	int range = (highestValue - lowestValue) + 1;
	srand(time(NULL));
	randomValue = lowestValue + rand() % range;

	return randomValue;
}

// Main Game function
void Game() {
	int level;
	cout << "Choose a level from 1 - 5: " << endl;
	cin >> level;

	if (level == 1) {
		TakePlayerGuess(10, 5, GenerateRandomValue(1, 10));
	}
	else if (level == 2) {
		TakePlayerGuess(20, 4, GenerateRandomValue(1, 20));
	}
	else if (level == 3) {
		TakePlayerGuess(30, 3, GenerateRandomValue(1, 30));
	}
	else if (level == 4) {
		TakePlayerGuess(40, 2, GenerateRandomValue(1, 40));
	}
	else if (level == 5) {
		TakePlayerGuess(50, 2, GenerateRandomValue(1, 50));
	}
	else {
		cout << "Choose a level between 1-5 ONLY." << endl;
	}
}