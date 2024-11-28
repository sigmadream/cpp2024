add_library(dsLib BubbleSort.cpp
                  InsertionSort.cpp
                  SelectionSort.cpp)
target_include_directories(dsLib PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
