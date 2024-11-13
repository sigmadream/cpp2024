#include "pch.h"
#include <vector>
#include <algorithm>
#include <gtest/gtest.h>
#include "../ds/SelectionSort.h"

TEST(SelectionSortTest, SortsCorrectly) {
    std::vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    std::vector<int> expected = arr;
    std::sort(expected.begin(), expected.end());
    SelectionSort::sort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(SelectionSortTest, HandlesSingleElement) {
    std::vector<int> arr = { 42 };
    SelectionSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>{42});
}

TEST(SelectionSortTest, HandlesReverseSortedVector) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    SelectionSort::sort(arr);
    EXPECT_EQ(arr, expected);
}