//
// Created by Морозова Арина on 01.09.2022.
//

//Converts decimal to binary

#include<iostream>
#include<cmath>
int  Tobianary(int N){


    unsigned result = 0;
    int i = 0;

    while (N) {
        result += (N % 2) * std::pow (10, i);
        ++i;
        N >>= 1;
    }

    return result;

}
