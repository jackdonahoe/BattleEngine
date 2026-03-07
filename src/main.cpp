#include <iostream>
#include "Battle.h"
#include "MoveLibrary.h"


int main(){

    Fighter player("Squirtle", 50, ElementalType::Water);
    player.addMove(Moves::Tackle);
    player.addMove(Moves::WaterGun);
    player.addMove(Moves::Heal);

    Fighter enemy("Charmander", 50, ElementalType::Fire);
    enemy.addMove(Moves::Scratch);
    enemy.addMove(Moves::Ember);
    enemy.addMove(Moves::Heal);

    BattleResult result = Battle::run(player, enemy);

    std::cout << "And the winner is...\n";
    if(result == BattleResult::Player){
	std::cout << player.getName();
    }else{
	std::cout << enemy.getName();
    }

    return 0;
}
