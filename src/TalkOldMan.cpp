#include <iostream>
#include <stdlib.h>

#include "PrintHelper.h"
#include "Print.h"

#include "Inventory.h"

DIALOG printTalkOldMan(Inventory &inventory,Quests &quests){
    system("CLS");
    printInventory(inventory);

    startHeader("Withered bench");
    if(quests.findMushrooms){
        std::cout << "\"Have you found some mushrooms?\".\n";
        finishHeader("Withered bench");

        printChoices("Sell mushrooms.","Go back to town.");
        switch(getChoice(2)){
        case 1:
            inventory.gold+=inventory.mushrooms;
            inventory.mushrooms=0;
            return BENCH;
        case 2:
            return TOWN;
        default:
            return ERROR;
        }
    }
    else{
        std::cout << "\"Hey, young man, do you want to earn some money?\"\n";
        std::cout << "\"Can you pick some mushrooms in the forest and get them to me?\"\n";
        std::cout << "\"I will give you good money for them.\"\n";
        finishHeader("Withered bench");

        printChoices("Look for mushrooms.","Go back to town.");
        switch(getChoice(2)){
        case 1:
            quests.findMushrooms=true;
            return BENCH;
        case 2:
            return TOWN;
        default:
            return ERROR;
        }
    }
}
