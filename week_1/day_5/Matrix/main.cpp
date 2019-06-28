#include <iostream>
#include <string>

int main()
{
    int r = 4;
    int c = 4;
    int Matrix[r][c];
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (i == j) {
                Matrix[i][j] = 1;
                std::cout << "1 ";
            } else {
                Matrix[i][j] = 0;
                std::cout << "0 ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}