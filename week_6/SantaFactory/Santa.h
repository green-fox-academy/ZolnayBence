#ifndef SANTAFACTORY_SANTA_H
#define SANTAFACTORY_SANTA_H

#include "SantaFactory.h"

#include <vector>
#include <time.h>

class Santa
{
public:
    int addToBag();
    void bringToChildren();
protected:
    SantaFactory* santaFactory;
    std::vector<Toy*> _bag;
    std::vector<std::string> _poorkids;
};


#endif //SANTAFACTORY_SANTA_H
