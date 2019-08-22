/********************************************************************* 
** Author: Kathleen A Thurmes
** Date: 
** Description: A dictionary object will contain an array of words 
that were originally read from a .txt file.
*********************************************************************/ 

#ifndef DICTIONARY_HPP
#define DICTIONARY_HPP

#include <string>

const std::string DICTIONARY_NAME = "abilityhorror.txt";
const int DICTIONARY_MAX_WORDS = 50;

class Dictionary{

    private:
        int dictLength;
        std::string words[DICTIONARY_MAX_WORDS];
        void readDict();

    public:
        Dictionary();
};

#endif