// CS1300 Fall 2019
// Author: Cole Radetich
// Recitation: 203 – Soumyajyoti Bhattacharya 
// Project 3
// Player Header

#ifndef PLAYER_H
#define PLAYER_H
#include <string>

class Player
{
 
//private dec
private:
    std::string name;
    int hp;
    int score;
    
//public dec
public:
    Player();

    std::string getName();
    void setName(std::string name);
    int getHP();
    void setHP(int hp);
    int getScore();
    void setScore(int score);
};


#endif