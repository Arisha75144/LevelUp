//
//
//Дана матрица размером 7х7. Поменять местами k-й столбец с k-ой строкой.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int matrix[7][7];
    for (int i=0;i<7;i++){
        for (int j=0;j<7;j++){
            cin>>matrix[i][j];
        }
    }
    int k;
    cin>>k;
    for (int i=0;i<7;i++) {
        swap(matrix[i][k],matrix[k][i]);
    }
}