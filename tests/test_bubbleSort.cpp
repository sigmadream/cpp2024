#include <gtest/gtest.h>
#include "BubbleSort.h"

TEST(BubbleSortTest, SortsCorrectly)
{
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    std::vector<int> expected = arr;
    std::sort(expected.begin(), expected.end());

    BubbleSort::sort(arr);

    EXPECT_EQ(arr, expected);
}

TEST(BubbleSortTest, HandlesSingleElement)
{
    std::vector<int> arr = {42};
    BubbleSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>{42});
}

TEST(BubbleSortTest, HandlesReverseSortedVector)
{
    std::vector<int> arr = {5, 4, 3, 2, 1};
    std::vector<int> expected = {1, 2, 3, 4, 5};
    BubbleSort::sort(arr);
    EXPECT_EQ(arr, expected);
}