#include "F35.h"



F35::F35() {}

F35::F35(int ammo, int ammunitionCapacity, int baseDamage) : Aircraft(0, 12, 50) {}

std::string F35::getType()
{
    return "F35";
}

bool F35::isPriority()
{
    return true;
}
