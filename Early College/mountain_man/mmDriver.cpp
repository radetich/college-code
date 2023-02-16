// CS1300 Fall 2019
// Author: Cole Radetich
// Recitation: 203 – Soumyajyoti Bhattacharya 
// Project 3
// Driver Function

#include <iostream>
#include <string>
#include <limits>
#include "Game.h"
#include "Player.h"
#include "Enemy.h"


void mainMenu()
{
    std::cout << std::endl;
    std::cout << "*==**--**==* Main Menu *==**--**==*" << std::endl << std::endl;
    std::cout << "Glory follows virtue as if it were its shadow. - Marcus Tullius Cicero" << std::endl << std::endl;
    std::cout << "1. New Game" << std::endl;
    std::cout << "2. Load Game from File" << std::endl;
    std::cout << "3. Enemy List" << std::endl;
    std::cout << "4. Credits" << std::endl;
    std::cout << "5. Exit" << std::endl;
    std::cout << std::endl;
    
}


//driver for main menu and game execution (game bulk code in Game.cpp)
void driver()
{
    int selection = 0;
    
    std::cout << "Press enter to proceed to the menu..." << std::endl << std::endl;
    
    //loop to check for correct input and flush buffer
    while(std::cin.good())
    {
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin.clear();
        
        mainMenu();
        
        std::cin >> selection;
    
    
        if (selection != 1 && selection != 2 && selection != 3 && selection != 4 && selection != 5)
        {
        
            std::cout << "Invalid selection... Please select a number between 1 and 5. (5 to exit)" << std::endl;
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.clear();
            
        }
        
        if (selection == 1)
        {
            
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.clear();
            Game mm;
            mm.newPlay();
        
        }
    
        if (selection == 2)
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin.clear();
            Game mmReturn;
            mmReturn.loadSave();
            
        }
    
        if (selection == 3)
        {
            
            std::cout << std::endl << "ENEMY LIST:" << std::endl << std::endl;
            Enemy e1("list");
            e1.enemyArray();
            
        }
    
        if (selection == 4)
        {
            
            std::cout << std::endl << "CREDITS:" << std::endl << std::endl;
            std::cout << "Mountain Man is a C++, console input/output based text game created in 2019." << std::endl << std::endl;
            std::cout << "Back-End Editor: Cole Radetich" << std::endl;
            std::cout << "Front-End Editor: Cole Radetich" << std::endl;
            std::cout << "Side Editor: Cole Radetich" << std::endl;
            std::cout << "Storyline Advisor: Cole Radetich" << std::endl;
            std::cout << "Gameplay Advisor: Cole Radetich" << std::endl;
            std::cout << "Development Assistant: Cole Radetich" << std::endl;
            std::cout << "Project Overseer: Cole Radetich" << std::endl << std::endl;
        
        }
        
        if (selection == 5)
        {
            //closes program
            exit(0);
            
        }
    }
}


//main function
int main()
{
    std::cout << "Welcome to Mountain Man! a C++ turn-based RPG game created by Cole Radetich" << std::endl << std::endl << std::endl;
    
    driver();
    
    return 0;
}