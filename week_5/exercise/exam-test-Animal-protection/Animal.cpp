#include "Animal.h"

Animal::Animal(const std::string &name, bool isHealthy) : _name(name), _isHealthy(isHealthy)
{}



Animal::Animal(bool isHealthy) : _isHealthy(isHealthy)
{}

void Animal::heal()
{
    _isHealthy = true;
}

bool Animal::_isAdoptable()
{
    return _isHealthy;
}

std::string Animal::toString()
{
    if(_isHealthy) {
        return _name + " Is not healthy " + std::to_string(_healCost) + " euros, and not adoptable";
    }else{
        return _name + " is healthy, and adoptable.";
    }
}

bool Animal::isHealthy()
{
    return true;
}

int Animal::getHealCost() const
{
    return _healCost;
}
