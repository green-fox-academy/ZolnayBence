#include "Plant.h"


Plant::Plant(int thirstLevel, float absorbtion, const std::string &color) : _thirstLevel(thirstLevel),
                                                                           _absorbtion(absorbtion), _color(color) {}

bool Plant::_isThristy() {
    return _waterAmount < _thirstLevel;
}

void Plant::watering(int amount) {
    _thirstLevel += amount * _absorbtion;
}

std::string Plant::toString()
{
    return "The " + getPlantType() + " ";
}
