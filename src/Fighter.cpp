#include "Fighter.h"

Fighter::Fighter(const std::string &name, int maxHealth, int atkDmg) 
    : name(name), 
    maxHealth(maxHealth), 
    currentHealth(maxHealth), 
    atkDmg(atkDmg)   
{
    healAmount = 10;

    Move doNothing;
    doNothing.name = "Do Nothing";
    doNothing.power = 0;
    doNothing.type = MoveType::None;
    moves.push_back(doNothing);
    
}

const std::string& Fighter::getName() const{
    return name;
}

int Fighter::getCurrentHealth() const{
    return currentHealth;
}

int Fighter::getAttackDamage() const{
    return atkDmg;
}

bool Fighter::isAlive() const{
    return currentHealth > 0;
}


void Fighter::takeDamage(int amount){
    if(amount <= 0) return;
    if(amount > currentHealth){
	currentHealth = 0;
	return;
    }
    currentHealth -= amount;
}

void Fighter::heal(int amount){
    currentHealth += amount;
    if(currentHealth > maxHealth){
	currentHealth = maxHealth;
    }
}

const std::vector<Move>& Fighter::getMoves() const{
    return moves;
}

void Fighter::addMove(const Move& move){
    moves.push_back(move);
}






