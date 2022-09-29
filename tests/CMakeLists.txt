enable_testing()

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

include_directories(${CMAKE_SOURCE_DIR})

message(STATUS "Project HW3 Source DIR : ${CMAKE_SOURCE_DIR}/HomeWork_3")


add_executable(HW_3_Tests_run
        Task_3_1_test.cpp
        Task_3_2_test.cpp
        )

target_link_libraries(HW_3_Tests_run
        GTest::gtest_main
        )

include(GoogleTest)
gtest_discover_tests(HW_3_Tests_run)