// CS1300 Fall 2019
// Author: Cole Radetich
// Recitation: 203 – Soumyajyoti Bhattacharya 
// Project 3

#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <limits>
#include "Game.h"
#include "Enemy.h"
#include "Player.h"

//Initializes current player
Game::Game()
{
    Player p1();
}


//map call
void Game::printMap(int currentLvl)
{
    
    if(currentLvl == 0)
    {
    std::cout << std::endl;
    std::cout << "Current Position on Granadas Range:" << std::endl << std::endl;
    std::cout << "           ^" << std::endl;
    std::cout << "          /*\\" << std::endl;
    std::cout << "         /&&&\\" << std::endl;
    std::cout << "        /&&&&&\\   /&\\" << std::endl;
    std::cout << "       /       \\ /&&&\\" << std::endl;
    std::cout << "      /  /\\ _*_ /     \\      /\\    /\\  /\\      /\\            /\\/\\  /\\" << std::endl;
    std::cout << "     /  /  \\   /       \\    /  \\/\\/  \\/  \\  /\\/  \\/\\  /\\  /\\/ /  \\/  \\" << std::endl;
    std::cout << "    /  /    \\ / / \\     \\  /    \\ \\(*)    \\/ /<*>/  \\/  \\/  \\/    \\   \\" << std::endl;
    std::cout << "   /  /      \\ /(*)\\     \\/      \\        /    \\             \\     \\[1]\\" << std::endl;
    std::cout << "__/__/_______ /_____\\_____\\_|{*}|________/______\\________((*))\\____________((+))" << std::endl << std::endl;
    std::cout << "* = Unexplored Cavern // + = Current Position" << std::endl;
    std::cout << std::endl;
    }
    
    if(currentLvl == 1)
    {
    std::cout << std::endl;
    std::cout << "Current Position on Granadas Range:" << std::endl << std::endl;
    std::cout << "           ^" << std::endl;
    std::cout << "          /*\\" << std::endl;
    std::cout << "         /&&&\\" << std::endl;
    std::cout << "        /&&&&&\\   /&\\" << std::endl;
    std::cout << "       /       \\ /&&&\\" << std::endl;
    std::cout << "      /  /\\ _*_ /     \\      /\\    /\\  /\\      /\\            /\\/\\  /\\" << std::endl;
    std::cout << "     /  /  \\   /       \\    /  \\/\\/  \\/  \\  /\\/  \\/\\  /\\  /\\/ /  \\/  \\" << std::endl;
    std::cout << "    /  /    \\ / / \\     \\  /    \\ \\(*)    \\/ /<*>/  \\/  \\/  \\/    \\   \\" << std::endl;
    std::cout << "   /  /      \\ /(*)\\     \\/      \\        /    \\             \\     \\[+]\\" << std::endl;
    std::cout << "__/__/_______ /_____\\_____\\_|{*}|________/______\\________((2))\\____________((Start))" << std::endl << std::endl;
    std::cout << "* = Unexplored Cavern // + = Current Position" << std::endl;
    std::cout << std::endl;
    }
    
    if(currentLvl == 2)
    {
    std::cout << std::endl;
    std::cout << "Current Position on Granadas Range:" << std::endl << std::endl;
    std::cout << "           ^" << std::endl;
    std::cout << "          /*\\" << std::endl;
    std::cout << "         /&&&\\" << std::endl;
    std::cout << "        /&&&&&\\   /&\\" << std::endl;
    std::cout << "       /       \\ /&&&\\" << std::endl;
    std::cout << "      /  /\\ _*_ /     \\      /\\    /\\  /\\      /\\            /\\/\\  /\\" << std::endl;
    std::cout << "     /  /  \\   /       \\    /  \\/\\/  \\/  \\  /\\/  \\/\\  /\\  /\\/ /  \\/  \\" << std::endl;
    std::cout << "    /  /    \\ / / \\     \\  /    \\ \\(*)    \\/ /<3>/  \\/  \\/  \\/    \\   \\" << std::endl;
    std::cout << "   /  /      \\ /(*)\\     \\/      \\        /    \\             \\     \\[1]\\" << std::endl;
    std::cout << "__/__/_______ /_____\\_____\\_|{*}|________/______\\________((+))\\____________((Start))" << std::endl << std::endl;
    std::cout << "* = Unexplored Cavern // + = Current Position" << std::endl;
    std::cout << std::endl;
    }
    
    if(currentLvl == 3)
    {
    std::cout << std::endl;
    std::cout << "Current Position on Granadas Range:" << std::endl << std::endl;
    std::cout << "           ^" << std::endl;
    std::cout << "          /*\\" << std::endl;
    std::cout << "         /&&&\\" << std::endl;
    std::cout << "        /&&&&&\\   /&\\" << std::endl;
    std::cout << "       /       \\ /&&&\\" << std::endl;
    std::cout << "      /  /\\ _*_ /     \\      /\\    /\\  /\\      /\\            /\\/\\  /\\" << std::endl;
    std::cout << "     /  /  \\   /       \\    /  \\/\\/  \\/  \\  /\\/  \\/\\  /\\  /\\/ /  \\/  \\" << std::endl;
    std::cout << "    /  /    \\ / / \\     \\  /    \\ \\(*)    \\/ /<+>/  \\/  \\/  \\/    \\   \\" << std::endl;
    std::cout << "   /  /      \\ /(*)\\     \\/      \\        /    \\             \\     \\[1]\\" << std::endl;
    std::cout << "__/__/_______ /_____\\_____\\_|{*}|________/______\\________((2))\\____________((Start))" << std::endl << std::endl;
    std::cout << "* = Unexplored Cavern // + = Current Position" << std::endl;
    std::cout << std::endl;
    }    
    
    if(currentLvl == 4)
    {
    std::cout << std::endl;
    std::cout << "Current Position on Granadas Range:" << std::endl << std::endl;
    std::cout << "           ^" << std::endl;
    std::cout << "          /*\\" << std::endl;
    std::cout << "         /&&&\\" << std::endl;
    std::cout << "        /&&&&&\\   /&\\" << std::endl;
    std::cout << "       /       \\ /&&&\\" << std::endl;
    std::cout << "      /  /\\ _*_ /     \\      /\\    /\\  /\\      /\\            /\\/\\  /\\" << std::endl;
    std::cout << "     /  /  \\   /       \\    /  \\/\\/  \\/  \\  /\\/  \\/\\  /\\  /\\/ /  \\/  \\" << std::endl;
    std::cout << "    /  /    \\ / / \\     \\  /    \\ \\(+)    \\/ /<3>/  \\/  \\/  \\/    \\   \\" << std::endl;
    std::cout << "   /  /      \\ /(*)\\     \\/      \\        /    \\             \\     \\[1]\\" << std::endl;
    std::cout << "__/__/_______ /_____\\_____\\_|{*}|________/______\\________((2))\\____________((Start))" << std::endl << std::endl;
    std::cout << "* = Unexplored Cavern // + = Current Position" << std::endl;
    std::cout << std::endl;
    }    
    
    if(currentLvl == 5)
    {
    std::cout << std::endl;
    std::cout << "Current Position on Granadas Range:" << std::endl << std::endl;
    std::cout << "           ^" << std::endl;
    std::cout << "          /*\\" << std::endl;
    std::cout << "         /&&&\\" << std::endl;
    std::cout << "        /&&&&&\\   /&\\" << std::endl;
    std::cout << "       /       \\ /&&&\\" << std::endl;
    std::cout << "      /  /\\ _*_ /     \\      /\\    /\\  /\\      /\\            /\\/\\  /\\" << std::endl;
    std::cout << "     /  /  \\   /       \\    /  \\/\\/  \\/  \\  /\\/  \\/\\  /\\  /\\/ /  \\/  \\" << std::endl;
    std::cout << "    /  /    \\ / / \\     \\  /    \\ \\(4)    \\/ /<3>/  \\/  \\/  \\/    \\   \\" << std::endl;
    std::cout << "   /  /      \\ /(*)\\     \\/      \\        /    \\             \\     \\[1]\\" << std::endl;
    std::cout << "__/__/_______ /_____\\_____\\_|{+}|________/______\\________((2))\\____________((Start))" << std::endl << std::endl;
    std::cout << "* = Unexplored Cavern // + = Current Position" << std::endl;
    std::cout << std::endl;
    }    
    
    if(currentLvl == 6)
    {
    std::cout << std::endl;
    std::cout << "Current Position on Granadas Range:" << std::endl << std::endl;
    std::cout << "           ^" << std::endl;
    std::cout << "          /*\\" << std::endl;
    std::cout << "         /&&&\\" << std::endl;
    std::cout << "        /&&&&&\\   /&\\" << std::endl;
    std::cout << "       /       \\ /&&&\\" << std::endl;
    std::cout << "      /  /\\ _*_ /     \\      /\\    /\\  /\\      /\\            /\\/\\  /\\" << std::endl;
    std::cout << "     /  /  \\   /       \\    /  \\/\\/  \\/  \\  /\\/  \\/\\  /\\  /\\/ /  \\/  \\" << std::endl;
    std::cout << "    /  /    \\ / / \\     \\  /    \\ \\(4)    \\/ /<3>/  \\/  \\/  \\/    \\   \\" << std::endl;
    std::cout << "   /  /      \\ /(+)\\     \\/      \\        /    \\             \\     \\[1]\\" << std::endl;
    std::cout << "__/__/_______ /_____\\_____\\_|{5}|________/______\\________((2))\\____________((Start))" << std::endl << std::endl;
    std::cout << "* = Unexplored Cavern // + = Current Position" << std::endl;
    std::cout << std::endl;
    }
    
    if(currentLvl == 7)
    {
    std::cout << std::endl;
    std::cout << "Current Position on Granadas Range: (WARNING: APPROACHING HIGH ALTITUDES)" << std::endl << std::endl;
    std::cout << "           ^" << std::endl;
    std::cout << "          /*\\" << std::endl;
    std::cout << "         /&&&\\" << std::endl;
    std::cout << "        /&&&&&\\   /&\\" << std::endl;
    std::cout << "       /       \\ /&&&\\" << std::endl;
    std::cout << "      /  /\\ _+_ /     \\      /\\    /\\  /\\      /\\            /\\/\\  /\\" << std::endl;
    std::cout << "     /  /  \\   /       \\    /  \\/\\/  \\/  \\  /\\/  \\/\\  /\\  /\\/ /  \\/  \\" << std::endl;
    std::cout << "    /  /    \\ / / \\     \\  /    \\ \\(4)    \\/ /<3>/  \\/  \\/  \\/    \\   \\" << std::endl;
    std::cout << "   /  /      \\ /(6)\\     \\/      \\        /    \\             \\     \\[1]\\" << std::endl;
    std::cout << "__/__/_______ /_____\\_____\\_|{5}|________/______\\________((2))\\____________((Start))" << std::endl << std::endl;
    std::cout << "* = Unexplored Cavern // + = Current Position" << std::endl;
    std::cout << std::endl;
    }    
    
    if(currentLvl == 8)
    {
    std::cout << std::endl;
    std::cout << "Current Position on Granadas Range:" << std::endl << std::endl;
    std::cout << "The wind blows violently... You feel the air's thinness in your chest..." << std::endl << std::endl;
    std::cout << "           ^" << std::endl;
    std::cout << "          /+\\" << std::endl;
    std::cout << "         /&&&\\" << std::endl;
    std::cout << "        /&&&&&\\   /&\\" << std::endl;
    std::cout << "       /       \\ /&&&\\" << std::endl;
    std::cout << "      /  /\\ _7_ /     \\      /\\    /\\  /\\      /\\            /\\/\\  /\\" << std::endl;
    std::cout << "     /  /  \\   /       \\    /  \\/\\/  \\/  \\  /\\/  \\/\\  /\\  /\\/ /  \\/  \\" << std::endl;
    std::cout << "    /  /    \\ / / \\     \\  /    \\ \\(4)    \\/ /<3>/  \\/  \\/  \\/    \\   \\" << std::endl;
    std::cout << "   /  /      \\ /(6)\\     \\/      \\        /    \\             \\     \\[1]\\" << std::endl;
    std::cout << "__/__/_______ /_____\\_____\\_|{5}|________/______\\________((2))\\____________((Start))" << std::endl << std::endl;
    std::cout << "* = Unexplored Cavern // + = Current Position" << std::endl;
    std::cout << std::endl;
    }
    
}

