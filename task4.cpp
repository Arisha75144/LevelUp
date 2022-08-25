//
// Created by Морозова Арина on 25.08.2022.
//
#include <stdio.h>
#include <cmath>
double getCircleArea (double radius){
    return M_PI*pow(radius,2);
}
double getSquareArea(double side){
    return pow(side,2);

}
double equalTriangle(double high){
    return pow(high,2)/sqrt(3);

}

double maxTwo(double a,double b){
    return a>b?a:b;
}
int main(){
    double square,triangle,circle;
    scanf("%f","%f","%f",&circle,&triangle);
    double BiggestArea=(maxTwo(maxTwo(getSquareArea(square), getCircleArea(circle)),equalTriangle(triangle)));
    printf("%f",&BiggestArea);

}