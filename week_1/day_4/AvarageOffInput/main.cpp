#include <iostream>

int main() {
    int num1;
    int num2;
    int num3;
    int num4;
    int num5;

    std::cout << "please enter a number: " << std::endl;
    std::cin >> num1;

    std::cout << "please enter a number: " << std::endl;
    std::cin >> num2;

    std::cout << "please enter a number: " << std::endl;
    std::cin >> num3;

    std::cout << "please enter a number: " << std::endl;
    std::cin >> num4;

    std::cout << "please enter a number: " << std::endl;
    std::cin >> num5;

    int sum = num1 + num2 + num3 + num4 + num5;
    std::cout << sum << " The total of your numbers." << std::endl;
    float aver = (float)(num1 + num2 + num3 + num4 + num5) / 5;
    std::cout << aver << " The average of your numbers." << std::endl;
    return 0;
}