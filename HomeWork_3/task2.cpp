//
// Created by Морозова Арина on 01.09.2022.
//
#include <stdio.h>
#include <cmath>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    for(int i=1;i<a*b*c;i++){
        if (!(i%a)&&!(i%b)&&!(i%c)){
            printf("%d",i);
            break;
        }
    }


}