// CS1300 Fall 2019
// Author: Cole Radetich
// Recitation: 203 – Soumyajyoti Bhattacharya 
// Project 3
// Game Header

#ifndef GAME_H
#define GAME_H
#include <string>
#include <vector>
#include "Player.h"

class Game
{
    
//private dec
private:
    int currentLevel;
    Player p1;
    
    
    
//public dec
public:
    Game();
    
    void printMap(int currentLvl);
    int save(int currentLvl, int health, int score);
    void gameOver();
    void play(int levelNum);
    void loadSave();
    void newPlay();
    
};


#endif