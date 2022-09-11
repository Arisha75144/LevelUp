//Поменять местами максимальный и последний отрицательный элементы массива M(40).
#include <iostream>
#include<set>
#include<vector>
using namespace std;
int main(){
    vector<int>A(5);
    int maxitemp=0;
    int maxpos=0;
    int negnum=0;
    int posneg=0;
    for (int i=0;i<A.size();i++){
        cin>>A[i];
        if(A[i]>maxitemp){
            maxitemp=A[i];
            maxpos=i;
        }
        if(A[i]<0){
            negnum=A[i];
            posneg=i;
        }
    }
    A[maxpos]=negnum;
    A[posneg]=maxitemp;
    for(int i=0;i<A.size();i++){
        cout<<A[i]<<" ";
    }
}