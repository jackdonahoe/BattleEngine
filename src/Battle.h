#ifndef BATTLE_H
#define BATTLE_H

#include "Fighter.h"

enum class BattleResult{Player, Enemy};

class Battle{
    private:

    static void displayStats(const Fighter& player, const Fighter& enemy);

    public:
	
    static BattleResult run(Fighter& player, Fighter& enemy);
 

};


#endif
