#include <iostream>
#include <vector>

std::vector<std::vector<int>> matrixMultplier(std::vector<std::vector<int>> matrix, std::vector<std::vector<int>> matrix2);
int main()
{
    std::vector<std::vector<int>> matrix = {
            {1, 0, 0},
            {0, 1, 0},
            {0, 0, 1}
    };
    std::vector<std::vector<int>> matrix2 = {
            {2, 8, 4},
            {3, 5, 6},
            {7, 9, 1}
    };
    std::vector<std::vector<int>> matrixs = matrixMultplier(matrix, matrix2);
    for (int i = 0; i < matrixs.size(); ++i) {
        for (int j = 0; j < matrixs[i].size(); ++j) {
            std::cout << matrixs[i][j] << " ";
        }
    }
    matrixMultplier(matrix, matrix2);
    
    return 0;
}
std::vector<std::vector<int>> matrixMultplier(std::vector<std::vector<int>> matrix, std::vector<std::vector<int>> matrix2)
{
    std::vector<std::vector<int>> matrixFunction = matrix;

    for (int i = 0; i < matrix.size(); ++i) {
        matrixFunction.resize(matrix.size());
        for (int j = 0; j < matrix[i].size(); ++j) {
            matrixFunction[0].resize(matrix[0].size());

            matrixFunction[i][j] += (matrix[j][i] + 1) * matrix2[i][j];


            }

    }
    return matrixFunction;
}