#include "Fighter.h"

Fighter::Fighter(const std::string &name, int maxHealth, int atkDmg) 
    : name(name), 
    maxHealth(maxHealth), 
    currentHealth(maxHealth), 
    atkDmg(atkDmg)
{}

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




