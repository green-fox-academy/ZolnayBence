#include "Garden.h"
#include <vector>
#include <string>

void Garden::addPlant(Plant &plant) {
    plants.push_back(&plant);
}

void Garden::flowerWatering(int _waterAmount) {
    int counter = 0;

    for (int i = 0; i < plants.size(); ++i) {
        if(plants[i]->_isThristy()) {
            counter++;
        }
    }

    int waterPerPlant =_waterAmount / counter;
    for (int j = 0; j < plants.size(); ++j) {
        if(plants[j]->_isThristy() ){
           plants[j]->watering(waterPerPlant);
        }

    }
}
