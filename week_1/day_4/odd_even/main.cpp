#include <iostream>

int main() {
    int input;


    std::cout << "Hello, Please write a number!: " << std::endl;
    std::cin >> input;
    if(input % 2 == 0){
        std::cout << input << " is even" << std::endl;
    }else{
        std::cout << input << " is odd" << std::endl;
    }

    return 0;
}