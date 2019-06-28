#include <iostream>

int main()
{
    int userNum;
    std::cout << "Please Write in a number!!: " << std::endl;
    std::cin >> userNum;
    for(int i = 0; i <= 10 ; ++i){
        std::cout << userNum * i << std::endl;
    }
    return 0;
}