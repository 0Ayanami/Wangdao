//
// Created by muyou on 2024/9/5.
//
#include "iostream"

using namespace std;

const int MAXN = 101;

int matrix[MAXN][MAXN];

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[j][i];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (j != 0)
                    cout << " ";
                cout << matrix[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}