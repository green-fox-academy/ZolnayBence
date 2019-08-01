#include "AnimalShelter.h"

AnimalShelter::AnimalShelter() {}

AnimalShelter::AnimalShelter(int budget) : _budget(budget) {
    _budget = 50;
}

int AnimalShelter::rescueAnimals(Animal *animal) {
    animalsInTheShelter.push_back(animal);
    return animalsInTheShelter.size();
}

int AnimalShelter::heal() {
    bool wasHealed = false;
    int i;
    for (int i = 0; i < animalsInTheShelter.size(); ++i) {
        if(!animalsInTheShelter[i]->isHealthy() && _budget > animalsInTheShelter[i]->getHealCost() && !wasHealed){
            animalsInTheShelter[i]->heal();
            _budget -= animalsInTheShelter[i]->getHealCost();
            wasHealed = true;
        }
    }
    return wasHealed;
}

void AnimalShelter::addAdopter(std::string name) {
    adoptersName.push_back(name);
}

void AnimalShelter::findNewOwner() {
    if(animalsInTheShelter.size() != 0 && adoptersName.size() != 0){
        srand(time(nullptr));
        animalsInTheShelter.erase(animalsInTheShelter.begin() + (rand()% animalsInTheShelter.size() + 1));
        adoptersName.erase(adoptersName.begin() + (rand()% adoptersName.size() + 1));
    }
}

int AnimalShelter::earnDonation(int donation) {
    _budget += donation;
    return donation;
}

std::string AnimalShelter::toString() {
    std::cout << "Budget: " << _budget << " Euro, "<< std::endl;
    std::cout << "There are " << animalsInTheShelter.size() << " animal(s) and " << adoptersName.size() << " potentional adopter(s)"
    << std::endl;
    for (int i = 0; i < animalsInTheShelter.size(); ++i) {
        animalsInTheShelter[i]->toString();
    }
}




