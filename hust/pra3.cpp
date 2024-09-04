//
// Created by muyou on 2024/9/4.
//
#include "iostream"

using namespace std;

const int MAXN = 101;

int matrix[MAXN][MAXN];

int main() {
    int n;
    while (cin >> n) {
        bool flag = true;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j <= i; ++j) {
                if (matrix[i][j] != matrix[j][i]) {
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            cout << "Yes!" << endl;
        } else {
            cout << "No!" << endl;
        }
    }
    return 0;
}