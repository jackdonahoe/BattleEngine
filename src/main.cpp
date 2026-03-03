#include <iostream>
#include "Battle.h"


int main(){

    Fighter player("Pikachu", 30, 6);
    Fighter enemy("Magikarp", 25, 2);

    BattleResult result = Battle::run(player, enemy);

    std::cout << "And the winner is...\n";
    if(result == BattleResult::Player){
	std::cout << player.getName();
    }else{
	std::cout << enemy.getName();
    }

    return 0;
}
