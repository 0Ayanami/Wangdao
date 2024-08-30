//
// Created by muyou on 2024/8/5.
//
#include "iostream"
#include "cstdio"

using namespace std;

struct Matrix {
    int matrix[10][10];
    int row, col;

    Matrix(int r, int c) : row(r), col(c) {}
};

Matrix Multiply(Matrix a, Matrix b) {
    Matrix res(a.row, b.col);
    for (int i = 0; i < res.row; ++i) {
        for (int j = 0; j < res.col; ++j) {
            res.matrix[i][j] = 0;
            for (int k = 0; k < a.col; ++k) {
                res.matrix[i][j] += a.matrix[i][k] * b.matrix[k][j];
            }
        }
    }
    return res;
}

Matrix FastExpo(Matrix a, int k) {
    Matrix res(a.row, a.col);
    for (int i = 0; i < a.row; ++i) {
        for (int j = 0; j < a.col; ++j) {
            if (i == j)
                res.matrix[i][j] = 1;
            else
                res.matrix[i][j] = 0;
        }
    }
    while (k != 0) {
        if (k % 2 == 1) {
            res = Multiply(res, a);
        }
        a = Multiply(a, a);
        k /= 2;
    }
    return res;
}

int main() {
    int n, k;
    while (scanf("%d%d", &n, &k)) {
        Matrix x(n, n);
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                scanf("%d", &x.matrix[i][j]);
            }
        }
        Matrix res(n,n);
        res = FastExpo(x,k);
        for (int i = 0; i < res.row; ++i) {
            for (int j = 0; j < res.col; ++j) {
                cout << res.matrix[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}