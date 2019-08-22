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

//this will check if guess is the baseWord or not
bool BaseWord::isBaseWord(string guess){
    //#TODO
    return false;
} 

//this will check if guess is in the smallerWords list or not.
bool BaseWord::isInList(string guess){
    //#TODO
    return false;
}

//This will return the number of smaller words in the smallerWords list.
int BaseWord::getNumSmallerWords(){
    //#TODO
    return false;
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