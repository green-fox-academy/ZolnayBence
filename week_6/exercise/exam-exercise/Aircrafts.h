#ifndef EXAM_EXERCISE_AIRCRAFTS_H
#define EXAM_EXERCISE_AIRCRAFTS_H

#include <string>

class Aircrafts
{
public:

    Aircrafts();

    Aircrafts(int ammo, int ammunitionCapacity, int baseDamage);

    int fight();

    int refill(int amount);

    virtual std::string getType() = 0;

    std::string getStatus();

    virtual bool isPriority() = 0;

protected:

    int _ammo = 0;
    int _ammunitionCapacity = 0;
public:
    int getAmmo() const;

    int getAmmunitionCapacity() const;

    int getBaseDamage() const;

protected:
    int _baseDamage = 0;
};


#endif //EXAM_EXERCISE_AIRCRAFTS_H
