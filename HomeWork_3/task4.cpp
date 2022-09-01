//
// Created by Морозова Арина on 01.09.2022.
//
#include <stdio.h>
#include<iostream>
#include<vector>
#include <cmath>
int main(){

    int N;
    std::cin>>N;
    std::vector<int>a;
    while(N!=0){
        a.push_back(N%2);
        N=N/2;

    }
    reverse(a.begin(), a.end());
   for(auto &i:a){
       std::cout<<i;
   }
}