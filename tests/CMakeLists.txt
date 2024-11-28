enable_testing()

add_executable(dsTest test_bubbleSort.cpp test_insertionSort test_selectionSort)
target_link_libraries(dsTest PRIVATE dsLib gtest gtest_main)
add_test(NAME dsTest COMMAND dsTest)