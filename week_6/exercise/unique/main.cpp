#include <iostream>
#include <vector>

std::vector<int> uniqueFind(std::vector<std::vector<int>> matrixMain);
int main()
{
    std::vector<std::vector<int>> matrix = {
            {1, 1},
            {4, 2}
    };std::vector<std::vector<int>> matrix2 = {
            {4, 3, -1},
            {10, 2, 5},
            {-2, 3, 4}
    };
    for (int i = 0; i < sizeof(matrix)/ sizeof(matrix[0]); ++i) {
        for (int j = 0; j < sizeof(matrix)/ sizeof(matrix[0]); ++j) {

            std::cout << matrix[i][j] << " ";
    }
    uniqueFind(matrix);

    return 0;
}
std::vector<int> uniqueFind(std::vector<std::vector<int>> matrixMain)
{
    std::vector<int> uniqueList;
    int size = sizeof(matrixMain)/ sizeof(matrixMain[0]);
    int occurence = 0;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            occurence = 0;
            for (int k = 0; k < size; ++k) {
                for (int l = 0; l < size; ++l) {
                    if(matrixMain[i][j] == matrixMain[k][l]){
                        occurence++;
                    }
                }

            }
            uniqueList.push_back(matrixMain[i][j]);
        }
    }

    return uniqueList;
}