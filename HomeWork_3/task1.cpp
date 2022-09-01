//
// Created by Морозова Арина on 01.09.2022.
//
#include <stdio.h>
#include <cmath>
int main(){
    int N;
    int counter=0;
    scanf("%d",&N);
    while(N!=0){
        N/=10;
        counter+=1;
    }
    printf("%d",counter);
}