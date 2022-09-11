
//Определить местоположение элементов массива А (30), не встречающихся в массиве В (15).
#include<iostream>
#include<vector>
using namespace std;
int main ()
{
    vector < int >A (30);
    vector < int >B (15);
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
    for (int i = 0; i < elements.size (); i++)
    {
        cout << "element: " << elements[i].first << " on position: " << elements[i].second + 1 << endl;
    }
}
