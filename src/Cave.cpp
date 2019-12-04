#include <iostream>
#include <stdlib.h>

#include "PrintHelper.h"
#include "Print.h"

#include "Inventory.h"

DIALOG printCave(Inventory &inventory,Quests &quests){
    system("CLS");
    printInventory(inventory);

    startHeader("Big cave");
    std::cout << "You find yourself in front of a big dark cave in the mountains.\n";
    std::cout << "You see a huge troll sleeping in the cave.\n";
    finishHeader("Big cave");

    printChoices("Attack troll.","Go to village town.","Go to forest.");
    switch(getChoice(3)){
    case 1:
        return ATTACK;
    case 2:
        return TOWN;
    case 3:
        return FOREST;
    default:
        return ERROR;
    }
}
