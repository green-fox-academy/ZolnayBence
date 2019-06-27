#include <iostream>

int main() {
    int a1;

    std::cout << "Please ENTER a number." << std::endl;
    std::cin >> a1;
    if (a1 <= 0) {
        std::cout << " Not enough." << std::endl;
    } else if (a1 == 1) {
        std::cout << "One." << std::endl;
    } else if (a1 == 2) {
        std::cout << "Two." << std::endl;
    }else{
        std::cout << "A lot"<< std::endl;
    }



return 0;
}