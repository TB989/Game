#ifndef PRINT_H_INCLUDED
#define PRINT_H_INCLUDED

#include "Inventory.h"
#include "Quests.h"

#include "Dialog.h"

DIALOG printTown(Inventory &inventory,Quests &quests);
DIALOG printBench(Inventory &inventory,Quests &quests);
DIALOG printTalkOldMan(Inventory &inventory,Quests &quests);
DIALOG printSmithy(Inventory &inventory,Quests &quests);
DIALOG printTalkToBlacksmith(Inventory &inventory,Quests &quests);

DIALOG printCave(Inventory &inventory,Quests &quests);
DIALOG printAttackTroll(Inventory &inventory,Quests &quests);

DIALOG printForest(Inventory &inventory,Quests &quests);

#endif // PRINT_H_INCLUDED
