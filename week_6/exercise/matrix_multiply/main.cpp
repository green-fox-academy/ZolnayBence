#include <iostream>
#include <vector>

std::vector<std::vector<int>> matrixMultplier(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b);
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
std::vector<std::vector<int>> matrixMultplier(std::vector<std::vector<int>> a, std::vector<std::vector<int>> b)
{
    std::vector<std::vector<int>> matrixMultiplication(a.size(), std::vector<int>(b[0].size()));

    for (int x = 0, y = 0, z = 0;; z++)
    {
        if (z == a[0].size()) {
            z = 0;
            y++;
        }

        if (y == matrixMultiplication[x].size())
        {
            y = 0;
            x++;
        }

        if (x == matrixMultiplication.size())
            break;

        matrixMultiplication[x][y] += a[x][z] * b[z][y];

    }

    return matrixMultiplication;
}