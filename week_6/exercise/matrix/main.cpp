#include <iostream>
#include <vector>

std::vector<std::vector<int>> multiplyMatrixItems(std::vector<std::vector<int>> matrix);
int main() {
    std::vector<std::vector<int>> matrix = {
            {1, 3, 6, 2},
            {4, 5, 6, 1},
            {3, 3, 1, 5},
            {9, 0, 5, 2}
    };

    multiplyMatrixItems(matrix);

    return 0;
}

std::vector<std::vector<int>> multiplyMatrixItems(std::vector<std::vector<int>> matrix)
{
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if(matrix[i][j] % 2 == 1){
                matrix[i][j] = matrix[i][j] * 2;
                std::cout << "[" <<  matrix[i][j] << "]";
            }
        }
    }
    return matrix;
}