#include <iostream>

using namespace std;

void guessNumberGame() {
    int seed;
    cout << "Enter any number to start the game: ";
    cin >> seed;
    
    int numberToGuess = (seed * 7 + 3) % 100 + 1; 
    int userGuess, attempts = 0;

    cout << "\nWelcome to Guess the Number!" << endl;
    cout << "I have selected a number between 1 and 100." << endl;
    cout << "Start guessing..." << endl;

    do {
        cout << "Enter your guess: ";
        cin >> userGuess;
        attempts++;

        if (userGuess > numberToGuess) {
            cout << "Too High! Try again." << endl;
        } else if (userGuess < numberToGuess) {
            cout << "Too Low! Try again." << endl;
        } else {
            cout << "Congratulations! You guessed the correct number in " << attempts << " attempts!" << endl;
        }
    } while (userGuess != numberToGuess);
}

int main() {
    guessNumberGame();
    return 0;
}
