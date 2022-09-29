//
// Created by Морозова Арина on 01.09.2022.
//

//Find minimal divisor for 3 numbers

#include "task2.hpp"
#include <stdio.h>


int main () {
    int  a, b, c;

    printf ("Enter the numbers: ");
    scanf ("%d %d %d", &a, &b, &c);


    printf ("Minimal divisor : %d", mcd (a, b, c));

    return 0;
}