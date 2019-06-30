#include <iostream>
int doubling(int baseNum);
int main()
{
    int baseNum = 123;
    doubling(baseNum);
    std::cout << doubling(baseNum) << std::endl;
    return 0;
}
int doubling(int baseNum){
    return baseNum * 2;
}
