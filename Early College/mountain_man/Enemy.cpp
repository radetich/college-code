// CS1300 Fall 2019
// Author: Cole Radetich
// Recitation: 203 – Soumyajyoti Bhattacharya 
// Project 3
// Enemy Class

#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Enemy.h"

//enemy class getters and setters and randomizer/array

Enemy::Enemy(std::string _enemyName)
{
    
    enemyName = _enemyName;
    health = 50;
    dph = 20;
    
}

Enemy::Enemy()
{
    
    enemyName = "";
    health = 100;
    dph = 20;
    
}

std::string Enemy::getName()
{
    
    return enemyName;
    
}

void Enemy::setName(std::string name)
{
    
    enemyName = name;
    
}

int Enemy::getDPH()
{
    
    return dph;
    
}

void Enemy::setDPH(int _dph)
{
    
    dph = _dph;
    
}

int Enemy::getHealth()
{
    
    return health;
    
}
void Enemy::setHealth(int _health)
{
    
    health = _health;
    
}

/*
        Algorithm: 
        Input parameters: none
        Output (prints to screen): nothing
        Sets DPH to random value, 1-10
*/

void Enemy::genRanDPH()
{
    //random element 1 (element 2 found in swords/knives during combat)
    srand(time(NULL));
    dph = (int)(rand() % 10) + 1;
    
}
/*
        Algorithm: 
        Input parameters: none
        Output (prints to screen): Enemy List
        Creates array of enemies, uses for loops to fill, and prints...
*/
void Enemy::enemyArray()
{
    
    //array of created objects
    Enemy list[7];
    list[0].setName("Grog");
    list[1].setName("the Ice Brothers");
    list[2].setName("Eloc the Guardian");
    list[3].setName("Oculus");
    list[4].setName("Snowlax");
    list[5].setName("Guardian Jr.");
    list[6].setName("GUARDIAN");
    
    
    //3 for loops (4th in game.cpp level 7)
    for(int i = 0; i < 7; i++) 
    {
        if(i == 0)
        {
            list[i].setHealth(25);
        }
        if(i == 6)
        {
            list[i].setHealth(200);
        }
        if(i == 1 || i == 2 || i == 3 || i == 4 || i == 5)
        {
            list[i].setHealth(100);
        }
    }
    
    for(int i = 0; i < 7; i++) 
    {
        if(i == 0 || i == 3)
        {
            list[i].setDPH(-1);
        }
        if(i == 1)
        {
            list[i].setDPH(6);
        }
        if(i == 2 || i == 5)
        {
            list[i].setDPH(16);
        }
        if(i == 4)
        {
            list[i].setDPH(14);
        }
        if(i == 6)
        {
            list[i].setDPH(20);
        }
        
    }

    std::cout << "ENEMY LIST: (Enemies with -1 DPH have a randomized DPH)" << std::endl;
    for(int i = 0; i < 7; i++) 
    {
        std::cout << list[i].getName() << ": HP-(" << list[i].getHealth() << ") DPH-(" << list[i].getDPH() << ")" << std::endl;
    }
}