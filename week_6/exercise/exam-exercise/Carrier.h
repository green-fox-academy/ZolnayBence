#ifndef EXAM_EXERCISE_CARRIER_H
#define EXAM_EXERCISE_CARRIER_H

#include "Aircrafts.h"

#include <time.h>
#include <vector>
#include <string>

class Carrier
{
public:
    Carrier();

    Carrier(int health, int ammoStorage);

    void add(Aircrafts &aircrafts);

    void fill();

    void fight(Carrier &carrier);

    std::string getStatus();

    void hpDecreasingOverFight(int hv);
private:
    int _health;
    std::vector<Aircrafts*> _aircrafts;
    int _ammoStorage;
};


#endif //EXAM_EXERCISE_CARRIER_H
