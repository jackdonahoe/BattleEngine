#ifndef MOVE_H
#define MOVE_H

#include <string>

enum class MoveType{ None, Damage, Heal };


struct Move{

    std::string name;
    int power;
    MoveType type;


}; 

#endif
