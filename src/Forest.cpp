#include <iostream>
#include <stdlib.h>

#include "PrintHelper.h"
#include "Print.h"

#include "Inventory.h"

DIALOG printForest(Inventory &inventory,Quests &quests){
    system("CLS");
    printInventory(inventory);

    startHeader("Forest");
    std::cout << "You find yourself in a dense forest.\n";
    std::cout << "The birds a chirping in the trees.\n";
    std::cout << "Different kinds of mushrooms are growing at the roots of the trees.\n";
    finishHeader("Forest");

    if(quests.findMushrooms){
        printChoices("Look for mushrooms.","Go to village town.","Go to big cave.");
        switch(getChoice(3)){
        case 1:
            inventory.mushrooms++;
            return FOREST;
        case 2:
            return TOWN;
        case 3:
            return CAVE;
        default:
            return ERROR;
        }
    }
    else{
        printChoices("Go to village town.","Go to big cave.");
        switch(getChoice(2)){
        case 1:
            return TOWN;
        case 2:
            return CAVE;
        default:
            return ERROR;
        }
    }
}
