/********************************************************************* 
** Author: Kathleen A Thurmes
** Date: 8.22.19
** Description: A class that will run the game. It will keep track of 
the player's score eventually and will have a data member that will contain 
the current level. Eventually it will contain a list of previous 
rounds so as not to repeat levels.
*********************************************************************/ 

#ifndef GAME_HPP
#define GAME_HPP

#include <string>
#include "Level.hpp"

using std::string;

class Game{
    private:
        //int score = 0;
        Level currentLevel;

    public:
        Game();
        void setLevel(Level);
        Level getLevel();
        void play();
};


#endif