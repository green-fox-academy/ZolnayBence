
#include "matrix.h"

std::vector<std::vector<int>> matrixGreatest(std::vector<std::vector<int>> matrix, std::vector<std::vector<int>> matrixTwo)
{

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrixTwo.size(); ++j) {

           if(matrix[i][j] < matrixTwo[i][j])
               matrix[i][j] = matrixTwo[i][j];
        }
    }
    return matrix;
}
