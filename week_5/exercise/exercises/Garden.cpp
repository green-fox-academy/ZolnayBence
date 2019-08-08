#include "Garden.h"

Garden::Garden(const std::vector<std::vector<std::string>> &flowers, int flowerThrist,
               const std::vector<std::vector<std::string>> &field, int watering) : Flower(flowers, flowerThrist),
                                                                                   field(field), _watering(watering)
{}

int Garden::getWatering() const
{
    return _watering;
}
