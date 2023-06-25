/*
* Program: Number guessing game - Project 7.4 (Assignment 3P: Functions)
* Author: Matt Aaron Magnaye
* Instructor: Professor David Harden
* Date: 06/25/2023
* Description: It is a number guessing game with a Human User.
*
*/

#include <iostream>
using namespace std;

const int LOWER_LIMIT = 1;
const int UPPER_LIMIT = 100;
char response;

void getUserResponseToGuess(int guess, char& result){
    cout << "My guess is " << guess << ". Enter 'l' if your number is lower, 'h' if it is higher, 'c' if it is correct: ";
    cin >> result;
    }

int getMidpoint(int lowerlimit, int higherlimit) {
    return (lowerlimit + higherlimit) / 2;
}

void playOneGame () {
    int lowerlimit = LOWER_LIMIT;
    int higherlimit = UPPER_LIMIT;
    char response;

    cout << "Think of a number between " << LOWER_LIMIT << " and " << UPPER_LIMIT << "." << endl;

    while (true) {
        int guess = getMidpoint(lowerlimit, higherlimit);

        getUserResponseToGuess(guess, response);

        if (response == 'l') {
            higherlimit = guess - 1;
        } else if (response == 'h') {
            lowerlimit = guess + 1;
        } else if (response == 'c') {
           break;
        }
    }

    int main() {
    char response;
    
    cout << "Ready to play (y/n)? ";
    cin >> response;
    while (response == 'y') {
        playOneGame();
        cout << "Great! Do you want to play again (y/n)? ";
        cin >> response;
    }
 }
    return 0;
}