//
// Created by Морозова Арина on 23.09.2022.
//
#include "task2.hpp"
#include <stdio.h>
void calc(int b,int d){
        int c = 5;
        int a=5;

        a += b - 2;
        c++;
        d += c - a;
        a *= c;
        c--;
        a = a / 10;
        c = c / 2;
        b--;
        d *= c + b + a;

        printf (" a = %d, b = %d, c = %d, d = %d\n", a, b, c, d);
}