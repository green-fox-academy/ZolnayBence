#ifndef EXAM_EXERCISE_F35_H
#define EXAM_EXERCISE_F35_H


#include "Aircrafts.h"

class F35 : public Aircrafts
{
public:
    F35(int aircraftAmmunition, int ammunitionCapacity, int baseDamage);

    F35();

    std::string getType() override;

    bool isPriority() override;

};


#endif //EXAM_EXERCISE_F35_H
