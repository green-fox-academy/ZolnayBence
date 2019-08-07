#ifndef EXAM_EXERCISE_F35_H
#define EXAM_EXERCISE_F35_H


#include "Aircraft.h"

class F35 : public Aircraft
{
public:


    F35(int ammo, int ammunitionCapacity, int baseDamage);

    F35();


    std::string getType() override;

    bool isPriority() override;

};


#endif //EXAM_EXERCISE_F35_H
