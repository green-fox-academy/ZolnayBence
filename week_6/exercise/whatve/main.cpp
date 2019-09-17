#include <iostream>
#include <vector>

std::vector<std::vector<int>> greaterValue(std::vector<std::vector<int>> matrix,std::vector<std::vector<int>> matrix2);
int main()
{
    std::vector<std::vector<int>> menyo = {{2,1},
                                           {0,1}};
    std::vector<std::vector<int>> menyo2 = {{0,3},
                                           {-1,1}};
    std::vector<std::vector<int>> ezegyfunction = greaterValue(menyo, menyo2);
    for (int i = 0; i < ezegyfunction.size(); ++i) {
        for (int j = 0; j < ezegyfunction.size(); ++j) {
            std::cout << ezegyfunction[i][j]  << std::endl;
        }
    }

    std::cout << "Hello, World!" << std::endl;
    return 0;
}

std::vector<std::vector<int>> greaterValue(std::vector<std::vector<int>> matrix,std::vector<std::vector<int>> matrix2)
{

    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix.size(); ++j) {
            if(matrix[i][j] < matrix2[i][j]){
                matrix[i][j] = matrix2[i][j];
            }
        }
    }
    return matrix;
}