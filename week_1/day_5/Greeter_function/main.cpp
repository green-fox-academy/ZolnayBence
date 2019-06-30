#include <iostream>
#include <string>

void greet(std::string us);

int main()
{
    std::string al = "Green Fox";
    greet(al);
    greet("Bence");

    return 0;
}

void greet(std::string us)
{
    std::cout << "Greetings dear, " << us << std::endl;

}
