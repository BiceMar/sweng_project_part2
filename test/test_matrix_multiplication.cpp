#include "matrix_multiplication.h"
#include <iostream>
#include <vector>
#include <gtest/gtest.h>

// ######################### Source code of multiplyMatrices in src/matrix_mult

TEST(MatrixMultiplicationTest, TestMultiplyMatrices) {
    std::vector<std::vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6}
    };
    std::vector<std::vector<int>> B = {
        {7, 8},
        {9, 10},
        {11, 12}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 2, 3, 2);

    std::vector<std::vector<int>> expected = {
        {58, 64},
        {139, 154}
    };
    
    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()"; 
}

TEST(MatrixMultiplicationTest, TestCifreGrosse) {
    std::vector<std::vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9000}
    };
    std::vector<std::vector<int>> B = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 2, 3, 2);

    std::vector<std::vector<int>> expected = {
        {30, 36, 42},
        {66, 81, 96},
        {6300039, 7200054, 8100069}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()"; 
}

TEST(MatrixMultiplicationTest, testNullMatrices) {
    std::vector<std::vector<int>> A = {
        {8}
    };
    std::vector<std::vector<int>> B = {
        {8}
    };
    std::vector<std::vector<int>> C(1, std::vector<int>(1, 0));

    multiplyMatrices(A, B, C, 1, 1, 1);

    std::vector<std::vector<int>> expected = {
        {8}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()"; 

}

TEST(MatrixMultiplicationTest, testIdentityMatrix) {
    std::vector<std::vector<int>> A = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    std::vector<std::vector<int>> B = {
        {1, 0 , 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    std::vector<std::vector<int>> C(3, std::vector<int>(3, 0));

    multiplyMatrices(A, B, C, 3, 3, 3);

    std::vector<std::vector<int>> expected = {
        
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()"; 

}

TEST(MatrixMultiplicationTest, testNegativeCoefficients) {

    std::vector<std::vector<int>> A = {
        {-1, 2, 3},
        {4, -5, 6},
        {7, -8, -9}
    };
    std::vector<std::vector<int>> B = {
        {1, 0 , 0},
        {-9, 1, -8},
        {0, 0, 1}
    };
    
    std::vector<std::vector<int>> C(3, std::vector<int>(3, 0));

    multiplyMatrices(A, B, C, 3, 3, 3);

    std::vector<std::vector<int>> expected = {
        {-19, 2, -13},
        {49, -5, 46},
        {79, -8, 55}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()"; 

}

TEST(MatrixMultiplicationTest, testScalarProduct) {

    std::vector<std::vector<int>> A = {
        {-1, 2, 3}
    };
    std::vector<std::vector<int>> B = {
        {1},
        {0},
        {0}
    };
    
    std::vector<std::vector<int>> C(1, std::vector<int>(1, 0));

    multiplyMatrices(A, B, C, 1, 1, 1);

    std::vector<std::vector<int>> expected = {
        {-1}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()"; 

}

TEST(MatrixMultiplicationTest, GeneratedTest5) {
    std::vector<std::vector<int>> A = {
        {7, 9, 3},
        {5, 8, 3},
    };
    std::vector<std::vector<int>> B = {
        {5, 5},
        {7, 3},
        {3, 8},
    };
    std::vector<std::vector<int>> C(2, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 2, 3, 2);

    std::vector<std::vector<int>> expected = {
        {107, 86},
        {90, 73},
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, GeneratedTest99) {
    std::vector<std::vector<int>> A = {
        {99}
    };
    std::vector<std::vector<int>> B = {
        {1}
    };
    std::vector<std::vector<int>> C(1, std::vector<int>(1, 0));

    multiplyMatrices(A, B, C, 1, 1, 1);

    std::vector<std::vector<int>> expected = {
        {99}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

TEST(MatrixMultiplicationTest, GeneratedTest88) {
    std::vector<std::vector<int>> A = {
        {8, 8},
        {8, 8}
    };
    std::vector<std::vector<int>> B = {
        {8, 8},
        {8, 8}
    };
    std::vector<std::vector<int>> C(3, std::vector<int>(2, 0));

    multiplyMatrices(A, B, C, 1, 1, 1);

    std::vector<std::vector<int>> expected = {
        {128, 128},
        {128, 128}
    };

    ASSERT_EQ(C, expected) << "Matrix multiplication test failed! :(((()";
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
