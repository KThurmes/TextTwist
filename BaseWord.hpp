/********************************************************************* 
** Author: Kathleen A Thurmes
** Date: 
** Description: I'm getting ahead of myself by including this. 
Eventually, I will want to find all the words that can be made from 
the letters of a base word, but that's further down the line.
*********************************************************************/ 

#ifndef BASEWORD_HPP
#define BASEWORD_HPP

#include <string>

class BaseWord{

    private:
        std::string word;
        char letters[];

    public:
        BaseWord();
        
};

#endif