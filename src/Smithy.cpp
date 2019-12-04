#include <iostream>
#include <stdlib.h>

#include "PrintHelper.h"
#include "Print.h"

#include "Inventory.h"

DIALOG printSmithy(Inventory &inventory,Quests &quests){
    system("CLS");
    printInventory(inventory);

    startHeader("Smithy");
    std::cout << "The blacksmith seems to be busy working.\n";
    finishHeader("Smithy");

    printChoices("Talk to blacksmith.","Go back to town.");
    switch(getChoice(2)){
    case 1:
        return TALK_SMITH;
    case 2:
        return TOWN;
    default:
        return ERROR;
    }
}
