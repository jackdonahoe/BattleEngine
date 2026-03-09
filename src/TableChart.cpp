#include "TableChart.h"
#include <random>

static const double chart[4][4] = {

    //Defender: Normal, Water, Fire, Grass

    {1.0, 1.0, 1.0, 1.0}, // Attack Normal
    {1.0, 1.0, 2.0, 0.5}, // Attack Water
    {1.0, 0.5, 1.0, 2.0}, // Attack Fire
    {1.0, 2.0, 0.5, 1.0}  // Attack Grass

};

double getEffectiveness(ElementalType attackerMove, ElementalType defender){
    int row = static_cast<int>(attackerMove);
    int column = static_cast<int>(defender);
	
    return chart[row][column];
}

DamageResult calculateDamage(const Move& move, const Fighter& attacker, const Fighter& defender){
    //Defined random seed at first fuction call
    static std::random_device rd;
    static std::mt19937 rng(rd());
    static std::uniform_real_distribution<double> dist(0.85, 1.0);
    double randomMult = dist(rng);
    double typeMult = getEffectiveness(move.element, defender.getType());
    double damage = move.power;
    damage *= typeMult;
    damage *= randomMult;
    if(damage <= 1) return {1, 1.0};
    return {static_cast<int>(damage), typeMult};
}

