//
// Created by Морозова Арина on 01.09.2022.
//

//Find minimal divisor for 3 numbers
#include <algorithm>
#include <stdio.h>


int main () {
    int a, b, c;

    printf ("Enter the numbers: ");
    scanf ("%d %d %d", &a, &b, &c);

    int result = 1;
    int min_number = std::min (a, std::min (b, c));

    for (int i = min_number; i > 1; i--) {
        if (a % i == 0 && b % i == 0 && c % i == 0) {
            result = i;
        }
    }

    printf ("Minimal divisor : %d", result);

    return 0;
}
