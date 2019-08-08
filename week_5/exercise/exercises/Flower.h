#ifndef EXERCISES_FLOWER_H
#define EXERCISES_FLOWER_H

#include <vector>
#include <string>

class Flower
{
public:
    Flower(const std::vector<std::vector<std::string>> &flowers, int flowerThrist);

protected:
    std::vector<std::vector<std::string>> _flowers;
    int _flowerThrist = 0;
};


#endif //EXERCISES_FLOWER_H
