//
// Created by Морозова Арина on 01.09.2022.
//
#include <iostream>
int main(){
    std::string a;
    std::cin>>a;
    std::cout<<a[a.size()-1];
    for(int i=1;i<a.size()-1;i++){
        std::cout<<a[i];
    }
    std::cout<<a[0];
}