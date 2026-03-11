#ifndef FIGHTER_H
#define FIGHTER_H

#include <string>
#include "Move.h"
#include <vector>

class Fighter {

    private:

	std::string name;
	int maxHealth;
	int defense;
	ElementalType type;


	int currentHealth;
	std::vector<Move> moves;

    public:
	Fighter(const std::string &name, int maxHealth, int defense, ElementalType type);

	const std::string &getName() const;  
	int getCurrentHealth() const;
	bool isAlive() const;
	void takeDamage(int amount);
	const std::vector<Move>& getMoves() const;
	void heal(int amount);
	void addMove(const Move& move);
	ElementalType getType() const;
	int getDefense() const;

	
}; 

#endif
