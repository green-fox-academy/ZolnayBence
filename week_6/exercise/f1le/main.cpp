#include <iostream>
#include <vector>

std::vector<std::vector<int>> generateMultiplicationTable(int a);
int main() {

    generateMultiplicationTable(3);

    return 0;
}

std::vector<std::vector<int>> generateMultiplicationTable(int a)
{
    std::vector<std::vector<int>> matrix;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix.size(); ++j) {
            matrix[i][j] = (i + 1) * (j + 1);

            std::cout << matrix[i][j] << std::endl;
        }
    }
    return matrix;
}