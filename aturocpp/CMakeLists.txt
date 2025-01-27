cmake_minimum_required(VERSION 3.31.4)

project(atourcpp VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(atourcpp)
target_sources(atourcpp PRIVATE main.cpp)
