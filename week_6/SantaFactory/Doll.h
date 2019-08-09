#ifndef SANTAFACTORY_DOLL_H
#define SANTAFACTORY_DOLL_H

#include "Toy.h"

class Doll : public Toy
{
public:
    Doll(int size, const std::string &color, const std::string &owner);

    std::string getToyType() override;

};


#endif //SANTAFACTORY_DOLL_H
