#ifndef EXERCISES_GARDEN_H
#define EXERCISES_GARDEN_H

#include "Flower.h"
#include "Tree.h"

#include <vector>
#include <string>

class Garden : public Flower, public Tree
{
public:

    Garden(const std::vector<std::vector<std::string>> &flowers, int flowerThrist,
           const std::vector<std::vector<std::string>> &field, int watering);

    int getWatering() const;

    std::vector<std::vector<std::string>> field;
private:

    int _watering;

};


#endif //EXERCISES_GARDEN_H
