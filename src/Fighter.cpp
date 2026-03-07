#include "Fighter.h"

Fighter::Fighter(const std::string &name, int maxHealth, ElementalType type) 
    : name(name), 
    maxHealth(maxHealth), 
    currentHealth(maxHealth),
    type(type)
{

    Move doNothing;
    doNothing.name = "Do Nothing";
    doNothing.power = 0;
    doNothing.behavior = BehaviorType::None;
    doNothing.element = ElementalType::Normal;
    moves.push_back(doNothing);
    
}

const std::string& Fighter::getName() const{
    return name;
}

int Fighter::getCurrentHealth() const{
    return currentHealth;
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

ElementalType Fighter::getType() const{
    return type;
}






