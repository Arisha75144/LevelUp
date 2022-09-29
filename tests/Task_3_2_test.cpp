//
// Created by Dmitry Morozov on 29/9/22.
//
#include "gtest/gtest.h"

#include "HomeWork_3/task2.hpp"


TEST (Task2, mcd) {
    ASSERT_EQ (mcd (1, 1, 1), 1);
    ASSERT_NE (mcd (1, 1, 1), 0);
    ASSERT_EQ (mcd (4, 6, 8), 2);
    ASSERT_EQ (mcd (10, 15, 20), 5);
    ASSERT_EQ (mcd (3, 5, 7), 1);
    ASSERT_EQ (mcd ( 10, 20 , 22), 2);
}
