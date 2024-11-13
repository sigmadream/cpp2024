#include "pch.h"
#include <vector>
#include <algorithm>
#include <gtest/gtest.h>
#include "../ds/InsertionSort.h"

TEST(InsertionSortTest, SortsCorrectly) {
    std::vector<int> arr = { 64, 34, 25, 12, 22, 11, 90 };
    std::vector<int> expected = arr;
    std::sort(expected.begin(), expected.end());
	InsertionSort::sort(arr);
    EXPECT_EQ(arr, expected);
}

TEST(InsertionSortTest, HandlesSingleElement) {
    std::vector<int> arr = { 42 };
    InsertionSort::sort(arr);
    EXPECT_EQ(arr, std::vector<int>{42});
}

TEST(InsertionSortTest, HandlesReverseSortedVector) {
    std::vector<int> arr = { 5, 4, 3, 2, 1 };
    std::vector<int> expected = { 1, 2, 3, 4, 5 };
    InsertionSort::sort(arr);
    EXPECT_EQ(arr, expected);
}