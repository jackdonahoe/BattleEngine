#ifndef BATTLE_H
#define BATTLE_H

#include "Fighter.h"

enum class BattleResult{Player, Enemy};

class Battle{
    private:

    static void displayStats(const Fighter& player, const Fighter& enemy);
    static void printBattleHeader(const Fighter& player, const Fighter& enemy);
    static void printDivider(char c, int width = 50);
    static void printTurnHeader(int turn);
    static const Move& promptPlayerMove(const Fighter& player);
    

    public:
	
    static BattleResult run(Fighter& player, Fighter& enemy);
 

};


#endif
