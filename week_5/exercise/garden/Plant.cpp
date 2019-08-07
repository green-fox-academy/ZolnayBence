#include "Plant.h"

Plant::Plant() {}

Plant::Plant(int thirstLevel, int waterAmount, const std::string &color) : _thirstLevel(thirstLevel),
                                                                           _waterAmount(waterAmount), _color(color) {}

bool Plant::_isThristy() {
    return _waterAmount < _thirstLevel;
}

void Plant::watering(int amount) {
    _thirstLevel += amount / _absorbtion;
}
