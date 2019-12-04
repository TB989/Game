#include <iostream>
#include <stdlib.h>

#include "PrintHelper.h"
#include "Print.h"

#include "Inventory.h"

DIALOG printTown(Inventory &inventory,Quests &quests){
    system("CLS");
    printInventory(inventory);

    startHeader("Old village town");
    std::cout << "You find yourself in a small old town.\n";
    std::cout << "Many of the houses are in dire need of repair.\n";
    std::cout << "\n";
    std::cout << "On a weather-beaten bench you can see an old man.\n";
    std::cout << "He gives you a sign to come nearer.\n";
    std::cout << "\n";
    std::cout << "In the background you hear the clanging of a hammer.\n";
    std::cout << "There must be a smithy nearby.\n";
    finishHeader("Old village town");

    printChoices("Approach the old man.","Go to smithy.","Go to big cave.","Go to forest.");
    switch(getChoice(4)){
    case 1:
        return BENCH;
    case 2:
        return SMITHY;
    case 3:
        return CAVE;
    case 4:
        return FOREST;
    default:
        return ERROR;
    }
}
