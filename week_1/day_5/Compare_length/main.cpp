#include <iostream>

int main()
{
    int p1[] {1, 2, 3};
    int p2[] {4, 5};
    int sizeofp1 = sizeof(p1) / sizeof(p2);
    int sizeofp2 = sizeof(p2) / sizeof(p1);
    if(p1 < p2 ){
        std::cout << "p2 is longer" << std::endl;

    }

    return 0;
}