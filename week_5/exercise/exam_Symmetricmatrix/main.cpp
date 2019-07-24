#include <iostream>
#include <vector>

bool isSymmetric(const std::vector<std::vector<int>> &inputMatrix);

int main() {
    std::vector<std::vector<int>> matrixOne = {
            {1, 0, 1},
            {0, 2, 2},
            {1, 2, 5}
    };

    std::vector<std::vector<int>> matrixTwo = {
            {7, 7, 7},
            {6, 5, 7},
            {1, 2, 1}
    };
    std::cout << std::boolalpha << isSymmetric(matrixOne) << std::endl;
    std::cout << std::boolalpha << isSymmetric(matrixTwo) << std::endl;

    return 0;
}

bool isSymmetric(const std::vector<std::vector<int>> &inputMatrix) {
    bool symmetric = true;
    for (int i = 0; i < inputMatrix.size(); i++) {
        for (int j = 0; j < inputMatrix[i].size(); ++j) {
            if (inputMatrix[i][j] != inputMatrix[j][i]) {
                symmetric = false;
            }
        }
    }
    return symmetric;
}