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
    return false;
}

//Check to see if a string is in the BaseWord's list of smallerWords
bool Level::checkGuess(string guess){
    return false;
}

//Add a string to the guesses array
void Level::addToGuesses(string guess){
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

    string currentGuess;

    while (!levelOver){

        currentGuess = getGuess();

        if (alreadyGuessed(currentGuess)){
            cout << "Already guessed!" << endl;
        }
        else if (baseWord.isBaseWord(currentGuess)){
            cout << "That's the base word!" << endl;
            levelOver = true;
        }
        else if (baseWord.isInList(currentGuess)){
            cout << "It's in the list!" << endl;
        }
        else{
            cout << "Guess again!" << endl;
        }

    }
}
