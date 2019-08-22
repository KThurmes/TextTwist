#include "BaseWord.hpp"
#include<string>
#include<iostream>

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

