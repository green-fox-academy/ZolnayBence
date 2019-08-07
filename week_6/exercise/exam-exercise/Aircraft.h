#ifndef EXAM_EXERCISE_AIRCRAFT_H
#define EXAM_EXERCISE_AIRCRAFT_H

#include <string>

class Aircraft
{
public:

    Aircraft();

    Aircraft(int ammo, int ammunitionCapacity, int baseDamage);

    int fight();

    int refill(int amount);

    virtual std::string getType() = 0;

    std::string getStatus();

    virtual bool isPriority() = 0;

    int getAmmo() const;

    int getAmmunitionCapacity() const;

    int getBaseDamage() const;

protected:

    int _ammo = 0;
    int _ammunitionCapacity = 0;
    int _baseDamage = 0;
};


#endif //EXAM_EXERCISE_AIRCRAFT_H
