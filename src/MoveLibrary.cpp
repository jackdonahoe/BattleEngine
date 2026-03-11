#include "MoveLibrary.h"

namespace Moves{
    Move Heal = {"Heal", 10, BehaviorType::Heal, ElementalType::Normal}; 
    Move Ember = {"Ember", 8, BehaviorType::Damage, ElementalType::Fire};
    Move Scratch = {"Scratch", 5, BehaviorType::Damage, ElementalType::Normal};
    Move WaterGun = {"WaterGun", 8, BehaviorType::Damage, ElementalType::Water};
    Move Tackle = {"Tackle", 5, BehaviorType::Damage, ElementalType::Normal};
    Move VineWhip = {"VineWhip", 8, BehaviorType::Damage, ElementalType::Grass};
    // Move Thunder = {"Thunder", 20, BehaviorType::Damage, ElementalType::Electric, .70}

}

