#include <iostream>
#include <stdlib.h>

#include "PrintHelper.h"
#include "Print.h"

#include "Inventory.h"

DIALOG printAttackTroll(Inventory &inventory,Quests &quests){
    system("CLS");
    printInventory(inventory);

    startHeader("Big cave");
    if(inventory.sword){
        std::cout << "You run screaming towards the troll and attack it with the old sword.\n";
        std::cout << "The troll wakes up and is very angry.\n";
        std::cout << "You show your best fighting skills.\n";
        std::cout << "The troll also tries to fight.\n";
        std::cout << "But in his clumsyness he stumbles over his own feet.\n";
        std::cout << "Which gives you the opportunity to knock off his head.\n";
        std::cout << "With the troll head still sticking on your sword, you go back to the town.\n";
        std::cout << "There you are celebrated as a hero.\n";
        std::cout << "Till today people are singing songs about the man, who killed the troll.\n";

        printChoices("Exit game.");
        switch(getChoice(1)){
        case 1:
            return EXIT;
        default:
            return ERROR;
        }
    }
    else{
        std::cout << "You run screaming towards the troll and attack it with your bare hands.\n";
        std::cout << "The troll wakes up and is very angry.\n";
        std::cout << "You show your best fighting skills, but the troll is much stronger than you.\n";
        std::cout << "Only an idiot would attack the troll with his bare hands!!!.\n";
        std::cout << "Of course you die.\n";
        std::cout << "That was it.\n";
        std::cout << "No one will remember your name.\n";
        std::cout << "Or will write songs about you.\n";
        std::cout << "All that is left of you is your dead body, that will probably never be found.\n";
        std::cout << "What a waste.\n";
        finishHeader("Big cave");

        printChoices("Exit game.");
        switch(getChoice(1)){
        case 1:
            return EXIT;
        default:
            return ERROR;
        }
    }
}
