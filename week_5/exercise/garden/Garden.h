#ifndef GARDEN_GARDEN_H
#define GARDEN_GARDEN_H

#include <vector>
#include <string>
#include "Plant.h"
#include "Flower.h"

class Garden {
public:
    void flowerWatering(int _waterAmount);

    void addPlant(Plant &plant);

    std::string toString();

private:
    std::vector<Plant*> plants;
};


#endif //GARDEN_GARDEN_H
