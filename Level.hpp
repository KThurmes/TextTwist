/********************************************************************* 
** Author: Kathleen A Thurmes
** Date: 8.22.19
** Description: A class that will coordinate a level. It will contain a base word, a timer in the future, and it will have methods to accept guesses and check if they are in the word list.
*********************************************************************/ 

#ifndef LEVEL_HPP
#define LEVEL_HPP

#include <string>
#include "BaseWord.hpp"

using std::string;

class Level{
    private:
        BaseWord baseWord;
        //Timer
        string guesses[]; //This will be used to keep track of what words the user has already guessed.
        int remainingWords; //This will keep track of the number of smaller words the user has left to guess
        bool levelOver;

        bool alreadyGuessed(string guess); //Check to see if a string is already in guesses array
        bool isBaseWord(string guess); //Check to see if a string matches baseWord
        bool checkGuess(string guess); //Check to see if a string is in the BaseWord's list of smallerWords
        void addToGuesses(string guess); //Add a string to the guesses array
        string getGuess(); //This will receive the user's guess and check it

    public:
        Level();
        Level(BaseWord);
        BaseWord getBaseWord();
        //void endLevel(); //Ends a level
        void playLevel();

};

#endif