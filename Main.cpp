/********************************************************************* 
** Author: Kathleen A Thurmes
** Date: 8.22.19
** Description: Currently, this is a driver for testing the TextTwist game.
*********************************************************************/  

#include "Game.hpp"
#include <string>
#include <fstream>
#include <iostream>
//#include "Dictionary.hpp"
//#include "BaseWord.hpp"

//using std::string;
//using std::ifstream;

void readDict();

int main(){
    string littleWords[] = {"at", "a", "tab"};
    BaseWord firstBaseWord = BaseWord("bat", littleWords, 3);
    Level level1 = Level(firstBaseWord);
    Game game1;
    game1.setLevel(level1);
    game1.play();
    //firstBaseWord.printBaseWord();
    //firstBaseWord.printSmallerWords();
    return 0;
}