#include <iostream>

int main() {

    int ans;

    std::cout << "Please Enter the hours you're coding a day: " << std::endl;

    std::cin >> ans;
    std::cout << ans * (17*5);
    std::cout << " = the time you spent with coding in this semester" << std::endl;


    std::cout << ans * 5;
    std::cout << " = the time you spent with coding in this week" << std::endl;
    return 0;
}