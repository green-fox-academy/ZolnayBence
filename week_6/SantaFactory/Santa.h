#ifndef SANTAFACTORY_SANTA_H
#define SANTAFACTORY_SANTA_H

#include "SantaFactory.h"

#include <vector>
#include <time.h>


class Santa
{
public:
    Santa();

    void addToBag(int size, const std::string &color, const std::string &toyName ,const std::string &name);

    void bringToChildren();
private:
    Toy* toys;
    std::vector<Toy> _bag;
    std::vector<std::string> _poorKids = {"Lacika", "Sanyika", "Micike", "Macika", "Anita",
                                                                                   "Attila"};
    std::vector<Toy> _deliveredToys;
};


#endif //SANTAFACTORY_SANTA_H
