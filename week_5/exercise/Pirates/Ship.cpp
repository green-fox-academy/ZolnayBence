#include "Ship.h"
#include <iostream>
Ship::Ship() {}

void Ship::addPirates(Pirates *pirates) {
    if(pirates->isCaptain()){
        if(_captainCount >= 1){
            std::cout << "One cap'n has been yet enough on th' seas, can't add pirates";
        } else {
            _pirates.push_back(pirates);
            _captainCount++;
            std::cout << " cap'n has been added t' th' ship" << std::endl;
        }
    }

}

std::vector<std::string> Ship::getPoorPirates() {
    std::vector<std::string> poorPirates;
    for(int i = 0; i < _pirates.size(); ++i){
        if(_pirates[i]->hasWoodenLeg() && _pirates[i]->getGold() < 15){
            poorPirates.push_back(_pirates[i]->getName());
        }
    }
    return poorPirates;
}

int Ship::getGolds() {
    int gold = 0;
    for(int i = 0; i < _pirates.size(); i++){
        gold += _pirates[i]->getGold();
    }
    return gold;
}

void Ship::lastDayOnTheShip() {
    for(int i = 0; i < _pirates.size(); i++){
        _pirates[i]->party();
    }

}

void Ship::prepareForBattle() {
    for(int i = 0; i < 5; i++) {
        for (int j = 0; j < _pirates.size(); j++) {
            _pirates[i]->work();
        }
    }
    lastDayOnTheShip();
}
