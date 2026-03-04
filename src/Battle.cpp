#include "Battle.h"
#include <iostream>
#include <limits>


void Battle::displayStats(const Fighter& player, const Fighter& enemy){
    std::cout << "CURRENT STATS:\n";
    std::cout << player.getName() << " HP: "<< player.getCurrentHealth() << '\n';
    std::cout << enemy.getName() << " HP: "<< enemy.getCurrentHealth()<< '\n';

}

void Battle::printBattleHeader(const Fighter& player, const Fighter& enemy){
    std::cout << "==================================================\n";
    std::cout << player.getName() << " vs " << enemy.getName() << '\n';
    std::cout << "==================================================\n";
}

//Width has defult value of 50
void Battle::printDivider(char c, int width){
    for(int i = 0; i < width; i++){
	std::cout << c;
    }
    std::cout << '\n';
}

void Battle::printTurnHeader(int turn){
    std::cout << "** TURN (" << turn << ") **\n";
}


const Move& Battle::promptPlayerMove(const Fighter& player){

 const std::vector<Move>& playerMoves = player.getMoves();

	std::cout << "Pick your move\n";
	for(size_t i = 0; i < playerMoves.size(); i++){
	    std::cout << (i + 1) << ") "<< playerMoves[i].name << std::endl;
	}

	int movePicked;
	while(true){
	std::cout << "> ";
	std::cin >> movePicked;
	    if(std::cin.fail()){
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		std::cerr << "Invalid input try again\n";
		continue;
	    }else if((movePicked < 1) || (static_cast<size_t>(movePicked) > playerMoves.size())){
		//not in range of moves
		std::cerr << "Not a valid move, please pick a move in the list.\n";
		continue;
	    }
	    break;
	}

	movePicked -=1;
	return playerMoves[movePicked];
}



BattleResult Battle::run(Fighter& player, Fighter& enemy){

    const std::vector<Move>& enemyMoves = enemy.getMoves();
    int turn = 1;

    printBattleHeader(player, enemy);


    while(player.isAlive() && enemy.isAlive()){

	std::cout << "\n\n";
	printDivider('=');
	printTurnHeader(turn);
	displayStats(player, enemy);
	printDivider('-');

	const Move& chosenPlayerMove = promptPlayerMove(player);

	if(chosenPlayerMove.power > 0){
	enemy.takeDamage(chosenPlayerMove.power);
	std::cout << player.getName() << " uses " << 
	    chosenPlayerMove.name << " and deals " << 
	    chosenPlayerMove.power << " dmg\n";
	}else{
	    std::cout << player.getName() << " does nothing\n";
	}
	
	std::cout << "It is now " << enemy.getName() << "'s turn\n";

	if(!enemy.isAlive()){
	    return BattleResult::Player; 
	}


	int enemyMoveIndex = 1;
	std::cout << enemy.getName() << " uses " << enemyMoves[enemyMoveIndex].name <<
	    " and deals " << enemyMoves[enemyMoveIndex].power << " dmg\n";
	player.takeDamage(enemyMoves[enemyMoveIndex].power);
	turn++;



	if(!player.isAlive()){
	    return BattleResult::Enemy;
	}
    }
 
    return BattleResult::Player; 
    
}



 