//Saving current place (writing to file)
int Game::save(int currentLvl, int health, int score)
{
    std::cout << "Please enter a file name... (one word, all other words will be removed)" << std::endl << std::endl;
    std::string nameTemp = "";
    std::cin >> nameTemp;
    
    while(true)
    {
        
        if(std::cin.fail() || nameTemp == "")
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid file name...please try again." << std::endl << std::endl;
            std::cin >> nameTemp;
        }
            
        if(!std::cin.fail())
            break;
            
    }
    
    std::ofstream txt_out(nameTemp + ".mman");
    txt_out << currentLvl << " " << health << " " << score;
    
}

//game over sequence
void Game::gameOver()
{
    
    std::cout << "You have been slain..." << std::endl;
    std::cout << "Final Score: " << p1.getScore() << std::endl;
    exit(0);
    
}


//game engine: most code here (while loops, nested loops, strings, etc)
void Game::play(int levelNum)
{
    if(levelNum == 0)
    {
        
        printMap(0);
        std::cout << "You approach the mountains and see a cavern in the distance..." << std::endl << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Enter cavern? (Type 1 for Yes, 0 for No)" << std::endl << std::endl;
        
        int choice = 2;
        std::cin >> choice;
        
        while(true)
        {
            if(std::cin.fail() || !(choice == 0 || choice == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input... please try again." << std::endl << std::endl;
                std::cin >> choice;
            }
            if(!std::cin.fail() && choice == 0)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "You wait, patiently... (Type 1 to enter cavern)" << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && choice == 1)
                break;
        }
        
        std::cout << "You walk slowly towards the chasm in the side of the mountain..." << std::endl << std::endl << std::endl << std::endl;
        
        //FIRST BATTLE ALG
            
        Enemy e1("Grog");
        e1.setHealth(25);
        e1.genRanDPH();
        std::cout << std::endl << "On the way to the entrance to the first cavern, a Grog appears with a mace that deals " << e1.getDPH() << " damage-per-hit!" << std::endl;
        std::cout << std::endl << "Fight? (1) or Attempt to run! (0)" << std::endl << std::endl;
            
        int choiceFight = 2;
        std::cin >> choiceFight;
        
        while(true)
        {
            if(std::cin.fail() || !(choiceFight == 0 || choiceFight == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input... please try again." << std::endl << std::endl;
                std::cin >> choiceFight;
            }
            
            if(!std::cin.fail() && (choiceFight == 1 || choiceFight == 0))
                break;
        }
        
        if(choiceFight == 1)
        {
            std::cout << "BATTLE TIME! " << p1.getName() << " versus Grog!" << std::endl << std::endl;
                
            //BATTLE LOOP
            while (e1.getHealth() > 0)
            {
                std::cout << "Select Your Weapon!" << std::endl << std::endl;
                
                std::cout << "**==* Weapons *==**" << std::endl << std::endl;
                std::cout << "1. Fists (5 damage)" << std::endl;
                std::cout << "2. Knife (10 damage, quarter chance of miss)" << std::endl;
                std::cout << "3. Sword (25 damage, half chance of miss)" << std::endl;
                std::cout << std::endl;
                
                int weapon = 0;
                
                std::cin >> weapon;
                    
                while(true)
                {
                    if(std::cin.fail() || !(weapon == 1 || weapon == 2 || weapon == 3))
                    {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "Invalid input... please try again." << std::endl << std::endl;
                        std::cin >> weapon;
                    }
            
                        if(!std::cin.fail() && (weapon == 1 || weapon == 2 || weapon == 3))
                            break;
                }
        
                if(weapon == 1)
                {
                    std::cout << "POW!" << std::endl << std::endl;
                    e1.setHealth(e1.getHealth() - 5);
                    std::cout << "Your punch was effective, dealing 5 damage." << std::endl;
                    if(e1.getHealth() > 0)
                    {
                        std::cout << "Grog has " << e1.getHealth() << " HP left." << std::endl << std::endl;
                        std::cout << "Grog attacks with his mace, dealing "<< e1.getDPH() << " damage." << std::endl << std::endl;
                            
                        p1.setHP(p1.getHP() - e1.getDPH());
                            
                        if(p1.getHP() < 1)
                        {
                            gameOver();
                        }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else
                        {
                            std::cout << "Grog has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 2)
                    {
                        bool hitKnife = ((rand() % 100) < 75);
                        
                        if(hitKnife)
                        {
                            std::cout << "CHING!" << std::endl << std::endl;
                            e1.setHealth(e1.getHealth() - 10);
                            std::cout << "Your stab was effective, dealing 10 damage. (+25 Score)" << std::endl;
                            p1.setScore(p1.getScore() + 25);
                        }
                        
                        if(!hitKnife) 
                            std::cout << "WOOSH! Miss." << std::endl << std::endl;
                        
                        if(e1.getHealth() > 0)
                        {
                            std::cout << "Grog has " << e1.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Grog attacks with his mace, dealing "<< e1.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e1.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Grog has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 3)
                    {
                        bool hitSword = ((rand() % 100) < 50);
                        
                        if(hitSword)
                        {
                            std::cout << "SLASH!" << std::endl << std::endl;
                            e1.setHealth(e1.getHealth() - 25);
                            std::cout << "Your sword was effective, dealing 25 damage. (+50 Score)" << std::endl;
                            p1.setScore(p1.getScore() + 50);
                        }
                        if(!hitSword) 
                            std::cout << "WOOSH! Miss." << std::endl << std::endl;
                            
                            
                        if(e1.getHealth() > 0)
                        {
                            std::cout << "Grog has " << e1.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Grog attacks with his mace, dealing "<< e1.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e1.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else
                        {
                            std::cout << "Grog has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                            
                }
            }
            
            if(choiceFight == 0)
            {
            
                std::cout << "You attempt to escape, but are hit three times by the Grog's sword, dealing " << (e1.getDPH()) * 3 << " HP damage. (-500 Score)"<< std::endl;
                p1.setHP(p1.getHP()-(e1.getDPH() * 3));
                if(p1.getHP() < 1)
                {
                    gameOver();
                }
                p1.setScore(p1.getScore() - 500);
                std::cout << "Current Score: " << p1.getScore() << std::endl;
                std::cout << "Current Health: " << p1.getHP() << std::endl << std::endl;
                
            }
            
            
            std::cout << "You enter the cave and find some potions of restoration, along with a map to the next cave... (+2,500 Score)" << std::endl;
            p1.setScore(p1.getScore() + 2500);
            p1.setHP(p1.getHP() + 50);
            std::cout << "Current Score: " << p1.getScore() << std::endl;
            std::cout << "Current Health: " << p1.getHP() << std::endl << std::endl;
        
        
            std::cout << "Save? (Type 1 to save, 0 to continue)" << std::endl;
        
            int choiceSave = 2;
        
            std::cin >> choiceSave;
            while(true)
            {
                if(std::cin.fail() || !(choiceSave == 0 || choiceSave == 1))
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input...please try again." << std::endl << std::endl;
                    std::cin >> choiceSave;
                }
            
                if(!std::cin.fail() && (choiceSave == 1 || choiceSave == 0))
                    break;
            }
        
            if(choiceSave == 1)
            {
                
                save(1, p1.getHP(), p1.getScore());
                play(1);
                
            }
            if(choiceSave == 0)
            {
                
                play(1);
                
            }
        
    }
    
    
    
    
    
    //level 1
    if(levelNum == 1)
    {
        
        printMap(1);
        std::cout << "You follow your map up a pathway, slowly approaching another cave to spelunk..." << std::endl;
        
        
        Enemy e2("The Ice Brothers");
        e2.setHealth(100);
        e2.setDPH(6);
        std::cout << std::endl << "While following the map's pathway, you encounter the Ice Brothers!" << std::endl;
        std::cout << std::endl << "The map leads you through a small pathway in-between the mountains... the Ice Brothers hold this territory." << std::endl;
        std::cout << std::endl << "The Ice Brothers use a special magic ice book which deals 6 damage-per-hit" << std::endl;
        std::cout << std::endl << "You must attempt to fight them to get past..." << std::endl << std::endl;
        
        std::cout << "BATTLE TIME! " << p1.getName() << " versus the Ice Brothers!" << std::endl << std::endl;
                
        //BATTLE LOOP
        while (e2.getHealth() > 0)
        {
            std::cout << "Select Your Weapon!" << std::endl << std::endl;
                
            std::cout << "**==* Weapons *==**" << std::endl << std::endl;
            std::cout << "1. Fists (5 damage)" << std::endl;
            std::cout << "2. Knife (10 damage, quarter chance of miss)" << std::endl;
            std::cout << "3. Sword (25 damage, half chance of miss)" << std::endl;
            std::cout << std::endl;
                
            int weapon = 0;
                
            std::cin >> weapon;
                    
            while(true)
            {
                if(std::cin.fail() || !(weapon == 1 || weapon == 2 || weapon == 3))
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input...please try again." << std::endl << std::endl;
                    std::cin >> weapon;
                }
            
                if(!std::cin.fail() && (weapon == 1 || weapon == 2 || weapon == 3))
                    break;
            }
        
            if(weapon == 1)
            {
                std::cout << "POW!" << std::endl << std::endl;
                e2.setHealth(e2.getHealth() - 5);
                std::cout << "Your punch was effective, dealing 5 damage." << std::endl;
                if(e2.getHealth() > 0)
                {
                    std::cout << "The Ice Brothers have " << e2.getHealth() << " HP left." << std::endl << std::endl;
                    std::cout << "*You feel a strong wind*" << std::endl << std::endl;
                    std::cout << "The Ice Brothers use their magic book, dealing 6 damage." << std::endl << std::endl;
                    
                    p1.setHP(p1.getHP() - e2.getDPH());
                            
                    if(p1.getHP() < 1)
                    {
                        gameOver();
                    }
                            
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                }
                else
                {
                    std::cout << "The Ice Brothers have been slain..." << std::endl << std::endl;
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                    std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl;
                }
            }
                    
            if(weapon == 2)
            {
                bool hitKnife = ((rand() % 100) < 75);
                        
                if(hitKnife)
                {
                    std::cout << "CHING!" << std::endl << std::endl;
                    e2.setHealth(e2.getHealth() - 10);
                    std::cout << "Your stab was effective, dealing 10 damage. (+25 Score)" << std::endl;
                    p1.setScore(p1.getScore() + 25);
                }
                if(!hitKnife) 
                    std::cout << "WOOSH! Miss." << std::endl << std::endl;
                        
                if(e2.getHealth() > 0)
                {
                    std::cout << "The Ice Brothers have " << e2.getHealth() << " HP left." << std::endl << std::endl;
                    std::cout << "*You feel a strong wind*" << std::endl << std::endl;
                    std::cout << "The Ice Brothers use their magic book, dealing 6 damage." << std::endl << std::endl;
                    
                    p1.setHP(p1.getHP() - e2.getDPH());
                            
                    if(p1.getHP() < 1)
                    {
                        gameOver();
                    }
                            
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                }
                else
                {
                    std::cout << "The Ice Brothers have been slain..." << std::endl << std::endl;
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                    std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl;
                }
            }
            if(weapon == 3)
            {
                bool hitSword = ((rand() % 100) < 50);
                        
                if(hitSword)
                {
                    std::cout << "SLASH!" << std::endl << std::endl;
                    e2.setHealth(e2.getHealth() - 25);
                    std::cout << "Your sword was effective, dealing 25 damage. (+50 Score)" << std::endl;
                    p1.setScore(p1.getScore() + 50);
                }
                if(!hitSword) 
                    std::cout << "WOOSH! Miss." << std::endl << std::endl;
                            
                            
                if(e2.getHealth() > 0)
                {
                    std::cout << "The Ice Brothers have " << e2.getHealth() << " HP left." << std::endl << std::endl;
                    std::cout << "*You feel a strong wind*" << std::endl << std::endl;
                    std::cout << "The Ice Brothers use their magic book, dealing 6 damage." << std::endl << std::endl;
                    
                    p1.setHP(p1.getHP() - e2.getDPH());
                            
                    if(p1.getHP() < 1)
                    {
                        gameOver();
                    }
                            
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                }
                else
                {
                    std::cout << "The Ice Brothers have been slain..." << std::endl << std::endl;
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                    std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl;
                }
            }
                            
        }
        
        std::cout << "After defeating the Ice Brothers, you notice they left their spell book..." << std::endl;
        std::cout << "Once you've studied it enough, you can use it against other enemies in battle!" << std::endl << std::endl;
        
        std::cout << "You find the cavern outlined in the map..." << std::endl;
        std::cout << "Enter cavern? (Type 1 for Yes, 0 for No)" << std::endl << std::endl;
       
        int choice = 2;
        
        std::cin >> choice;
        while(true)
        {
            if(std::cin.fail() || !(choice == 0 || choice == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input...please try again." << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && choice == 0)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "You wait, patiently... (Type 1 to enter cavern)" << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && choice == 1)
                break;
        }
        
        if(choice == 1)
        {
            std::cout << "You walk slowly towards the chasm in the side of the mountain..." << std::endl << std::endl << std::endl << std::endl;
            Enemy e3("Grog");
            e3.setHealth(25);
            e3.genRanDPH();
            std::cout << std::endl << "Uh Oh! At the enterence to the cave, you run into Grog with a new mace dealing " << e3.getDPH() << " damage-per-hit!" << std::endl;
            std::cout << std::endl << "Fight? (1) or Attempt to run! (0)" << std::endl << std::endl;
            
            int choiceFight = 2;
        
            std::cin >> choiceFight;
            while(true)
            {
                if(std::cin.fail() || !(choiceFight == 0 || choiceFight == 1))
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input...please try again." << std::endl << std::endl;
                    std::cin >> choiceFight;
                }
            
                if(!std::cin.fail() && (choiceFight == 1 || choiceFight == 0))
                    break;
            }
        
            if(choiceFight == 1)
            {
                std::cout << "BATTLE TIME! " << p1.getName() << " versus Grog!" << std::endl << std::endl;
                
                while (e3.getHealth() > 0)
                {
                    std::cout << "Select Your Weapon!" << std::endl << std::endl;
                
                    std::cout << "**==* Weapons *==**" << std::endl << std::endl;
                    std::cout << "1. Fists (5 damage)" << std::endl;
                    std::cout << "2. Knife (10 damage, quarter chance of miss)" << std::endl;
                    std::cout << "3. Sword (25 damage, half chance of miss)" << std::endl;
                    std::cout << std::endl;
                
                    int weapon = 0;
                
                    std::cin >> weapon;
                    
                    while(true)
                    {
                        if(std::cin.fail() || !(weapon == 1 || weapon == 2 || weapon == 3))
                        {
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            std::cout << "Invalid input...please try again." << std::endl << std::endl;
                            std::cin >> weapon;
                        }
            
                        if(!std::cin.fail() && (weapon == 1 || weapon == 2 || weapon == 3))
                            break;
                    }
        
                    if(weapon == 1)
                    {
                        std::cout << "POW!" << std::endl << std::endl;
                        e3.setHealth(e3.getHealth() - 5);
                        std::cout << "Your punch was effective, dealing 5 damage." << std::endl;
                        if(e3.getHealth() > 0)
                        {
                            std::cout << "Grog has " << e3.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Grog attacks with his mace, dealing "<< e3.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e3.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Grog has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 2)
                    {
                        bool hitKnife = ((rand() % 100) < 75);
                        
                        if(hitKnife)
                        {
                            std::cout << "CHING!" << std::endl << std::endl;
                            e3.setHealth(e3.getHealth() - 10);
                            std::cout << "Your stab was effective, dealing 10 damage. (+25 Score)" << std::endl;
                            p1.setScore(p1.getScore() + 25);
                        }
                        if(!hitKnife) 
                            std::cout << "WOOSH! Miss." << std::endl << std::endl;
                        
                        if(e3.getHealth() > 0)
                        {
                            std::cout << "Grog has " << e3.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Grog attacks with his mace, dealing "<< e3.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e3.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Grog has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 3)
                    {
                        bool hitSword = ((rand() % 100) < 50);
                        
                        if(hitSword)
                        {
                            std::cout << "SLASH!" << std::endl << std::endl;
                            e3.setHealth(e3.getHealth() - 25);
                            std::cout << "Your sword was effective, dealing 25 damage. (+50 Score)" << std::endl;
                            p1.setScore(p1.getScore() + 50);
                        }
                        if(!hitSword) 
                            std::cout << "WOOSH! Miss." << std::endl << std::endl;
                            
                            
                        if(e3.getHealth() > 0)
                        {
                            std::cout << "Grog has " << e3.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Grog attacks with his mace, dealing "<< e3.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e3.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Grog has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                            
                }
            }
            
            if(choiceFight == 0)
            {
            
                std::cout << "You attempt to escape, but are hit three times by the Grog's sword, dealing " << (e3.getDPH()) * 3 << " HP damage. (-500 Score)"<< std::endl;
                p1.setHP(p1.getHP()-(e3.getDPH() * 3));
                if(p1.getHP() < 1)
                {
                    gameOver();
                }
                p1.setScore(p1.getScore() - 500);
                std::cout << "Current Score: " << p1.getScore() << std::endl;
                std::cout << "Current Health: " << p1.getHP() << std::endl << std::endl;
                
            }
            
            
            std::cout << "After passing Grog, you see some scattered scrolls on the ground..." << std::endl;
            std::cout << "You read them as you enter the cave... Instructions for Ice Wizards..." << std::endl;
            std::cout << "You can now use the Ice Book in battle!" << std::endl << std::endl << std::endl;
            std::cout << "In the cave, you find a book which details the rest of the known caverns in Granadas Range, along with" << std::endl;
            std::cout << "several restoration potions... (+4,000 Score)" << std::endl << std::endl;
            
            p1.setScore(p1.getScore() + 4000);
            p1.setHP(p1.getHP() + 80);
            std::cout << "Current Score: " << p1.getScore() << std::endl;
            std::cout << "Current Health: " << p1.getHP() << std::endl << std::endl;
            
        
            std::cout << "Save? (Type 1 to save, 0 to continue)" << std::endl;
        
            int choiceSave = 2;
        
            std::cin >> choiceSave;
            while(true)
            {
                
                if(std::cin.fail() || !(choiceSave == 0 || choiceSave == 1))
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input...please try again." << std::endl << std::endl;
                    std::cin >> choiceSave;
                }
            
                if(!std::cin.fail() && (choiceSave == 1 || choiceSave == 0))
                    break;
            }
        
            if(choiceSave == 1)
            {
                save(2, p1.getHP(), p1.getScore());
                play(2);
            }
            if(choiceSave == 0)
            {
                play(2);
            }
        

        }
    
    }
    
    
    
    if(levelNum == 2)
    {
        
        printMap(2);
        std::cout << "Onto the next cavern..." << std::endl;
        std::cout << "While walking, you test your ice book on a tree, freezing it..." << std::endl;
        std::cout << "You feel the ground rumble..." << std::endl;
        std::cout << std::endl << "You see the cavern above, but must scale the mountain to get to it..." << std::endl;
        std::cout << "Your book details a guardian of this cave, who may have the tools you need!" << std::endl << std::endl;
        std::cout << "You look around and see a man in the distance..." << std::endl;
        std::cout << "Approach (1) or Attempt to climb (0)" << std::endl << std::endl;
        
       
        int choice = 2;
        
        std::cin >> choice;
        while(true)
        {
            if(std::cin.fail() || !(choice == 0 || choice == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input...please try again." << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && choice == 0)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "You grasp the mountain but your fingers slip at its icy sides... (Try again (0) Approach (1))" << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && choice == 1)
                break;
        }
        
        if(choice == 1)
        {
            std::cout << "You slowly walk... the monster-like figure is holding a sword..." << std::endl << std::endl << std::endl << std::endl;
            std::cout << "***BOSS ALERT: ELOC THE GUARDIAN***" << std::endl << std::endl;
            Enemy e4("Eloc");
            e4.setHealth(100);
            e4.setDPH(16);
            std::cout << std::endl << "Eloc the Guardian is a seven-foot, 150 HP metahuman who guards the treasures of the mountains... " << std::endl;
            std::cout << std::endl << "Ask for Tools (1) or Attempt to silently kill (0)" << std::endl << std::endl;
            
            int choiceFight = 2;
        
            std::cin >> choiceFight;
            while(true)
            {
                if(std::cin.fail() || !(choiceFight == 0 || choiceFight == 1))
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input...please try again." << std::endl << std::endl;
                    std::cin >> choiceFight;
                }
            
                if(!std::cin.fail() && (choiceFight == 1 || choiceFight == 0))
                    break;
            }
        
            if(choiceFight == 1)
            {
                
                std::cout << std::endl  << std::endl  << "HAHAHA! You want my tools so you can scale the mountain and take its treasures?" << std::endl << std::endl;
                std::cout << std::endl  << std::endl  << "The only way you're getting my tools is through a fight..." << std::endl << std::endl;
                std::cout << "BATTLE TIME! " << p1.getName() << " versus Eloc!" << std::endl << std::endl;
                
                while (e4.getHealth() > 0)
                {
                    std::cout << "Select Your Weapon!" << std::endl << std::endl;
                
                    std::cout << "**==* Weapons *==**" << std::endl << std::endl;
                    std::cout << "1. Fists (5 damage)" << std::endl;
                    std::cout << "2. Knife (10 damage, quarter chance of miss)" << std::endl;
                    std::cout << "3. Sword (25 damage, half chance of miss)" << std::endl;
                    std::cout << "4. Ice Spell (8 damage, enemy does half damage next turn)" << std::endl;
                    std::cout << std::endl;
                
                    int weapon = 0;
                
                    std::cin >> weapon;
                    
                    while(true)
                    {
                        if(std::cin.fail() || !(weapon == 1 || weapon == 2 || weapon == 3 || weapon == 4))
                        {
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            std::cout << "Invalid input...please try again." << std::endl << std::endl;
                            std::cin >> weapon;
                        }
            
                        if(!std::cin.fail() && (weapon == 1 || weapon == 2 || weapon == 3 || weapon == 4))
                            break;
                    }
        
                    if(weapon == 1)
                    {
                        std::cout << "POW!" << std::endl << std::endl;
                        e4.setHealth(e4.getHealth() - 5);
                        std::cout << "Your punch was effective, dealing 5 damage." << std::endl;
                        if(e4.getHealth() > 0)
                        {
                            std::cout << "Eloc has " << e4.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Eloc swings his sword, dealing "<< e4.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e4.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Eloc has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 2)
                    {
                        bool hitKnife = ((rand() % 100) < 75);
                        
                        if(hitKnife)
                        {
                            std::cout << "CHING!" << std::endl << std::endl;
                            e4.setHealth(e4.getHealth() - 10);
                            std::cout << "Your stab was effective, dealing 10 damage. (+25 Score)" << std::endl;
                            p1.setScore(p1.getScore() + 25);
                        }
                        if(!hitKnife) 
                            std::cout << "WOOSH! Miss." << std::endl << std::endl;
                        
                        if(e4.getHealth() > 0)
                        {
                            std::cout << "Eloc has " << e4.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Eloc stabs, dealing "<< e4.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e4.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Eloc has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 3)
                    {
                        bool hitSword = ((rand() % 100) < 50);
                        
                        if(hitSword)
                        {
                            std::cout << "SLASH!" << std::endl << std::endl;
                            e4.setHealth(e4.getHealth() - 25);
                            std::cout << "Your sword was effective, dealing 25 damage. (+50 Score)" << std::endl;
                            p1.setScore(p1.getScore() + 50);
                        }
                        if(!hitSword) 
                            std::cout << "WOOSH! Miss." << std::endl << std::endl;
                            
                            
                        if(e4.getHealth() > 0)
                        {
                            std::cout << "Eloc has " << e4.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Eloc attacks with his sword, dealing "<< e4.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e4.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Eloc has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 4)
                    {
                        std::cout << "**The earth rumbles**" << std::endl << std::endl;
                        e4.setHealth(e4.getHealth() - 8);
                        std::cout << "Eloc has been frozen and dealt 8 damage." << std::endl;
                        if(e4.getHealth() > 0)
                        {
                            std::cout << "Eloc has " << e4.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Eloc slowly swings his sword, dealing "<< (e4.getDPH())/2 << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - (e4.getDPH())/2);
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Eloc has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                            
                }
            }
            
            if(choiceFight == 0)
            {
            
                std::cout << "You approach Eloc from behind with your knife..."<< std::endl;
                std::cout << "You stab, but it's not as effective as you had intended..."<< std::endl;
                std::cout << "Eloc swings his sword with a burning fury... (-5,000 HP) (-500 Score)"<< std::endl;
                p1.setHP(p1.getHP() - 5000);
                p1.setScore(p1.getScore() - 500);
                gameOver();
                
            }
            
            
            std::cout << "You take Eloc's tools and begin your adventure up the mountain..." << std::endl;
            std::cout << "In this cave, you find some restoration potions and a Fire Spell!" << std::endl;
            std::cout << "This fire spell deals 50 damage, but also gives the enemy a flaming retort." << std::endl;
            std::cout << "You continue on... (+6,000 Score)" << std::endl << std::endl;
            
            p1.setScore(p1.getScore() + 6000);
            p1.setHP(p1.getHP() + 100);
            
            std::cout << "Current Score: " << p1.getScore() << std::endl;
            std::cout << "Current Health: " << p1.getHP() << std::endl << std::endl;
            
        
            std::cout << "Save? (Type 1 to save, 0 to continue)" << std::endl;
        
            int choiceSave = 2;
        
            std::cin >> choiceSave;
            while(true)
            {
                if(std::cin.fail() || !(choiceSave == 0 || choiceSave == 1))
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input...please try again." << std::endl << std::endl;
                    std::cin >> choiceSave;
                }
            
                if(!std::cin.fail() && (choiceSave == 1 || choiceSave == 0))
                    break;
            }
        
            if(choiceSave == 1)
            {
                save(3, p1.getHP(), p1.getScore());
                play(3);
            }
            if(choiceSave == 0)
            {
                play(3);
            }
        

        }
    
    }
    
    
    
    
    
    //level 3
    if(levelNum == 3)
    {
        
        printMap(3);
        std::cout << "You continue scaling the side of the mountain to another cavern you see in the distance..." << std::endl;
        std::cout << "Using your fire spell to clear the snow, you discover a golden chalice with a picture of a peak of the tallest mountain." << std::endl;
        std::cout << "You think there may be treasure hidden there, so you decide to head toward the oracle after checking the last cave..." << std::endl << std::endl;
        std::cout << "Check the last cave (1) or Search for the Oracle's house (0)" << std::endl << std::endl;
        
       
        int choice = 2;
        
        std::cin >> choice;
        while(true)
        {
            if(std::cin.fail() || !(choice == 0 || choice == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input...please try again." << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && choice == 0)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "You can't see anything through the snow... maybe from the next cave you'll have a better view (Continue looking (0) Check the cave (1))" << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && choice == 1)
                break;
        }
        
        
        if(choice == 1)
        {
            std::cout << "You continue on but your fire spell is beginning to dwindle as the night falls..." << std::endl;
            std::cout << "You begin to appproach the cave.. You see a two-headed figure in the distance..." << std::endl;
            std::cout << "You read a sign: This cave guarded by Oculus" << std::endl;
            Enemy e5("Oculus");
            e5.setHealth(100);
            e5.genRanDPH();
            e5.setDPH(e5.getDPH() + 10);
            std::cout << std::endl << "You begin to approach Oculus, but neither of his two eyes notice you... " << std::endl;
            std::cout << std::endl << "Battle Oculus (1) or Attempt to sneak by (0)" << std::endl << std::endl;
            
            int choiceFight = 2;
        
            std::cin >> choiceFight;
            while(true)
            {
                if(std::cin.fail() || !(choiceFight == 0 || choiceFight == 1))
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input...please try again." << std::endl << std::endl;
                    std::cin >> choiceFight;
                }
            
                if(!std::cin.fail() && (choiceFight == 1 || choiceFight == 0))
                    break;
            }
        
            if(choiceFight == 1)
            {
                std::cout << "BATTLE TIME! " << p1.getName() << " versus Oculus!" << std::endl << std::endl;
                
                while (e5.getHealth() > 0)
                {
                    std::cout << "Select Your Weapon!" << std::endl << std::endl;
                
                    std::cout << "**==* Weapons *==**" << std::endl << std::endl;
                    std::cout << "1. Fists (5 damage)" << std::endl;
                    std::cout << "2. Knife (10 damage, quarter chance of miss)" << std::endl;
                    std::cout << "3. Sword (25 damage, half chance of miss)" << std::endl;
                    std::cout << "4. Ice Spell (8 damage, enemy does half damage next turn)" << std::endl;
                    std::cout << "5. Fire Spell (50 damage, enemy does double damage next turn)" << std::endl;
                    std::cout << std::endl;
                
                    int weapon = 0;
                
                    std::cin >> weapon;
                    
                    while(true)
                    {
                        if(std::cin.fail() || !(weapon == 1 || weapon == 2 || weapon == 3 || weapon == 4 || weapon == 5))
                        {
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            std::cout << "Invalid input...please try again." << std::endl << std::endl;
                            std::cin >> weapon;
                        }
            
                        if(!std::cin.fail() && (weapon == 1 || weapon == 2 || weapon == 3 || weapon == 4 || weapon == 5))
                            break;
                    }
        
                    if(weapon == 1)
                    {
                        std::cout << "POW!" << std::endl << std::endl;
                        e5.setHealth(e5.getHealth() - 5);
                        std::cout << "Your punch was effective, dealing 5 damage." << std::endl;
                        
                        if(e5.getHealth() > 0)
                        {
                            std::cout << "Oculus has " << e5.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Oculus uses eye beam, dealing "<< e5.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e5.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Oculus has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 2)
                    {
                        bool hitKnife = ((rand() % 100) < 75);
                        
                        if(hitKnife)
                        {
                            std::cout << "CHING!" << std::endl << std::endl;
                            e5.setHealth(e5.getHealth() - 10);
                            std::cout << "Your stab was effective, dealing 10 damage. (+25 Score)" << std::endl;
                            p1.setScore(p1.getScore() + 25);
                        }
                        if(!hitKnife) 
                            std::cout << "WOOSH! Miss." << std::endl << std::endl;
                        
                        if(e5.getHealth() > 0)
                        {
                            std::cout << "Oculus has " << e5.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Oculus uses eye beam, dealing "<< e5.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e5.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Oculus has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 3)
                    {
                        bool hitSword = ((rand() % 100) < 50);
                        
                        if(hitSword)
                        {
                            std::cout << "SLASH!" << std::endl << std::endl;
                            e5.setHealth(e5.getHealth() - 25);
                            std::cout << "Your sword was effective, dealing 25 damage. (+50 Score)" << std::endl;
                            p1.setScore(p1.getScore() + 50);
                        }
                        if(!hitSword) 
                            std::cout << "WOOSH! Miss." << std::endl << std::endl;
                            
                            
                        if(e5.getHealth() > 0)
                        {
                            std::cout << "Oculus has " << e5.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Oculus uses eye beam, dealing "<< e5.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e5.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Oculus has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 4)
                    {
                        std::cout << "**The earth rumbles**" << std::endl << std::endl;
                        e5.setHealth(e5.getHealth() - 8);
                        std::cout << "Oculus has been frozen and dealt 8 damage." << std::endl;
                        if(e5.getHealth() > 0)
                        {
                            std::cout << "Oculus has " << e5.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Oculus slowly punches, dealing "<< (e5.getDPH())/2 << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - (e5.getDPH())/2);
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Oculus has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 5)
                    {
                        std::cout << "**The earth rumbles**" << std::endl << std::endl;
                        e5.setHealth(e5.getHealth() - 50);
                        std::cout << "Oculus has been burned and dealt 50 damage." << std::endl;
                        if(e5.getHealth() > 0)
                        {
                            std::cout << "Oculus has " << e5.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Oculus breathes fire, dealing "<< (e5.getDPH())*2 << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - (e5.getDPH())*2);
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Oculus has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                            
                }
            }
            
            if(choiceFight == 0)
            {
            
                std::cout << "You attempt to sneak by, but Oculus sees you right as you enter the cave..."<< std::endl;
                std::cout << "He shoots a mega-beam, hitting you only partly... (-45 HP) (-200 Score)"<< std::endl;
                p1.setHP(p1.getHP() - 45);
                p1.setScore(p1.getScore() - 200);
                if(p1.getHP() < 1)
                {
                    gameOver();
                }
                
            }
            
            
            
            
            std::cout << "Now at the vantage point of the cave, you spot the hut at the bottom of the range.." << std::endl;
            std::cout << "In your map-book, this section of the range is blank, with only one word:" << std::endl;
            std::cout << "Knowledge..." << std::endl;
            std::cout << "You begin to scale down the mountain towards the hut..." << std::endl;
            std::cout << "They say it's bigger on the inside... (+5,000 Score)" << std::endl << std::endl << std::endl << std::endl;
            
            
            
            
            p1.setScore(p1.getScore() + 5000);
            p1.setHP(p1.getHP() + 100);
            
            std::cout << "Current Score: " << p1.getScore() << std::endl;
            std::cout << "Current Health: " << p1.getHP() << std::endl << std::endl;
            
        
            std::cout << "Save? (Type 1 to save, 0 to continue)" << std::endl;
        
            int choiceSave = 2;
        
            std::cin >> choiceSave;
            
            while(true)
            {
                if(std::cin.fail() || !(choiceSave == 0 || choiceSave == 1))
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input...please try again." << std::endl << std::endl;
                    std::cin >> choiceSave;
                }
            
                if(!std::cin.fail() && (choiceSave == 1 || choiceSave == 0))
                    break;
            }
        
            if(choiceSave == 1)
            {
                save(4, p1.getHP(), p1.getScore());
                play(4);
            }
            if(choiceSave == 0)
            {
                play(4);
            }
        

        }
    
    }
    
    
    
    
    
    
    if(levelNum == 4)
    {
        
        printMap(4);
        std::cout << "As you walk towards the hut, you see a faint glow on its top..." << std::endl;
        std::cout << "You've never met the Oracle--only heard of the folklore surrounding him." << std::endl;
        std::cout << "Hopefully he can help you figure out the meaning of the chalice..." << std::endl << std::endl;
        std::cout << "Enter the house of the Oracle (1) or Wait (0)" << std::endl << std::endl;
        
       
        int choice = 2;
        
        std::cin >> choice;
        while(true)
        {
            if(std::cin.fail() || !(choice == 0 || choice == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input...please try again." << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && choice == 0)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "You wait patiently outside (Continue waiting (0) Enter (1))" << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && choice == 1)
                break;
        }
        
        
        std::cout <<    "      _...._   " << std::endl;
        std::cout <<    "    .`      `. " << std::endl;
        std::cout <<    "   / @@@@     \\    Welcome to the home    " << std::endl;
        std::cout <<    "  : @@@        :   of the Oracle!  " << std::endl;
        std::cout <<    "  :            :   " << std::endl;
        std::cout <<    "   \\          /   " << std::endl;
        std::cout <<    "    `-......-' " << std::endl;
        std::cout <<    "      (    )   " << std::endl;
        std::cout <<    "    )        ( " << std::endl;
        std::cout <<    "   (          )    " << std::endl;
        std::cout <<    "    `-......-` " << std::endl << std::endl << std::endl;
            
        std::cout << "You show the Oracle the chalice and he gazes into his crystal ball..." << std::endl << std::endl;
        std::cout << "I see treasures beyond your wildest beliefs, " << p1.getName() << "." << std::endl;
        std::cout << "If you scale this mountain, however, you will face great peril at the hands of monsters," << std::endl;
        std::cout << "or greedy individuals who want all the treasure... I will train you to fight better," << std::endl;
        std::cout << "in exchange for your chalice... (Type 1 to give chalice)" << std::endl;
        
        int choice2 = 2;
        
        std::cin >> choice2;
        while(true)
        {
            if(std::cin.fail() || !(choice2 == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Without proper training, you'll never get the treasure..." << std::endl << std::endl;
                std::cin >> choice2;
            }
            
            if(!std::cin.fail() && (choice2 == 1))
                break;
        }
            
            
        std::cout << std::endl << std::endl << "With the training from the Oracle, your sword now hits 3/4ths of the time." << std::endl;
        std::cout << "The Oracle gives you a healing cream and you go on your way... (+3,000 Score)" << std::endl << std::endl << std::endl << std::endl;
            
        p1.setScore(p1.getScore() + 3000);
        p1.setHP(p1.getHP() + 25);
            
        std::cout << "Current Score: " << p1.getScore() << std::endl;
        std::cout << "Current Health: " << p1.getHP() << std::endl << std::endl;
            
        
        std::cout << "Save? (Type 1 to save, 0 to continue)" << std::endl;
        
        int choiceSave = 2;
        
        std::cin >> choiceSave;
        
        while(true)
        {
            if(std::cin.fail() || !(choiceSave == 0 || choiceSave == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input...please try again." << std::endl << std::endl;
                std::cin >> choiceSave;
            }
            
            if(!std::cin.fail() && (choiceSave == 1 || choiceSave == 0))
                break;
        }
        
        if(choiceSave == 1)
        {
            save(5, p1.getHP(), p1.getScore());
            play(5);
        }
        
        if(choiceSave == 0)
        {
            play(5);
        }
        
    
    }
    
    
    
    
    
    
    if(levelNum == 5)
    {
        
        printMap(5);
        std::cout << "You set out on the path the Oracle outlined to you..." << std::endl;
        std::cout << "As described, you encounter a monster on your path." << std::endl;
        std::cout << "A tall, fat, snow-covered creature... the Snowlax..." << std::endl << std::endl;
        
        
        Enemy e6("Snowlax");
        e6.setHealth(100);
        e6.setDPH(14);
        std::cout << std::endl << "Battle the Snowlax (1) or Attempt to sneak by (0)" << std::endl << std::endl;
            
        int choiceFight = 2;
        
        std::cin >> choiceFight;
        while(true)
        {
            if(std::cin.fail() || !(choiceFight == 0 || choiceFight == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input...please try again." << std::endl << std::endl;
                std::cin >> choiceFight;
            }
            
            if(!std::cin.fail() && (choiceFight == 1 || choiceFight == 0))
                break;
        }
        
        if(choiceFight == 1)
        {
            std::cout << "BATTLE TIME! " << p1.getName() << " versus the Snowlax!" << std::endl << std::endl;
                
            while (e6.getHealth() > 0)
            {
                std::cout << "Select Your Weapon!" << std::endl << std::endl;
                std::cout << "**==* Weapons *==**" << std::endl << std::endl;
                std::cout << "1. Fists (5 damage)" << std::endl;
                std::cout << "2. Knife (10 damage, quarter chance of miss)" << std::endl;
                std::cout << "3. Sword (25 damage, quarter chance of miss)" << std::endl;
                std::cout << "4. Ice Spell (8 damage, enemy does half damage next turn)" << std::endl;
                std::cout << "5. Fire Spell (50 damage, enemy does double damage next turn)" << std::endl;
                std::cout << std::endl;
            
                int weapon = 0;
                
                std::cin >> weapon;
                    
                while(true)
                {
                    if(std::cin.fail() || !(weapon == 1 || weapon == 2 || weapon == 3 || weapon == 4 || weapon == 5))
                    {
                        std::cin.clear();
                        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                        std::cout << "Invalid input...please try again." << std::endl << std::endl;
                        std::cin >> weapon;
                    }
            
                    if(!std::cin.fail() && (weapon == 1 || weapon == 2 || weapon == 3 || weapon == 4 || weapon == 5))
                        break;
                }
        
                if(weapon == 1)
                {
                    std::cout << "POW!" << std::endl << std::endl;
                    e6.setHealth(e6.getHealth() - 5);
                    std::cout << "Your punch was effective, dealing 5 damage." << std::endl;
                    if(e6.getHealth() > 0)
                    {
                        std::cout << "the Snowlax has " << e6.getHealth() << " HP left." << std::endl << std::endl;
                        std::cout << "the Snowlax uses ice blast, dealing "<< e6.getDPH() << " damage." << std::endl << std::endl;
                        
                        p1.setHP(p1.getHP() - e6.getDPH());
                            
                        if(p1.getHP() < 1)
                        {
                            gameOver();
                        }
                            
                        std::cout << "Your Health: " << p1.getHP() << std::endl;
                    }
                    else 
                    {
                        std::cout << "the Snowlax has been slain..." << std::endl << std::endl;
                        std::cout << "Your Health: " << p1.getHP() << std::endl;
                        std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                    }
                }
                    
                if(weapon == 2)
                {
                    bool hitKnife = ((rand() % 100) < 75);
                        
                    if(hitKnife)
                    {
                        std::cout << "CHING!" << std::endl << std::endl;
                        e6.setHealth(e6.getHealth() - 10);
                        std::cout << "Your stab was effective, dealing 10 damage. (+25 Score)" << std::endl;
                        p1.setScore(p1.getScore() + 25);
                    }
                    if(!hitKnife) 
                        std::cout << "WOOSH! Miss." << std::endl << std::endl;
                        
                    if(e6.getHealth() > 0)
                    {
                        std::cout << "the Snowlax has " << e6.getHealth() << " HP left." << std::endl << std::endl;
                        std::cout << "the Snowlax uses blizzard, dealing "<< e6.getDPH() << " damage." << std::endl << std::endl;
                            
                        p1.setHP(p1.getHP() - e6.getDPH());
                            
                        if(p1.getHP() < 1)
                        {
                            gameOver();
                        }
                            
                        std::cout << "Your Health: " << p1.getHP() << std::endl;
                    }
                    else 
                    {
                        std::cout << "the Snowlax has been slain..." << std::endl << std::endl;
                        std::cout << "Your Health: " << p1.getHP() << std::endl;
                        std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                    }
                }
                if(weapon == 3)
                {
                    bool hitSword = ((rand() % 100) < 75);
                        
                    if(hitSword)
                    {
                        std::cout << "SLASH!" << std::endl << std::endl;
                        e6.setHealth(e6.getHealth() - 25);
                        std::cout << "Your sword was effective, dealing 25 damage. (+50 Score)" << std::endl;
                        p1.setScore(p1.getScore() + 50);
                    }
                    if(!hitSword) 
                        std::cout << "WOOSH! Miss." << std::endl << std::endl;
                            
                            
                    if(e6.getHealth() > 0)
                    {
                        std::cout << "the Snowlax has " << e6.getHealth() << " HP left." << std::endl << std::endl;
                        std::cout << "the Snowlax uses snow blast, dealing "<< e6.getDPH() << " damage." << std::endl << std::endl;
                        
                        p1.setHP(p1.getHP() - e6.getDPH());
                            
                        if(p1.getHP() < 1)
                        {
                            gameOver();
                        }
                            
                        std::cout << "Your Health: " << p1.getHP() << std::endl;
                    }
                    else 
                    {
                        std::cout << "the Snowlax has been slain..." << std::endl << std::endl;
                        std::cout << "Your Health: " << p1.getHP() << std::endl;
                        std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                    }
                }
                if(weapon == 4)
                {
                    std::cout << "**The earth rumbles**" << std::endl << std::endl;
                    e6.setHealth(e6.getHealth() - 8);
                    std::cout << "the Snowlax has been dealt 8 damage but the magic is unaffective..." << std::endl;
                    if(e6.getHealth() > 0)
                    {
                        std::cout << "the Snowlax has " << e6.getHealth() << " HP left." << std::endl << std::endl;
                        std::cout << "the Snowlax slowly punches, dealing "<< e6.getDPH() << " damage." << std::endl << std::endl;
                            
                        p1.setHP(p1.getHP() - e6.getDPH());
                            
                        if(p1.getHP() < 1)
                        {
                            gameOver();
                        }
                            
                        std::cout << "Your Health: " << p1.getHP() << std::endl;
                    }
                    else 
                    {
                        std::cout << "the Snowlax has been slain..." << std::endl << std::endl;
                        std::cout << "Your Health: " << p1.getHP() << std::endl;
                        std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                    }
                }
                if(weapon == 5)
                {
                    std::cout << "**The earth rumbles**" << std::endl << std::endl;
                    e6.setHealth(e6.getHealth() - 50);
                    std::cout << "the Snowlax has been partially melted, dealt 50 damage, and gains no stats." << std::endl;
                    if(e6.getHealth() > 0)
                    {
                        std::cout << "the Snowlax has " << e6.getHealth() << " HP left." << std::endl << std::endl;
                        std::cout << "the Snowlax breathes fire, dealing "<< e6.getDPH() << " damage." << std::endl << std::endl;
                            
                        p1.setHP(p1.getHP() - e6.getDPH());
                        
                        if(p1.getHP() < 1)
                        {
                            gameOver();
                        }
                        
                        std::cout << "Your Health: " << p1.getHP() << std::endl;
                    }
                    else 
                    {
                        std::cout << "the Snowlax has been slain..." << std::endl << std::endl;
                        std::cout << "Your Health: " << p1.getHP() << std::endl;
                        std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                    }
                }
                    
                            
            }
        }
            
        if(choiceFight == 0)
        {
            
            std::cout << "You attempt to sneak by, but the Snowlax sees you immediately..."<< std::endl;
            std::cout << "He shoots a blizzard-blast, hitting you devastatingly... (-80 HP) (-200 Score)"<< std::endl<< std::endl<< std::endl;
            p1.setHP(p1.getHP() - 80);
            p1.setScore(p1.getScore() - 200);
            if(p1.getHP() < 1)
            {
                gameOver();
            }
        }
            
            
            
            
        std::cout << "After passing the Snowlax, you see the first cave up the mountain." << std::endl;
        std::cout << "You decide to take shelter here until the morning..." << std::endl;
        std::cout << "Type 1 to Sleep..." << std::endl << std::endl << std::endl << std::endl;
        int choice2 = 2;
        
        std::cin >> choice2;
        while(true)
        {
            if(std::cin.fail() || !(choice2 == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "You must sleep to continue your adventure..." << std::endl << std::endl;
                std::cin >> choice2;
            }
        
            if(!std::cin.fail() && (choice2 == 1))
                break;
                
        }
            
            
        std::cout << "ZZZzzz..." << std::endl << std::endl << std::endl << std::endl;
        std::cout << "Goodmorning! (+500 Score)" << std::endl << std::endl << std::endl << std::endl;
            
        p1.setScore(p1.getScore() + 500);
            
        std::cout << "Current Score: " << p1.getScore() << std::endl;
        std::cout << "Current Health: " << p1.getHP() << std::endl << std::endl;
            
        
        std::cout << "Save? (Type 1 to save, 0 to continue)" << std::endl;
        
        int choiceSave = 2;
        
        std::cin >> choiceSave;
        while(true)
        {
            if(std::cin.fail() || !(choiceSave == 0 || choiceSave == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input...please try again." << std::endl << std::endl;
                std::cin >> choiceSave;
            }
            
            if(!std::cin.fail() && (choiceSave == 1 || choiceSave == 0))
                break;
        }
        
        if(choiceSave == 1)
        {
            save(6, p1.getHP(), p1.getScore());
            play(6);
        }
        if(choiceSave == 0)
        {
            play(6);
        }
    

    
    }
    
    
    
    
    
    
    if(levelNum == 6)
    {
        
        printMap(6);
        std::cout << "After a night of rest, you set out to the final peak..." << std::endl;
        std::cout << "As you climb the mountain, the air becoming thinner and thinner, you see a bright-burning cave on the way to the top." << std::endl;
        std::cout << "Maybe some of the treasure is in there..." << std::endl << std::endl;
        std::cout << "Enter the cave (1) or Pass the cave (0)" << std::endl << std::endl;
        
       
        int choice = 2;
        
        std::cin >> choice;
        while(true)
        {
            if(std::cin.fail() || !(choice == 0 || choice == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input...please try again." << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && (choice == 1 || choice == 0))
                break;
        }
        
        
        if(choice == 1)
        {
            Enemy e7("Guardian Jr.");
            e7.setHealth(150);
            e7.setDPH(16);
            
            
            std::cout << "As you enter the cave, you see a figure in the distance quickly approaching..." << std::endl << std::endl;
        
            std::cout << "***BOSS ALERT: GUARDIAN JR.***" << std::endl << std::endl;
            
            
                std::cout << "BATTLE TIME! " << p1.getName() << " versus Guardian Jr.!" << std::endl << std::endl;
                
                while (e7.getHealth() > 0)
                {
                    std::cout << "Select Your Weapon!" << std::endl << std::endl;
                
                    std::cout << "**==* Weapons *==**" << std::endl << std::endl;
                    std::cout << "1. Fists (5 damage)" << std::endl;
                    std::cout << "2. Knife (10 damage, quarter chance of miss)" << std::endl;
                    std::cout << "3. Sword (25 damage, quarter chance of miss)" << std::endl;
                    std::cout << "4. Ice Spell (8 damage, enemy does half damage next turn)" << std::endl;
                    std::cout << "5. Fire Spell (50 damage, enemy does double damage next turn)" << std::endl;
                    std::cout << std::endl;
                
                    int weapon = 0;
                
                    std::cin >> weapon;
                    
                    while(true)
                    {
                        if(std::cin.fail() || !(weapon == 1 || weapon == 2 || weapon == 3 || weapon == 4 || weapon == 5))
                        {
                            std::cin.clear();
                            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                            std::cout << "Invalid input...please try again." << std::endl << std::endl;
                            std::cin >> weapon;
                        }
            
                        if(!std::cin.fail() && (weapon == 1 || weapon == 2 || weapon == 3 || weapon == 4 || weapon == 5))
                            break;
                    }
        
                    if(weapon == 1)
                    {
                        std::cout << "POW!" << std::endl << std::endl;
                        e7.setHealth(e7.getHealth() - 5);
                        std::cout << "Your punch was effective, dealing 5 damage." << std::endl;
                        if(e7.getHealth() > 0)
                        {
                            std::cout << "Guardian Jr. has " << e7.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Guardian Jr. uses his sword, dealing "<< e7.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e7.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Guardian Jr. has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    
                    if(weapon == 2)
                    {
                        bool hitKnife = ((rand() % 100) < 75);
                        
                        if(hitKnife)
                        {
                            std::cout << "CHING!" << std::endl << std::endl;
                            e7.setHealth(e7.getHealth() - 10);
                            std::cout << "Your stab was effective, dealing 10 damage. (+25 Score)" << std::endl;
                            p1.setScore(p1.getScore() + 25);
                        }
                        if(!hitKnife) 
                            std::cout << "WOOSH! Miss." << std::endl << std::endl;
                        
                        if(e7.getHealth() > 0)
                        {
                            std::cout << "Guardian Jr. has " << e7.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Guardian Jr. uses blizzard, dealing "<< e7.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e7.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Guardian Jr. has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    if(weapon == 3)
                    {
                        bool hitSword = ((rand() % 100) < 75);
                        
                        if(hitSword)
                        {
                            std::cout << "SLASH!" << std::endl << std::endl;
                            e7.setHealth(e7.getHealth() - 25);
                            std::cout << "Your sword was effective, dealing 25 damage. (+50 Score)" << std::endl;
                            p1.setScore(p1.getScore() + 50);
                        }
                        if(!hitSword) 
                            std::cout << "WOOSH! Miss." << std::endl << std::endl;
                            
                            
                        if(e7.getHealth() > 0)
                        {
                            std::cout << "Guardian Jr. has " << e7.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Guardian Jr. uses snow blast, dealing "<< e7.getDPH() << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - e7.getDPH());
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Guardian Jr. has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    if(weapon == 4)
                    {
                        std::cout << "**The earth rumbles**" << std::endl << std::endl;
                        e7.setHealth(e7.getHealth() - 8);
                        std::cout << "Guardian Jr. has been frozen and dealt 8 damage." << std::endl;
                        if(e7.getHealth() > 0)
                        {
                            std::cout << "Guardian Jr. has " << e7.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Guardian Jr. slowly punches, dealing "<< (e7.getDPH())/2 << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - (e7.getDPH())/2);
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Guardian Jr. has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    }
                    if(weapon == 5)
                    {
                        std::cout << "**The earth rumbles**" << std::endl << std::endl;
                        e7.setHealth(e7.getHealth() - 50);
                        std::cout << "Guardian Jr. has been burned and dealt 50 damage." << std::endl;
                        if(e7.getHealth() > 0)
                        {
                            std::cout << "Guardian Jr. has " << e7.getHealth() << " HP left." << std::endl << std::endl;
                            std::cout << "Guardian Jr. breathes fire, dealing "<< (e7.getDPH())*2 << " damage." << std::endl << std::endl;
                            
                            p1.setHP(p1.getHP() - (e7.getDPH())*2);
                            
                            if(p1.getHP() < 1)
                            {
                                gameOver();
                            }
                            
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                        }
                        else 
                        {
                            std::cout << "Guardian Jr. has been slain..." << std::endl << std::endl;
                            std::cout << "Your Health: " << p1.getHP() << std::endl;
                            std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                        }
                    
                    
                    }
                }
            
        }
            
                
        if(choice == 0)
        {
            std::cout << "You attempt to pass the cave..."<< std::endl;
            std::cout << "***BOSS ALERT: GUARDIAN JR.***" << std::endl << std::endl;
            std::cout << "Guardian Jr. strikes a lethal blow... (-1,000 HP) (-500 Score)" << std::endl;
            p1.setHP(p1.getHP() - 1000);
            p1.setScore(p1.getScore() - 500);
            gameOver();
        }
            
        std::cout << "After defeating Guardian Jr., you search the cave for treasure..." << std::endl;
        std::cout << "..." << std::endl;
        std::cout << "..." << std::endl << std::endl << std::endl << std::endl;
        std::cout << "You find a bronze key...hopefully this will assist you at the next stop..." << std::endl;
        std::cout << "You continue on... (+2,500 Score)" << std::endl << std::endl << std::endl << std::endl;
            
            
        p1.setScore(p1.getScore() + 2500);
            
        std::cout << "Current Score: " << p1.getScore() << std::endl;
        std::cout << "Current Health: " << p1.getHP() << std::endl << std::endl;
            
        
        std::cout << "Save? (Type 1 to save, 0 to continue)" << std::endl;
        
        int choiceSave = 2;
        
        std::cin >> choiceSave;
        while(true)
        {
            if(std::cin.fail() || !(choiceSave == 0 || choiceSave == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input...please try again." << std::endl << std::endl;
                std::cin >> choiceSave;
            }
            
            if(!std::cin.fail() && (choiceSave == 1 || choiceSave == 0))
                break;
        }
        
        if(choiceSave == 1)
        {
            save(7, p1.getHP(), p1.getScore());
            play(7);
        }
        if(choiceSave == 0)
        {
            play(7);
        }
        
    
    }
    
    
    
    
    
    
    if(levelNum == 7)
    {
        printMap(7);
        
        std::cout << "A DOOR! You see a slightly-visible door in the side of the mountain..." << std::endl;
        std::cout << "It looks like the key you found may unlock the door." << std::endl;
        std::cout << "Maybe some of the treasure is in there..." << std::endl << std::endl;
        
        std::cout << "Attempt to push open door (0) or Try the key (1)" << std::endl << std::endl;
        
       
        int choice = 2;
        
        std::cin >> choice;
        while(true)
        {
            if(std::cin.fail() || !(choice == 0 || choice == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input... please try again." << std::endl << std::endl;
                std::cin >> choice;
            }
            if(!std::cin.fail() && choice == 0)
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "You try to bust down the door... It's sealed shut. (O to try again, 1 to use key)" << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && choice == 1)
                break;
        }
        
        std::cout << "The key turns and the door creaks open... You step inside gingerly." << std::endl;
        std::cout << "Seems like nobody's home; however, you see Guardian Jr.'s weapons in the main room..." << std::endl;
        std::cout << "This must be the Guardian's house..." << std::endl << std::endl << std::endl << std::endl;
        
        
        std::cout << "You quickly pick up the Guardian's maps and keys, along with some restoration potions... (+75 HP)" << std::endl << std::endl;
        
        p1.setHP(p1.getHP() + 75);
        
        std::cout << "***The Earth Rumbles***" << std::endl << std::endl;
        
        std::cout << "As you attempt to escape, you feel something happening..." << std::endl << std::endl;
        
        for(int i = 0; i < 100; i++)
        {
            if (i % 10 == 0)
            {
                std::cout << std::endl;
            }
            else
            {
                std::cout << "{}";
            }
        }
        
        
        
        Enemy e8("the Guardian");
        e8.setHealth(200);
        e8.setDPH(20);
            
            
        std::cout << std::endl << "You see the towering figure approach the door..." << std::endl << std::endl;
        
        std::cout << "***BOSS ALERT: THE GUARDIAN***" << std::endl << std::endl;
            
            
        std::cout << "BATTLE TIME! " << p1.getName() << " versus the Guardian!" << std::endl << std::endl;
                
        while (e8.getHealth() > 0)
        {
            std::cout << "Select Your Weapon!" << std::endl << std::endl;
            std::cout << "**==* Weapons *==**" << std::endl << std::endl;
            std::cout << "1. Fists (5 damage)" << std::endl;
            std::cout << "2. Knife (10 damage, quarter chance of miss)" << std::endl;
            std::cout << "3. Sword (25 damage, quarter chance of miss)" << std::endl;
            std::cout << "4. Ice Spell (8 damage, enemy does half damage next turn)" << std::endl;
            std::cout << "5. Fire Spell (50 damage, enemy does double damage next turn)" << std::endl;
            std::cout << std::endl;
                
            int weapon = 0;
                
            std::cin >> weapon;
                
            while(true)
            {
                if(std::cin.fail() || !(weapon == 1 || weapon == 2 || weapon == 3 || weapon == 4 || weapon == 5))
                {
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    std::cout << "Invalid input...please try again." << std::endl << std::endl;
                    std::cin >> weapon;
                }
            
                if(!std::cin.fail() && (weapon == 1 || weapon == 2 || weapon == 3 || weapon == 4 || weapon == 5))
                    break;
            }
        
            if(weapon == 1)
            {
                std::cout << "POW!" << std::endl << std::endl;
                e8.setHealth(e8.getHealth() - 5);
                std::cout << "Your punch was effective, dealing 5 damage." << std::endl;
                if(e8.getHealth() > 0)
                {
                    std::cout << "Guardian has " << e8.getHealth() << " HP left." << std::endl << std::endl;
                    std::cout << "Guardian uses his sword, dealing "<< e8.getDPH() << " damage." << std::endl << std::endl;
                            
                    p1.setHP(p1.getHP() - e8.getDPH());
                            
                    if(p1.getHP() < 1)
                    {
                        gameOver();
                    }
                            
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                }
                else 
                {
                    std::cout << "Guardian has been slain..." << std::endl << std::endl;
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                    std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                }
            }
                    
            if(weapon == 2)
            {
                bool hitKnife = ((rand() % 100) < 75);
                        
                if(hitKnife)
                {
                    std::cout << "CHING!" << std::endl << std::endl;
                    e8.setHealth(e8.getHealth() - 10);
                    std::cout << "Your stab was effective, dealing 10 damage. (+25 Score)" << std::endl;
                    p1.setScore(p1.getScore() + 25);
                }
                if(!hitKnife) 
                    std::cout << "WOOSH! Miss." << std::endl << std::endl;
                        
                if(e8.getHealth() > 0)
                {
                    std::cout << "Guardian has " << e8.getHealth() << " HP left." << std::endl << std::endl;
                    std::cout << "Guardian uses his axe, dealing "<< e8.getDPH() << " damage." << std::endl << std::endl;
                            
                    p1.setHP(p1.getHP() - e8.getDPH());
                            
                    if(p1.getHP() < 1)
                    {
                        gameOver();
                    }
                            
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                }
                else 
                {
                    std::cout << "Guardian has been slain..." << std::endl << std::endl;
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                    std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                }
            }
            if(weapon == 3)
            {
                bool hitSword = ((rand() % 100) < 75);
                        
                if(hitSword)
                {
                    std::cout << "SLASH!" << std::endl << std::endl;
                    e8.setHealth(e8.getHealth() - 25);
                            std::cout << "Your sword was effective, dealing 25 damage. (+50 Score)" << std::endl;
                            p1.setScore(p1.getScore() + 50);
                }
                if(!hitSword) 
                    std::cout << "WOOSH! Miss." << std::endl << std::endl;
                            
                            
                if(e8.getHealth() > 0)
                {
                    std::cout << "Guardian has " << e8.getHealth() << " HP left." << std::endl << std::endl;
                    std::cout << "Guardian uses blast, dealing "<< e8.getDPH() << " damage." << std::endl << std::endl;
                            
                    p1.setHP(p1.getHP() - e8.getDPH());
                            
                    if(p1.getHP() < 1)
                    {
                        gameOver();
                    }
                            
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                }
                else 
                {
                    std::cout << "Guardian has been slain..." << std::endl << std::endl;
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                    std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                }
            }
            if(weapon == 4)
            {
                std::cout << "**The earth rumbles**" << std::endl << std::endl;
                e8.setHealth(e8.getHealth() - 8);
                std::cout << "Guardian has been frozen and dealt 8 damage." << std::endl;
                if(e8.getHealth() > 0)
                {
                    std::cout << "Guardian has " << e8.getHealth() << " HP left." << std::endl << std::endl;
                    std::cout << "Guardian slowly punches, dealing "<< (e8.getDPH())/2 << " damage." << std::endl << std::endl;
                            
                    p1.setHP(p1.getHP() - (e8.getDPH())/2);
                            
                    if(p1.getHP() < 1)
                    {
                        gameOver();
                    }
                            
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                }
                else 
                {
                    std::cout << "Guardian has been slain..." << std::endl << std::endl;
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                    std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                }
            }
            if(weapon == 5)
            {
                std::cout << "**The earth rumbles**" << std::endl << std::endl;
                e8.setHealth(e8.getHealth() - 50);
                std::cout << "Guardian has been burned and dealt 50 damage." << std::endl;
                if(e8.getHealth() > 0)
                {
                    std::cout << "Guardian Jr. has " << e8.getHealth() << " HP left." << std::endl << std::endl;
                    std::cout << "Guardian Jr. breathes fire, dealing "<< (e8.getDPH())*2 << " damage." << std::endl << std::endl;
                            
                    p1.setHP(p1.getHP() - (e8.getDPH())*2);
                            
                    if(p1.getHP() < 1)
                    {
                        gameOver();
                    }
                            
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                }
                else 
                {
                    std::cout << "Guardian has been slain..." << std::endl << std::endl;
                    std::cout << "Your Health: " << p1.getHP() << std::endl;
                    std::cout << "Your Score: " << p1.getScore() << std::endl << std::endl << std::endl << std::endl;
                }
                    
                    
            }
        }
            
        
        std::cout << "***The Earth Rumbles***" << std::endl << std::endl;
        std::cout << "You have defeated the Guardian..." << std::endl;
        std::cout << "You see a ray of light emitted from the top of the mountain..." << std::endl << std::endl;
           
        std::cout << "Collect your loot (+10,000 Score)" << std::endl << std::endl << std::endl << std::endl;
            
        p1.setScore(p1.getScore() + 10000);
            
        std::cout << "Current Score: " << p1.getScore() << std::endl;
        std::cout << "Current Health: " << p1.getHP() << std::endl << std::endl;
            
        
        std::cout << "Save? (Type 1 to save, 0 to continue)" << std::endl;
        
        int choiceSave = 2;
        
        std::cin >> choiceSave;
        while(true)
        {
            if(std::cin.fail() || !(choiceSave == 0 || choiceSave == 1))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input...please try again." << std::endl << std::endl;
                std::cin >> choiceSave;
            }
            
            if(!std::cin.fail() && (choiceSave == 1 || choiceSave == 0))
                break;
        }
        
        if(choiceSave == 1)
        {
            save(8, p1.getHP(), p1.getScore());
            play(8);
        }
        if(choiceSave == 0)
        {
            play(8);
        }
        
    
    }
    
    
    
    
    
    //winners level/ level selector
    if(levelNum == 8)
    {
        
        printMap(8);
        std::cout << "You have defeated the Guardian and claimed the treasures of the top of the mountain!" << std::endl; 
        std::cout << "You will have riches to suffice a million lifetimes..." << std::endl << std::endl << std::endl << std::endl << std::endl; 
        std::cout << std::endl << "CREDITS:" << std::endl << std::endl;
        std::cout << "Mountain Man is a C++, console input/output based text game created in 2019." << std::endl << std::endl;
        std::cout << "Back-End Editor: Cole Radetich" << std::endl;
        std::cout << "Front-End Editor: Cole Radetich" << std::endl;
        std::cout << "Side Editor: Cole Radetich" << std::endl;
        std::cout << "Storyline Advisor: Cole Radetich" << std::endl;
        std::cout << "Gameplay Advisor: Cole Radetich" << std::endl;
        std::cout << "Development Assistant: Cole Radetich" << std::endl;
        std::cout << "Project Overseer: Cole Radetich" << std::endl << std::endl;
            
            
        std::cout << "Please enter a level number (1-8) to replay from there, or 9 to Quit..." << std::endl << std::endl;
        int choice = 2;
        
        std::cin >> choice;
        while(true)
        {
            if(std::cin.fail() || !(choice == 0 || choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 || choice == 7 || choice == 8 || choice == 9))
            {
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                std::cout << "Invalid input...please try again." << std::endl << std::endl;
                std::cin >> choice;
            }
            
            if(!std::cin.fail() && (choice == 0 || choice == 1 || choice == 2 || choice == 3 || choice == 4 || choice == 5 || choice == 6 || choice == 7 || choice == 8 || choice == 9))
                break;
        }
        
        
        if(choice == 1)
        {
            play(0);
        }
        if(choice == 2)
        {
            play(1);
        }
        if(choice == 3)
        {
            play(2);
        }
        if(choice == 4)
        {
            play(3);
        }
        if(choice == 5)
        {
            play(4);
        }
        if(choice == 6)
        {
            play(5);
        }
        if(choice == 7)
        {
            play(6);
        }
        if(choice == 8)
        {
            play(7);
        }
        if(choice == 9)
        {
            exit(0);
        }
    
    
    }
}

void Game::loadSave()
{
    int saveScore;
    int saveHp;
    int saveNum;
    
    std::cout << std::endl << "Welcome, returning Player!" << std::endl << std::endl;
    
    std::cout << "Please re-enter your name... (one word, all other words will be removed)" << std::endl << std::endl;
    
    std::string saveName = "";
    
    std::cin >> saveName;
    while(true)
    {
        if(std::cin.fail() || saveName == "")
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid name...please try again." << std::endl << std::endl;
            std::cin >> saveName;
        }
            
        if(!std::cin.fail())
            break;
    }
    
    std::cout << "Please enter EXACT file name (no extension)..." << std::endl << std::endl;
    
    std::string fileName = "";
    
    std::cin >> fileName;
    while(true)
    {
        if(std::cin.fail() || fileName == "")
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid file name...please try again. (make sure not to include .mman)" << std::endl << std::endl;
            std::cin >> fileName;
        }
            
        if(!std::cin.fail())
            break;
    }
    
    std::ifstream txt_in(fileName + ".mman");
    
    if(!txt_in)
    {
        std::cout<<"FILE NOT FOUND! Starting new game..."<<std::endl;
        play(0);
    }
    
    
    txt_in >> saveNum >> saveHp >> saveScore;
  
    p1.setName(saveName);
    p1.setScore(saveScore);
    p1.setHP(saveHp);
    
    
    std::cout << std::endl << p1.getName() << ":" << std::endl << std::endl;
    std::cout << "Health: " << p1.getHP() << std::endl;
    std::cout << "Score: " << p1.getScore() << std::endl;
    
    
    std::cout << std::endl << "Let's explore the mountain..." << std::endl << std::endl << std::endl << std::endl;
    
    
    play(saveNum);
    
}


void Game::newPlay()
{
    
    std::cout << std::endl << "Welcome, new Player!" << std::endl << std::endl;
    
    std::cout << "Please enter your name... (one word, all other words will be removed)" << std::endl << std::endl;
    
    std::string name = "";
    
    std::cin >> name;
    while(true)
    {
        if(std::cin.fail() || name == "")
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid name...please try again." << std::endl << std::endl;
            std::cin >> name;
        }
            
        if(!std::cin.fail())
            break;
    }
    p1.setName(name);
    
    
    std::cout << std::endl << p1.getName() << ":" << std::endl << std::endl;
    std::cout << "Health: " << p1.getHP() << std::endl;
    std::cout << "Score: " << p1.getScore() << std::endl;
    
    
    std::cout << std::endl << "Let's explore the mountain..." << std::endl << std::endl << std::endl << std::endl;
    
    play(0);
    
}