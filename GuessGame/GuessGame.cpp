#include <iostream>
using namespace std;

// Include files
#include "game_runner.h"

int main()
{
    char startOrQuit;
    cout << "Welcome to the guessing game!" << endl;
    cout << "To start press 's' and to quit press 'q': " << endl;
    cin >> startOrQuit;

    if (startOrQuit == 'q') {
        cout << "Closing the game..." << endl;
        exit(0);
    }
    else if (startOrQuit == 's') {
        Game();
    }
    else {
        cout << "Choose a valid option.";
    }
}
