//
// Created by Dmitry Morozov on 29/9/22.
//

#ifndef LEVELUP_MAIN_TASK2_HPP
#define LEVELUP_MAIN_TASK2_HPP

#include <algorithm>


unsigned mcd (int a, int b, int c) {

    int result = 1;
    int min_number = std::min (a, std::min (b, c));

    for (int i = min_number; i > 1; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            result = i;
        }

    }
    return result;
}

#endif //LEVELUP_MAIN_TASK2_HPP
