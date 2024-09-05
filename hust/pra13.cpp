//
// Created by muyou on 2024/9/5.
//
#include "iostream"

using namespace std;

const int MAXN = 101;

int matrix[MAXN][MAXN];

int main(){
    int m,n;
    while(cin >> m >>n){
        for (int i = 0; i < m; ++i) {
            int max = 0;
            int flag = 0;
            int sum = 0;
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
                sum += matrix[i][j];
                if(max < matrix[i][j]){
                    max = matrix[i][j];
                    flag = j;
                }
            }
            matrix[i][flag] = sum;
        }
        for (int i = 0; i < m; ++i) {
            for (int j = 0; j < n; ++j) {
                if(j != 0)
                    cout << " ";
                cout << matrix[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}