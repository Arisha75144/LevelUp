//
// Created by Arina on 15.08.2022.
//
#include <stdio.h>


int main () {
    //FIXME: a : Is not initialized!
    int c = 5;
    int a=5;
    int b, d;

    //FIXME: scanf("%d", &b); Use %d instead of &d. %d - Format specifier for integer.
    scanf ("%d", &b);
    scanf ("%d", &d);

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

    return 0;
}
