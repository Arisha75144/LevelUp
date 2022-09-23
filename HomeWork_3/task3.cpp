//
// Created by Морозова Арина on 01.09.2022.
//
// Swap firs and last digits in number
#include <iostream>
#include <string>

int Changer_of_elements(int a){
    auto str_number = std::to_string (a);
    std::swap (str_number[0], str_number[str_number.length () - 1]);

    a = stoi (str_number);
    return a;

}
