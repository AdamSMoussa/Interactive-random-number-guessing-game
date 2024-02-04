#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));

    int bestScore = INT_MAX;

    char playAgain;

    do {
        int secretNumber = rand() % 100 + 1;
        int guess;
        int attempts = 0;

        cout << "Welcome to the Guessing Game!";
        cout << "Try to guess the secret number between 1 and 100.";

        do {
           
            cout << "Enter your guess: ";
            cin >> guess;

            attempts++;

            if (guess == secretNumber) {
                cout << "Congratulations! You guessed the correct number in " << attempts << " attempts.";
                cout << endl;

                
                if (attempts < bestScore) {
                    bestScore = attempts;
                    cout << "New best score: " << bestScore << " attempts!";
                    cout << endl;
                }

                break; 
            }
            else if (guess < secretNumber) {
                cout << "Too low! Try again.";
            }
            else {
                cout << "Too high! Try again.";
            }

        } while (true); 

       
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;

    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thanks for playing! Your best score was: " << bestScore << " attempts.";

    return 0;
}



