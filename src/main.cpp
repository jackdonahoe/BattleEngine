#include <iostream>
#include "Battle.h"
#include "MoveLibrary.h"


int main(){

    Fighter player("Pikachu", 30, 6);
    player.addMove(Moves::Thunderbolt);
    player.addMove(Moves::Heal);


    Fighter enemy("Magikarp", 25, 2);
    enemy.addMove(Moves::Splash);

    BattleResult result = Battle::run(player, enemy);

    std::cout << "And the winner is...\n";
    if(result == BattleResult::Player){
	std::cout << player.getName();
    }else{
	std::cout << enemy.getName();
    }

    return 0;
}
