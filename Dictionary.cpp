/********************************************************************* 
** Author: Kathleen A Thurmes
** Date: 
** Description: A dictionary object will contain an array of words 
that were originally read from a .txt file.
*********************************************************************/ 

#include <string>
#include <fstream>
#include <iostream>
#include "Dictionary.hpp"

using std::string;
using std::ifstream;

Dictionary::Dictionary(){

    //Load the words from the dictionary file into the array of words in the Dictionary object.
    readDict();

    //Print out all the words in the dictionary
    /* 
    for (int i = 0; i < DICTIONARY_MAX_WORDS; i++){
        std::cout << words[i] << std::endl;
    }  */
}


/********************************************************************* 
** Description: readDict is a helper function that will read in the 
words from the dictionary text file and will save them in the 
Dictionary object's data member, words, an array of strings.
*********************************************************************/
void Dictionary::readDict(){
    ifstream inputDict;
    string currentWord;
    
    inputDict.open(DICTIONARY_NAME.c_str());

    int i = 0;

    //Save each word into an index of the Dictionary's words array.
    if (inputDict) {
        //###TODO 
        //This must also include check to ensure that dictionary does not exceed DICTIONARY_MAX_WORDS.
        while (inputDict >> currentWord) {
            words[i] = currentWord;
            i++;
        }

    }

    else {
        std::cout << "Could not access file." << std::endl;
    }
    
    inputDict.close();

}


