#include <iostream>
#include "Plant.h"
#include "Tree.h"
#include "Garden.h"
#include "Flower.h"
int main() {


    Flower flower("orange");
    Garden garden;
    garden.addPlant(flower);
    return 0;
}