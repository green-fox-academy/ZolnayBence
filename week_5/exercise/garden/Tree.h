#ifndef GARDEN_TREE_H
#define GARDEN_TREE_H

#include "Plant.h"


class Tree : public Plant{
public:
    Tree(const std::string &color);

    std::string getPlantType() override;

};


#endif //GARDEN_TREE_H
