//Here's a new comment
#include "Level.hpp"
#include "BaseWord.hpp"
#include<string>
#include<iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

Level::Level(){
}

Level::Level(BaseWord base){
    baseWord = base;
    levelOver = false;
}

//Check to see if a string is already in guesses array
bool Level::alreadyGuessed(string guess){

    //iterate through and compare each one.
    for (int i = 0 ; i < numGuesses; i++){
        if (!(guesses[i].compare(guess))){
            return true;
        }
    }

    return false;
}

//Add a string to the guesses array
void Level::addToGuesses(string guess){
    guesses[numGuesses] = guess;
    numGuesses++;
}

//This will receive the user's guess and check it
string Level::getGuess(){
    string guess;
    cout << "Please enter your guess: " <<endl;
    cin >> guess;
    return guess;
}

BaseWord Level::getBaseWord(){
    return baseWord;
}

/********************************************************************* 
** Description: This will be the driver for playing a single level. 
It will ask the user for a guess, and will respond to the guess 
accordingly. It will continue until the level is won.
*********************************************************************/
void Level::playLevel(){
    numGuesses = 0;

    string currentGuess;

    string jumbledWord = baseWord.jumble();

    cout << "Jumbled: " << jumbledWord << endl;

    while (!levelOver){

        currentGuess = getGuess();

        if (alreadyGuessed(currentGuess)){
            cout << "Already guessed!" << endl;
        }
        else if (baseWord.isBaseWord(currentGuess)){
            addToGuesses(currentGuess);
            cout << "That's the base word!" << endl;
            levelOver = true;
        }
        else if (baseWord.isInList(currentGuess)){
            addToGuesses(currentGuess);
            cout << "It's in the list!" << endl;
        }
        else{
            addToGuesses(currentGuess);
            cout << "Guess again!" << endl;
        }

    }
}
