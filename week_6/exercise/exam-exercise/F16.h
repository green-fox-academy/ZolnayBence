#ifndef EXAM_EXERCISE_F16_H
#define EXAM_EXERCISE_F16_H

#include "Aircrafts.h"

class F16 : public Aircrafts
{
public:
    F16(int aircraftAmmunition, int ammunitionCapacity, int baseDamage);

    std::string getType() override;

    bool isPriority() override;

};


#endif //EXAM_EXERCISE_F16_H
