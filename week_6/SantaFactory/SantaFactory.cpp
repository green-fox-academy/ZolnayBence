#include <iostream>
#include "SantaFactory.h"

void SantaFactory::produce()
{
    if(_balance < 0){
        std::cout << "Cannot produce more toys factory is out of money comeback later.";
    }else{
        std::cout << "Factory is producing toys: " + toys->getToyType();
        _balance --;
    }
}
