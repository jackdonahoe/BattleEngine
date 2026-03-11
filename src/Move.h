#ifndef MOVE_H
#define MOVE_H

#include <string>

enum class BehaviorType{ None, Damage, Heal };
enum class ElementalType{ Normal, Water, Fire, Grass }; 

struct Move{

    std::string name;
    int power;
    BehaviorType behavior;
    ElementalType element;
    //double accuracy;

}; 

#endif
