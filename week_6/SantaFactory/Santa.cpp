#include <iostream>
#include "Santa.h"


Santa::Santa()
{}

void Santa::addToBag(int size, const std::string &color, const std::string &toyName, const std::string &name)
{
    SantaFactory santaFactory;
    _bag.push_back(santaFactory.produce(size, color, toyName, name));
}

void Santa::bringToChildren()
{
    while(!_bag.empty()) {
        srand(time(NULL));
        int randomKids = rand() % _poorKids.size();
        toys->setOwner(_poorKids[randomKids]);
        _deliveredToys.push_back(_bag[sizeof(_bag)]);
        _bag.pop_back();

    }
}
