//
// Created by Dmitry Morozov on 29/9/22.
//


#ifndef LEVELUP_MAIN_TASK1_HPP
#define LEVELUP_MAIN_TASK1_HPP

#include <cstdlib>


unsigned numDigits (size_t num) {
    unsigned counter = 0;
    while (num) {
        num /= 10;
        counter += 1;
    }
    return counter;
}


#endif //LEVELUP_MAIN_TASK1_HPP
