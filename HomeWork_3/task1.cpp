//
// Created by Морозова Арина on 01.09.2022.
//

//Count the number of digits in a number

#include <stdio.h>
int counter_of_elem(int N){
    int counter = 0;


    while (N) {
        N /= 10;
        counter += 1;
    }

    return counter

}

int main () {

}