#include "Garden.h"
#include <vector>
#include <string>

Garden::Garden() {}

Garden::Garden(const std::vector<std::vector<std::string>> &flowers, int watering) : _flowers(flowers),
                                                                                     _watering(watering) {}

void Garden::wateringFlowers() {
    _watering++;

}

void Garden::addFlowers() {
    std::vector<std::vector<std::string>> garden;

    _flowers.push_back(garden);

}
