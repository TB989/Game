#include <iostream>
#include <stdlib.h>

#include "PrintHelper.h"
#include "Print.h"

#include "Inventory.h"

DIALOG printBench(Inventory &inventory,Quests &quests){
    system("CLS");
    printInventory(inventory);

    startHeader("Withered bench");
    std::cout << "The old man wants to tell you something.\n";
    finishHeader("Withered bench");

    printChoices("Talk to the old man.","Go back to town.");
    switch(getChoice(2)){
    case 1:
        return TALK_MAN;
    case 2:
        return TOWN;
    default:
        return ERROR;
    }
}
