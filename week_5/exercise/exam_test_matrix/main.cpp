#include <iostream>
#include <vector>

std::vector<std::vector<int>> rotateMatrix(std::vector<std::vector<int>> mainVector);
int main()
{

   std::vector<std::vector<int>> arr = {{1,2,3},
                                       {4,5,6},
                                       {7,8,9}};

   rotateMatrix(arr);

    return 0;
}
std::vector<std::vector<int>> rotateMatrix(std::vector<std::vector<int>> mainVector)
{
    std::vector<std::vector<int>> rotateMatrixInFunction = mainVector;
    for(int i = 0; i < mainVector.size(); i++){
        for (int j = 0; j < mainVector[i].size(); ++j) {
           rotateMatrixInFunction[i][j] = mainVector[j][i];
        }
    }
    for (int k = 0; k < rotateMatrixInFunction.size(); ++k) {
        for (int i = 0; i < rotateMatrixInFunction[k].size()/2; ++i) {
            int temp = rotateMatrixInFunction[k][i];
            rotateMatrixInFunction[k][i] = rotateMatrixInFunction[k][rotateMatrixInFunction[k].size() - 1 - i];
            rotateMatrixInFunction[k][rotateMatrixInFunction[k].size() - 1 - i] = temp;
        }
    }
    for (int l = 0; l < rotateMatrixInFunction.size(); ++l) {
        for (int i = 0; i < rotateMatrixInFunction.size(); ++i) {
            std::cout << "[ " << rotateMatrixInFunction[l][i] <<  " ]";
            std::cout << std::endl;
        }
    }
    return rotateMatrixInFunction;
}
