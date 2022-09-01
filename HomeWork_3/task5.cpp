//
// Created by Морозова Арина on 01.09.2022.
//
#include <stdio.h>
#include<iostream>
#include<vector>
#include <cmath>
int main(){
    double e = 1e-6;
    double x, s, p, t;
    int n = 0;
    scanf("%lf", &x);
    s = p = x;
    x *= x;
    do {
        n += 2;
        p *= x * (n - 1) / n;
        t = p / (n + 1);
        s += t;
    } while (fabs(t) >= e);
    printf("%le", s);
}