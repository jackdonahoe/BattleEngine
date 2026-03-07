#include "TableChart.h"

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

int calculateDamage(const Move& move, const Fighter& attacker, const Fighter& defender){
    double typeMult = getEffectiveness(move.element, defender.getType());
    double damage = move.power * typeMult;
    return static_cast<int>(damage);
}

