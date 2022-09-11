//
//
//Вычислить сумму элементов матрицы, лежащих слева от побочной диагонали
#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int m=n-1;
    int matrix[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }


    auto sum = 0LL;
    for (int i = 0; i < n - 1; ++i) {
        const auto k = m - i;
        for (int j = 0; j < k; ++j)
            sum += matrix[i][j];
    }
    cout << " Sum: " << sum << '\n';
}


