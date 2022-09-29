cmake_minimum_required(VERSION 3.22)

project(LevelUp)

set(CMAKE_CXX_STANDARD 20)

### 3-d party libraries

include(FetchContent)
FetchContent_Declare(
        googletest
        GIT_REPOSITORY https://github.com/google/googletest.git
        GIT_TAG release-1.12.1
)
# For Windows: Prevent overriding the parent project's compiler/linker settings
set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)

FetchContent_MakeAvailable(googletest)


### BUILD EXECUTABLES

add_subdirectory (HomeWork_3)

# Add next task the same way


### BUILD TESTS

add_subdirectory(tests)




