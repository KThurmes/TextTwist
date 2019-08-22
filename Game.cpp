#include "Game.hpp"
#include<string>

using std::string;

Game::Game(){
    
}

void Game::setLevel(Level currLevel){
    currentLevel = currLevel;
}

Level Game::getLevel(){
    return currentLevel;
}

void Game::play(){
    currentLevel.playLevel();
}