
//Определить местоположение элементов массива А (30), не встречающихся в массиве В (15).
#include<iostream>
#include<vector>
using namespace std;
vector < pair < int, int >> PosElem(  vector < int >A ,vector < int >B){

    vector < pair < int, int >>elements;
    for (int i = 0; i < A.size (); i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < B.size (); i++)
    {
        cin >> B[i];
    }

    for (int i = 0; i < A.size (); i++)
    {
        if (find (B.begin (), B.end (), A[i]) == B.end ())
        {
            elements.push_back({A[i], i});

        }
    }
    return elements;
}
