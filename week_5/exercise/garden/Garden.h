#ifndef GARDEN_GARDEN_H
#define GARDEN_GARDEN_H

#include <vector>
#include <string>

class Garden {
public:
    Garden();

    Garden(const std::vector<std::vector<std::string>> &flowers, int watering);

    void wateringFlowers();

    void addFlowers();

protected:
    std::vector<std::vector<std::string>> _flowers;
    int _watering;
};


#endif //GARDEN_GARDEN_H
