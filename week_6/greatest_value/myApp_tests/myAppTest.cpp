#include <gtest/gtest.h>
#include "matrix.h"
#include <vector>

TEST(greater_matrix, greater_matrix_2times2_test)
{
    std::vector<std::vector<int>> matrix = {
            {2,1},
            {0,1}
    };
    std::vector<std::vector<int>> secondMatrix = {
            {0,3},
            {-1,1}
    };

    std::vector<std::vector<int>> expected = {{2, 3},
            { 0, 1 }
    };
    EXPECT_EQ(matrixGreatest(matrix, secondMatrix), expected);
}
TEST(greater_matrix, greater_matrix_3times3_test)
{
    std::vector<std::vector<int>> matrix = {
            {-1, 1, 0},
            {0, 1, 0},
            {0, 1, 0}
    };
    std::vector<std::vector<int>> secondMatrix = {
            {0, 0, 0},
            {0, 1, 0},
            {0, 0, 0}
    };

    std::vector<std::vector<int>> expected = { { 0, 1, 0 },
    { 0, 1, 0 },
    { 0, 1, 0 }
    };
    EXPECT_EQ(matrixGreatest(matrix, secondMatrix), expected);
}