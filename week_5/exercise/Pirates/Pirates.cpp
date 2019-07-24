#include "Pirates.h"
#include <iostream>

Pirates::Pirates(bool isCaptain, const std::string &name, bool woodenLegs) : _isCaptain(isCaptain), _name(name),
                                                                             _woodenLegs(woodenLegs) {}

void Pirates::work() {
    if(_isCaptain){
        _gold += 10;
        _health -= 5;
    } else {
        _gold++;
        _health--;
    }
    std::cout << getName() << " is currently busy working." <<std::endl;
}

void Pirates::party() {
    if(_isCaptain){
        _health += 10;
    } else {
        _health++;
    }
    std::cout << getName() << " Is currently on a party." << std::endl;
}

std::string Pirates::toString() {
    if(_woodenLegs) {
        return "ahoy me name be" + _name + ". 'n i 'ave a wooden leg 'n " + std::to_string(_gold) + " i 'ave amount o' gold";
    } else {
        return "ahoy me name be" + _name + ". 'n i don't 'ave a wooden leg 'n " + std::to_string(_gold) + " i 'ave amount o' gold";
    }
}

bool Pirates::isCaptain() const {
    return _isCaptain;
}

int Pirates::getGold() const {
    return _gold;
}

const std::string &Pirates::getName() const {
    return _name;
}

bool Pirates::hasWoodenLeg() const {
    return _woodenLegs;
}

int Pirates::getHealth() const {
    return _health;
}
