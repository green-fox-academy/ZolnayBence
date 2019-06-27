#include <iostream>
#include <string>
int main() {

    double mile =  0.621371192;
    std::cout << "Enter Mile(s)" << std::endl;
    std::cin >> mile;
    std::cout <<  mile * 1.609344 << "Miles in km" << std::endl;

    return 0;
}