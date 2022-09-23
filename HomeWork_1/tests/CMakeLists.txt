cmake_minimum_required(VERSION 3.22)

project(LevelUp)

set(CMAKE_CXX_STANDARD 20)
ad_executable(HW_1_2_Tests_run test_of_one.cpp)
include(GoogleTest)
gtest_discover_tests(HomeWork_1)