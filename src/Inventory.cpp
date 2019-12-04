#include <iostream>

#include "Inventory.h"
#include "PrintHelper.h"

void printInventory(Inventory inventory){
    startHeader("Inventory");
    std::cout << "Gold: " << inventory.gold;
    if(hasMushrooms(inventory)){
        std::cout << ", Mushrooms: " << inventory.mushrooms;
    }
    if(hasSword(inventory)){
        std::cout << ", old rusty sword";
    }
    std::cout << "\n";
    finishHeader("Inventory");
}

bool hasGold(Inventory inventory){
    return inventory.gold>0;
}

bool hasMushrooms(Inventory inventory){
    return inventory.mushrooms>0;
}

bool hasSword(Inventory inventory){
    return inventory.sword;
}
