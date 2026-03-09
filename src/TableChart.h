#ifndef TYPECHART_H
#define TYPECHART_H

#include "Move.h"
#include "Fighter.h"

struct DamageResult{
    int damage;
    double effectiveness;
};

double getEffectiveness(ElementalType attackerMove, ElementalType defender);

DamageResult calculateDamage(const Move& move, const Fighter& attacker, const Fighter& defender);

#endif
