/*
* Program: Number guessing game - Project 7.4 (Assignment 3P: Functions)
* Author: Matt Aaron Magnaye
* Instructor: Professor David Harden
* Date: 06/25/2023
* Description: It is a number guessing game with a Human User. The user
*
*/

#include <iostream>
using namespace std;

// Global Constants
const int LOWER_LIMIT = 1;
const int UPPER_LIMIT = 150;

// Get User Response to Guess Function
void getUserResponseToGuess(int guess, char& result){
    cout << "My guess is " << guess << ". Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: ";
    cin >> result;
    }

// Midpoint between the two numbers
int getMidpoint(int lowerlimit, int higherlimit) {
    return (lowerlimit + higherlimit) / 2;
}

// PLay one game function using the range lower_limit to upper_limit
void playOneGame () {
    int lowerlimit = LOWER_LIMIT;
    int higherlimit = UPPER_LIMIT;
    char response;

    // Programs prompt to think of a number between the lower_limit and the upper_limit
    cout << "Think of a number between " << LOWER_LIMIT << " and " << UPPER_LIMIT << "." << endl;

    while (true) {

        // Getting midpoint
        int guess = getMidpoint(lowerlimit, higherlimit);

        // Get User Response to the guess
        getUserResponseToGuess(guess, response);

        // Adjusting the higher and lower limit bounds based on user response
        if (response == 'l') {
            higherlimit = guess - 1; // Set new upper bound
        } else if (response == 'h') {
            lowerlimit = guess + 1;  // Set new lower bound
        } else if (response == 'c') { // Guess was correct.
           break;
        }
    }
}

    int main() {
    char response;
    
    // Prompts the user if ready to play
    cout << "Ready to play (y/n)? ";
    cin >> response;

    while (response == 'y') {
        // Play one game
        playOneGame();
        
        // Asks the user to play again or not.
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    }
    
    return 0;
}
  