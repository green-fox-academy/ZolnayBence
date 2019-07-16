#include <iostream>
#include "Mammal.h"
#include "Reptile.h"
#include "Bird.h"
int main( int argc, char* args[] )
{
    Reptile reptile("Crocodile", FEMALE);
    Mammal mammal("Koala", MALE);
    Bird bird("Parrot", MALE);

    std::cout << "How do you breed?" << std::endl;
    std::cout << "A " << reptile.getName() << " is breeding by " << reptile.breed() << std::endl;
    std::cout << "A " << mammal.getName() << " is breeding by " << mammal.breed() << std::endl;
    std::cout << "A " << bird.getName() << " is breeding by " << bird.breed() << std::endl;
}