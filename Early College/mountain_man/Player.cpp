// CS1300 Fall 2019
// Author: Cole Radetich
// Recitation: 203 – Soumyajyoti Bhattacharya 
// Project 3
// Player Class

#include <string>
#include "Player.h"


//player class getters and setters...
Player::Player()
{
    
    name = "";
    hp = 100;
    score = 0;
    
}

std::string Player::getName()
{
    
    return name;
    
}

void Player::setName(std::string _name)
{
    
    name = _name;
    
}

int Player::getHP()
{
    
    return hp;
    
}

void Player::setHP(int _hp)
{
    
    hp = _hp;
    
}
int Player::getScore()
{
    
    return score;
    
}
void Player::setScore(int _score)
{
    
    score = _score;
    
}