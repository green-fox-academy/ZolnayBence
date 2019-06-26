#include <iostream>

int main(int argc, char const *argv[]) {
    int a = 13;
    int a2 = 22;
    std::cout <<"13 + 22: " << a + a2 << std::endl;
    std::cout <<"13 - 22: " << a - a2 << std::endl;
    std::cout <<"13 * 22: " << a * a2 << std::endl;
    std::cout <<"22 / 13: " << (float)a2 / a << std::endl;
    std::cout <<"22 / 13: " << a2 / a << std::endl;
    std::cout <<"22 % 13: " << a2 % a << std::endl;
    return 0;
}
