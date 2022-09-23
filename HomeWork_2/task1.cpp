//
// Created by Морозова Арина on 23.09.2022.
//
#include<math.h>
#include "task1.hpp"
#include <stdio.h>
int  calc(int x) {
    double y;
    double up = 2 * cos(x - M_PI / 6) + sqrt(2);
    double under = (1 / (2 * log(x))) + pow(sin(pow(x, 2)), 2);
    y = (up / under) * exp(3 * x);
    return y;
}