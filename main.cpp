#include <vector>
#include <gtest/gtest.h>

std::vector<int> increaseVector(std::vector<int> vec, int n) {
    for (int i = 0; i < vec.size(); ++i) {
        vec[i] += n;
    }
    return vec;
}

TEST(IncreaseVectorTest, IncreaseByPositiveNumber) {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> expected = {6, 7, 8, 9, 10};
    int n = 5;
    std::vector<int> result = increaseVector(input, n);
    ASSERT_EQ(result, expected);
}

TEST(IncreaseVectorTest, IncreaseByNegativeNumber) {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> expected = {-4, -3, -2, -1, 0};
    int n = -5;
    std::vector<int> result = increaseVector(input, n);
    ASSERT_EQ(result, expected);
}

TEST(IncreaseVectorTest, IncreaseByZero) {
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::vector<int> expected = {1, 2, 3, 4, 5};
    int n = 0;
    std::vector<int> result = increaseVector(input, n);
    ASSERT_EQ(result, expected);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
