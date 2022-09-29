//
// Created by Морозова Арина on 01.09.2022.
//

//Converts decimal to binary

#include<iostream>
#include<cmath>


int main () {
    int N;
    std::cin >> N;

    unsigned result = 0;
    int i = 0;

    while (N) {
        result += (N % 2) * std::pow (10, i);
        ++i;
        N >>= 1;
    }

    std::cout << result;

    return 0;
}