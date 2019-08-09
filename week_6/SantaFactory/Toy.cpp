#include "Toy.h"

Toy::Toy(int size, int cost, const std::string &color, const std::string &owner) : _size(size), _cost(cost),
                                                                                   _color(color), _owner(owner)
{
    _owner = "";
}


int Toy::getCost() const
{
    return _cost;
}

