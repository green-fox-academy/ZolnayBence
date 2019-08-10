#ifndef SANTAFACTORY_DOTTEDBALL_H
#define SANTAFACTORY_DOTTEDBALL_H

#include "Toy.h"

class DottedBall : public Toy
{
public:
    DottedBall(int size, const std::string &color, const std::string &owner);

   // std::string getToyType() override;

};


#endif //SANTAFACTORY_DOTTEDBALL_H
