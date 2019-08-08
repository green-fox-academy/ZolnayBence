#include <iostream>
#include "Plant.h"
#include "Tree.h"
#include "Garden.h"
#include "Flower.h"
int main() {


    Flower flowerYellow("yellow");

    Flower flowerBlue("blue");

    Tree treePurple("purple");

    Tree treeOrange("orange");

    Garden garden;

    garden.addPlant(flowerYellow);
    garden.addPlant(flowerBlue);
    garden.addPlant(treeOrange);
    garden.addPlant(treePurple);

    garden.gardenStatus();

    std::cout << std::endl;
    std::cout << "Watering with 40" << std::endl;

    garden.flowerWatering(40);

    garden.gardenStatus();

    std::cout << std::endl;
    std::cout << "Watering with 70" << std::endl;

    garden.flowerWatering(70);

    garden.gardenStatus();

    return 0;
}