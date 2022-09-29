//
// Created by Dmitry Morozov on 22/8/22.
//

#include "gtest/gtest.h"

#include "HomeWork_3/task1.hpp"


/**
 * @brief Test for getNaturalLength() function
 *
 * @param  `Task1`: the name of the test suite
 * @param  'getNaturalLength': the name of the test
 */
TEST(getNauralLength, checkLength) {

    EXPECT_EQ(numDigits (2), 1);
    EXPECT_EQ(numDigits (34), 2);
    EXPECT_EQ(numDigits (123), 3);
    EXPECT_EQ(numDigits (1234), 4);
    EXPECT_EQ(numDigits (12345), 5);
    EXPECT_EQ(numDigits (123456), 6);
    EXPECT_EQ(numDigits (1234567), 7);

    EXPECT_EQ(numDigits (4637289443898902384), 19);
}






