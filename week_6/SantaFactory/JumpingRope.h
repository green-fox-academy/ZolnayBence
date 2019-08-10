#ifndef SANTAFACTORY_JUMPINGROPE_H
#define SANTAFACTORY_JUMPINGROPE_H

#include "Toy.h"

class JumpingRope : public Toy
{
public:
    JumpingRope(int size, const std::string &color, const std::string &owner);

  //  std::string getToyType() override;

};


#endif //SANTAFACTORY_JUMPINGROPE_H
