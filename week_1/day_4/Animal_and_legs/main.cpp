#include <iostream>
#include <string>
int main() {
    std::string chicken;
    int chickens;
    int pigs ;

    std::cout << "Please Enter how many chickens you have on the farm: " << std::endl;
    std::cin >> chickens;

    std::cout << "Please Enter how mnay pigs you have on the farm: " << std::endl;
    std::cin >> pigs;

    int overallLegs = (chickens * 2) + (pigs * 4);

    std::cout << overallLegs << " Legs running around the farm!"<< std::endl;

    return 0;
}
