#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter first number!: " << std::endl;
    std::cin >> num1;
    std::cout << "Enter second number!: " << std::endl;
    std::cin >> num2;

    if(num1>num2){
        std::cout << "First number " << num1 << " is the largest" << std::endl;
    }else{
        std::cout << "Second number " << num2 << " is the largest" << std::endl;
    }
    return 0;
}