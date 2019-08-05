#include <iostream>
#include <vector>
std::vector<std::vector<int>> matrixAdder(std::vector<std::vector<int>> matrixMain, std::vector<std::vector<int>> matrix2Main);
int main()
{
    std::vector<std::vector<int>> matrix = {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
    };

    std::vector<std::vector<int>> matrix2 = {
            {10, 11, 24},
            {54, 23, 23},
            {100, 43, 12}
    };
    std::vector<std::vector<int>> matrixs = matrixAdder(matrix, matrix2);
    for (int i = 0; i < matrixs.size(); ++i) {
        for (int j = 0; j < matrixs.size(); ++j) {

            std::cout << matrixs[i][j] << " ";
        }
    }
    matrixAdder(matrix, matrix2);

    return 0;
}
std::vector<std::vector<int>> matrixAdder(std::vector<std::vector<int>> matrixMain, std::vector<std::vector<int>> matrix2Main)
{
    std::vector<std::vector<int>> matrixFunction = matrixMain;

    for (int i = 0; i < matrixFunction.size(); ++i) {
        for (int j = 0; j < matrixFunction[i].size(); ++j) {
            matrixFunction[i][j] = matrixMain[i][j] + matrix2Main[i][j];
        }
    }
    return matrixFunction;
}