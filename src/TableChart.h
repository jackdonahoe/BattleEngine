#ifndef TYPECHART_H
#define TYPECHART_H

#include "Move.h"
#include "Fighter.h"

double getEffectiveness(ElementalType attackerMove, ElementalType defender);

int calculateDamage(const Move& move, const Fighter& attacker, const Fighter& defender);

#endif
