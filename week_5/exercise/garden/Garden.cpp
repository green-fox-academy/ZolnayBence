#include "Garden.h"
#include <vector>
#include <string>
#include <iostream>

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

void Garden::gardenStatus() {
    for (int i = 0; i < plants.size(); ++i) {
        if(plants[i]->_isThristy()){
            std::cout << "The " << plants[i]->getColor() << " " << plants[i]->getPlantType() << " Needs water" << std::endl;
        }else{
            std::cout << "The " << plants[i]->getColor() << " " << plants[i]->getPlantType() << " doesn't needs water" << std::endl;
        }
    }

}

