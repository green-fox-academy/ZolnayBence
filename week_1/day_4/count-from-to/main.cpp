#include <iostream>

int main()
{
    int num1;
    int num2;
    std::cout << "Please add a number:  " << std::endl;
    std::cin >> num1;
    std::cout << "Please add a number:  " << std::endl;
    std::cin >> num2;

        if (num1 < num2) {
            for(int i = num1; i < num2; ++i){
                std::cout << i << std::endl;
            }
        }else{
            std::cout << "The second number should be bigger!" << std::endl;
        }


    return 0;
}