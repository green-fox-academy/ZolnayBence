#include "apple.h"
#include <vector>
#include <iostream>
std::string getApple()
{
    return "apple";
}
int testInteger(std::vector<int> sumOfApples){
    int sum = 0;
    for(int i = 0; i < sumOfApples.size(); ++i){
       sum += sumOfApples[i];
    }
    return sum;
}






