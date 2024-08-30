//
// Created by muyou on 2024/8/5.
//
#include "iostream"

using namespace std;

struct Matrix {
    int matrix[10][10];
    int row, col;

    Matrix(int r, int c) : row(r), col(c) {}
};

int main() {
    int m, n;
    while (cin >> m) {
        if (m == 0)
            break;
        cin >> n;
        Matrix a(m, n), b(m, n);
        for (int i = 0; i < a.row; ++i) {
            for (int j = 0; j < a.col; ++j) {
                cin >> a.matrix[i][j];
            }
        }
        int rowcount = 0;
        bool flag = true;
        for (int i = 0; i < b.row; ++i) {
            for (int j = 0; j < b.col; ++j) {
                cin >> b.matrix[i][j];
                if (b.matrix[i][j] + a.matrix[i][j] != 0) {
                    flag = false;
                } else if (flag && j == b.col-1) {
                    rowcount++;
                }
            }
            flag = true;
        }
        flag = true;
        int colcount = 0;
        for (int i = 0; i < b.col; ++i) {
            for (int j = 0; j < b.row; ++j) {
                if (b.matrix[j][i] + a.matrix[j][i] != 0) {
                    flag = false;
                } else if (flag && j == b.row-1) {
                    colcount++;
                }
            }
            flag  = true;
        }
        cout << rowcount+colcount << endl;
    }
    return 0;
}