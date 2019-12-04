#ifndef INVENTORY_H_INCLUDED
#define INVENTORY_H_INCLUDED

struct Inventory{
    int gold;
    int mushrooms;
    bool sword;
};

void printInventory(Inventory inventory);

bool hasGold(Inventory inventory);
bool hasMushrooms(Inventory inventory);
bool hasSword(Inventory inventory);

#endif // INVENTORY_H_INCLUDED
