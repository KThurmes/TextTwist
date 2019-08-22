/********************************************************************* 
** Author: Kathleen A Thurmes
** Date: 8.22.19
** Description: A class that will contain a base word and the list of smaller words that can be made from the letters of the base word.
*********************************************************************/ 

#ifndef BASEWORD_HPP
#define BASEWORD_HPP

#include <string>
using std::string;

class BaseWord{

    private:
        string baseWord;
        string smallerWords[100]; //An array of all the smaller words that can be made from the letters of the baseWord.
        //int idNumber = 0; //This will later be used to keep track of which baseWords have been used in the game
        int numSmallerWords;
        
    public:
        BaseWord();
        BaseWord(string, string[], int); //A temporary constructor to use with testing
        bool isBaseWord(string guess); //this will check if guess is the baseWord or not
        bool isInList(string guess); //this will check if guess is in the smallerWords list or not.
        int getNumSmallerWords(); //This will return the number of smaller words in the smallerWords list.
        void printBaseWord();
        void printSmallerWords();
        string getWord();
};

#endif