//
// Created by Морозова Арина on 01.09.2022.
//

//Count the number of digits in a number

#include <stdio.h>

int main () {
    int N;
    int counter = 0;

    printf ("Enter the number: ");
    scanf ("%d", &N);

    while (N) {
        N /= 10;
        counter += 1;
    }

    printf ("%d", counter);

    return 0;
}