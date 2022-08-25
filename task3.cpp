//
// Created by Морозова Арина on 25.08.2022.
//
#include <stdio.h>
#include <cmath>
int main(){
    double y;
    double x;
    scanf("%f",&x);
    double up=2 * cos (x - M_PI / 6) + sqrt (2);
    double under=(1 / (2 * log (x))) + pow (sin (pow (x, 2)), 2);
    y=(up/under)* exp (3 * x);
    printf("%f",&y);

}