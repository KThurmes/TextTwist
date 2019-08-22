    /* //Create an app that will take a word (or series of letters) and find all the words in the dictionary file that can be made from those letters.
    //Create a class that is just "base word." It will have a string that will contain the original 
    word, it will have an array of chars that will break up all the chars of the base word, and it 
    will have a method that will take a dictionary and will return an array of all the words that can 
    be made of the chars in the base word (that are in said dictionary)
    //Create a function that will read all the words from the dictionary into an array?
 
 
 */

#include "BaseWord.hpp"
#include <string>
#include <fstream>
#include <iostream>

using std::string;
using std::ifstream;

const string DICTIONARY_NAME = "abilityhorror.txt";
const int DICTIONARY_MAX_WORDS = 30;

void readDict();

int main(){
    readDict();
    return 0;
}


void readDict(){
    ifstream inputDict;
    string dictionary[DICTIONARY_MAX_WORDS];
    string currentWord;


    inputDict.open(DICTIONARY_NAME.c_str());

    int i = 0;

    if (inputDict) {

        while (inputDict >> currentWord) {
            dictionary[i] = currentWord;
            i++;
        }

    }

    else {
        std::cout << "Could not access file." << std::endl;
    }
    
    inputDict.close();

}