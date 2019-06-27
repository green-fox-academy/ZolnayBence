#include <iostream>

int main(int argc, char* args[]) {
    double sideofcube = 10;
    double surfaceofcube = 6 * (sideofcube * sideofcube);
    double volumeofcube = sideofcube * sideofcube * sideofcube;
    std::cout << "the volume of the cube is: "<< volumeofcube << std::endl;
    std::cout << "the surface of the cube is: "<< surfaceofcube << std::endl;
    return 0;
}