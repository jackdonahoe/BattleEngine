#ifndef FIGHTER_H
#define FIGHTER_H

#include <string>
#include "Move.h"
#include <vector>

class Fighter {

    private:
	std::string name;
	int maxHealth;
	int currentHealth;
	int atkDmg;
	int healAmount;
	std::vector<Move> moves;

    public:
	Fighter(const std::string &name, int maxHealth, int atkDmg);

	const std::string &getName() const;  
	int getCurrentHealth() const;
	int getAttackDamage() const;
	bool isAlive() const;
	void takeDamage(int amount);
	const std::vector<Move>& getMoves() const;
	void heal(int amount);


	
}; 

#endif
