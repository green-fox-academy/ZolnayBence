#include <iostream>
#include "Pirates.h"
#include "Ship.h"
int main() {
    Pirates BlackBeard = Pirates( true, "BlackBeard", true);

    std::cout << BlackBeard.toString() << std::endl;
    BlackBeard.party();
    std::cout << BlackBeard.getHealth() << std::endl;

    Ship LaConcorde = Ship();
    LaConcorde.addPirates(&BlackBeard);
    LaConcorde.addPirates(&BlackBeard); //hopefully writes out we already have one cap
    Pirates edward = Pirates(false, "Edward", true);
    LaConcorde.addPirates(&edward);

    for(int i = 0; i < LaConcorde.getPoorPirates().size(); i++){
         std::cout << LaConcorde.getPoorPirates()[i] << ", " << std::endl;
    }
    std::cout << std::endl;

    LaConcorde.lastDayOnTheShip();
    LaConcorde.prepareForBattle();
    std::cout << LaConcorde.getGolds() << std::endl;
    return 0;
}