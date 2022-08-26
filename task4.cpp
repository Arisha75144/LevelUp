//
// Created by Морозова Арина on 25.08.2022.
//
//FIXME: Replace with <cstdio>
#include <stdio.h>
#include <cmath>


double getCircleArea (double radius) {
    return M_PI * pow (radius, 2);
}

double getSquareArea (double side) {
    return pow (side, 2);

}

double equalTriangle (double high) {
    return pow (high, 2) / sqrt (3);

}


int main () {
    double square, triangle, circle;
    scanf ("%lf %lf %lf", &circle, &triangle, &square);
    //TODO: Print out figure name instead od area value
    getCircleArea(circle)> getSquareArea(square) && getCircleArea(circle) > equalTriangle(triangle)?printf("area of circle is biggest : %lf", getCircleArea(circle)):
    getSquareArea(square)>equalTriangle(triangle)?printf("area of square is biggest : %lf",getSquareArea(square)):printf("area of triangle is biggest: %lf",equalTriangle(triangle));
    //FIXME: Pass by value not by reference

}