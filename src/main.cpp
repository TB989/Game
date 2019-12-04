#include "Inventory.h"
#include "Quests.h"
#include "Print.h"

#include <iostream>
#include <fstream>

int main(){
    DIALOG (*fcnPtrs[15])(Inventory&,Quests&);
    fcnPtrs[TOWN]=printTown;
    fcnPtrs[BENCH]=printBench;
    fcnPtrs[TALK_MAN]=printTalkOldMan;
    fcnPtrs[SMITHY]=printSmithy;
    fcnPtrs[TALK_SMITH]=printTalkToBlacksmith;
    fcnPtrs[FOREST]=printForest;
    fcnPtrs[CAVE]=printCave;
    fcnPtrs[ATTACK]=printAttackTroll;

    Inventory inventory={0,0,false};
    Quests quests={false};

    bool running=true;
    DIALOG dialog=TOWN;
    DIALOG (*fcnPtr)(Inventory&,Quests&);
    while(running){
        fcnPtr=fcnPtrs[dialog];
        dialog=fcnPtr(inventory,quests);

        switch(dialog){
        case ERROR:
            return -1;
        case EXIT:
            running=false;
            break;
        default:
            continue;
        }
    }
}
