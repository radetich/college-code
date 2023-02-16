// CS1300 Fall 2019
// Author: Cole Radetich
// Recitation: 203 – Soumyajyoti Bhattacharya 
// Project 3
// Enemy Header

#ifndef ENEMY_H
#define ENEMY_H
#include <string>
#include <cstdlib>

class Enemy
{
    
//private dec
private:
    std::string enemyName;
    int dph;
    int health;
    
    
    
//public dec
public:
    Enemy(std::string enemyName);
    Enemy();

    std::string getName();
    void setName(std::string name);
    int getDPH();
    void setDPH(int dph);
    int getHealth();
    void setHealth(int dph);
    void genRanDPH();
    void enemyArray();
};


#endif