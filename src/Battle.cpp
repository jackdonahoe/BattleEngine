#include "Battle.h"
#include <iostream>


void Battle::displayStats(const Fighter& player, const Fighter& enemy){
    std::cout << "##############\n";
    std::cout << "CURRENT STATS:\n";
    std::cout << player.getName() << " Health --> "<< player.getCurrentHealth() << std::endl;
    std::cout << enemy.getName() << " Health --> "<< enemy.getCurrentHealth()<< std::endl;
    std::cout << "##############\n";

}


BattleResult Battle::run(Fighter& player, Fighter& enemy){

    while(player.isAlive() && enemy.isAlive()){
	std::cout << "*****************************************************\n";
	displayStats(player, enemy);
	
	std::cout << player.getName() << " deals " 
		  << player.getAttackDamage() << "dmg to " 
		  << enemy.getName() << std::endl;

	enemy.takeDamage(player.getAttackDamage());

	displayStats(player, enemy);

	if(!enemy.isAlive()){
	    return BattleResult::Player; 
	}

	std::cout << enemy.getName() << " now attacks the player dealing " 
		  << enemy.getAttackDamage() << "dmg to "
		  << player.getName() << std::endl;
		
	player.takeDamage(enemy.getAttackDamage());

	if(!player.isAlive()){
	    return BattleResult::Enemy;
	}
    }
 
    return BattleResult::Player; 
    
}



 




