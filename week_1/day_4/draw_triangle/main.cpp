#include <iostream>

int main()
{
    for (int i = 1; i < 10; i += 2) {
        for (int k = 0; k < (4 - i / 2); k++) {
            std::cout << " " << std::endl;
        }
        for (int j = 0; j < i; j++) {
            std::cout << "*" << std::endl;
        }
        std::cout << "" << std::endl;
    }

    return 0;
}