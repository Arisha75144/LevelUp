//
// Created by Морозова Арина on 01.09.2022.
//

//Count the number of digits in a number

#include "task1.hpp"

#include <stdio.h>


int main () {
    int N;

    printf ("Enter the number: ");
    scanf ("%d", &N);

    printf ("%d", numDigits (N));

    return 0;
}

