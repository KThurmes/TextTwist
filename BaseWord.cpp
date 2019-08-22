#include "BaseWord.hpp"
#include <string>
#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;
using std::string;

BaseWord::BaseWord(){

}

BaseWord::BaseWord(string word, string smallWords[], int numSmallWords){
    baseWord = word;
    numSmallerWords = numSmallWords;
    
    for(int i = 0; i < numSmallWords; i++){
        smallerWords[i] = smallWords[i];
    }
}

//this will return true if guess is the baseWord
bool BaseWord::isBaseWord(string guess){

    //Use built-in string comparator
    bool resultOfComparison = !(guess.compare(baseWord));
    return resultOfComparison;
} 

//this will return true if guess is in the smallerWords list.
bool BaseWord::isInList(string guess){
    bool resultOfComparison;

    //Use built-in comparator on all strings in smallerWords array
    for (int i = 0; i < numSmallerWords; i++){
        resultOfComparison = !(guess.compare(smallerWords[i]));
        if (resultOfComparison){
            return true;
        }
    }
    return false;
}

//This will return the number of smaller words in the smallerWords list.
int BaseWord::getNumSmallerWords(){
    return numSmallerWords;
} 

string BaseWord::getWord(){
    return baseWord;
}

void BaseWord::printBaseWord(){
    cout << "BaseWord: " << baseWord << endl;
}

void BaseWord::printSmallerWords(){
    cout << "Smaller Words: " << endl;
    for (int i = 0; i < numSmallerWords ; i++){
        cout << smallerWords[i] << endl;
    }
}

string BaseWord::jumble(){

    int baseWordLength = baseWord.length();
    char jumbled[baseWordLength+1];
    int usedPlaces[baseWordLength];
    int indexInJumbled;
    

//Need to make sure we're not repeating locations
    for (int i = 0; i < baseWordLength; i++){

        bool alreadyInUse;

        do{
            alreadyInUse = false;
            indexInJumbled = rand() % baseWordLength;
            for (int j = 0; j < i; j++){
                if (usedPlaces[j] == indexInJumbled){
                    alreadyInUse == true;
                }
            }
        }
        while (alreadyInUse == true);

        jumbled[indexInJumbled] = baseWord.c_str()[i];
        usedPlaces[i] = indexInJumbled;
        cout << "index " << i << ": " << baseWord.c_str()[i] <<endl;
        cout << "destingation index: " << indexInJumbled <<endl;
    }

    return jumbled;
}

