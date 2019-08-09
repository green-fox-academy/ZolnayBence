#ifndef SANTAFACTORY_SANTA_H
#define SANTAFACTORY_SANTA_H

#include "SantaFactory.h"
#include "Children.h"

#include <vector>
#include <time.h>

class Santa
{
public:
    int addToBag();
    void bringToChildren();
protected:
    Toy* toys;
    Children* children;
    SantaFactory* santaFactory;
    std::vector<Toy*> _bag;
    std::vector<Children*> _poorkids;
};


#endif //SANTAFACTORY_SANTA_H
