#ifndef PIRATES_SHIP_H
#define PIRATES_SHIP_H

#include <vector>
#include "Pirates.h"

class Ship {
public:
    Ship();

    void addPirates(Pirates *pirates);

    std::vector<std::string> getPoorPirates();

    int getGolds();

    void lastDayOnTheShip();

    void prepareForBattle();

private:
    std::vector<Pirates *> _pirates;
    int _captainCount = 0;
};


#endif //PIRATES_SHIP_H
