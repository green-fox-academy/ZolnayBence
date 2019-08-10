#include "Santa.h"

int Santa::addToBag()
{
    for (int i = 0; i < _bag.size(); ++i) {
        santaFactory[i].produce();
        //_bag.push_back();
    }

    return _bag.size();
}

void Santa::bringToChildren()
{
    for (int i = 0; i < _bag.size(); ++i) {

    }
}
