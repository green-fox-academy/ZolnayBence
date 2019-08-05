#include <iostream>
#include <vector>

std::vector<std::vector<int>> matrixMultplier(std::vector<std::vector<int>> matrix, std::vector<std::vector<int>> matrix2);
int main()
{
    std::vector<std::vector<int>> matrix = {
            {2, 8, 4},
            {3, 5, 6},
            {7, 9, 1}
    };
    std::vector<std::vector<int>> matrix2 = {
            {2, 8, 4},
            {3, 5, 6},
            {7, 9, 1}
    };
    for (int i = 0; i < ; ++i) {
        
    }
    
    return 0;
}
std::vector<std::vector<int>> matrixMultplier(std::vector<std::vector<int>> matrix, std::vector<std::vector<int>> matrix2)
{
    std::vector<std::vector<int>> matrixFunction = matrix;

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            matrixFunction[i][j] = (matrix[j][i] * matrix2[j][i]) + matrixFunction[i][j]; 
        }
    }
}