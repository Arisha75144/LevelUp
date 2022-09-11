//
// Created by Морозова Арина on 25.08.2022.
//

#include <cstdio>
#include <cmath>


double getCircleArea (double radius) {
    return M_PI * pow (radius, 2);
}

double getSquareArea (double side) {
    return pow (side, 2);

}

double getEqualTriangle (double high) {
    return pow (high, 2) / sqrt (3);

}


int main () {
    double square, triangle, circle;
    //TODO: Show prompt to user as "Enter the radius of the <circle> <equilateral triangle> <square> :"
    scanf ("%lf %lf %lf", &circle, &triangle, &square);

    //TODO: Better assign functions results to variables like this: auto circleArea = getCircleArea (circle);
    getCircleArea (circle) > getSquareArea (square) && getCircleArea (circle) > getEqualTriangle (triangle) ? printf (
            "area of circle is biggest : %lf", getCircleArea (circle)) :
    getSquareArea (square) > getEqualTriangle (triangle) ? printf ("area of square is biggest : %lf",
                                                                   getSquareArea (square)) : printf (
            "area of triangle is biggest: %lf", getEqualTriangle (triangle));


}
