//
// Created by Морозова Арина on 01.09.2022.
//

//Find minimal divisor for 3 numbers
#include <algorithm>
#include <stdio.h>

int  minimal_divisor(int a,int b,int c){

    int result = 1;
    int min_number = std::min (a, std::min (b, c));

    for (int i = min_number; i > 1; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            result = i;
        }
    }

   return result;
}
