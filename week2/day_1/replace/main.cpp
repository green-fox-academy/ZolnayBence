#include <iostream>
#include <string>

int main()
{
    std::string("galaxy");
    std::string example("in a dishwasher far far away");
    example.replace(4, 11, " galaxy");


    // I would like to replace "dishwasher" with "galaxy" in this example, but it has a problem.
    // Please fix it for me!
    // Expected output: In a galaxy far far away
    std::cout << example << std::endl;
    return 0;
}