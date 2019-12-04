#include <iostream>
#include <stdlib.h>

#include "PrintHelper.h"
#include "Print.h"

#include "Inventory.h"

DIALOG printTalkToBlacksmith(Inventory &inventory,Quests &quests){
    system("CLS");
    printInventory(inventory);

    startHeader("Smithy");
    if(inventory.gold>=30){
        std::cout << "\"Do you not see, that I am busy?\"\n";
        std::cout << "\"Do you have enough money?\"\n";
        std::cout << "\"Do you want to buy the sword?\"\n";
        finishHeader("Smithy");

        printChoices("Buy a sword.","Go back to town.");
        switch(getChoice(2)){
        case 1:
            inventory.sword=true;
            inventory.gold-=30;
            return SMITHY;
        case 2:
            return TOWN;
        default:
            return ERROR;
        }
    }
    else{
        std::cout << "\"Do you not see, that I am busy?\"\n";
        std::cout << "\"What do you want to buy? A sword?\"\n";
        std::cout << "\"That will cost you 30 gold.\"\n";
        std::cout << "\"Come back, when you have enough money.\"\n";
        finishHeader("Smithy");

        printChoices("Go back to town.");
        switch(getChoice(1)){
        case 1:
            return TOWN;
        default:
            return ERROR;
        }
    }
}
