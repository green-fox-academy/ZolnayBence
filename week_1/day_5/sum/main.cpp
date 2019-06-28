#include <iostream>

int sum(int a);


int main()
{
    int p = 6;
    std::cout << sum(p) << std::endl;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}

int sum(int a = 0)
{
    int overAll = 0;
    for (int i = 0; i <= a; ++i) {
        overAll = i + overAll;
    }
    return overAll;
}
