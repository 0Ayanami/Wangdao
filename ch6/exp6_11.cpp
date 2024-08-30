//
// Created by muyou on 2024/8/5.
//
#include "iostream"
#include "cstdio"

using namespace std;

struct Matrix {
    int matrix[3][3];
    int row, col;

    Matrix(int r, int c) : row(r), col(c) {}
};

Matrix Multiply(Matrix x, Matrix y) {
    Matrix answer(x.row, y.col);
    for (int i = 0; i < answer.row; ++i) {
        for (int j = 0; j < answer.col; ++j) {
            answer.matrix[i][j] = 0;
            for (int k = 0; k < x.col; ++k) {
                answer.matrix[i][j] += x.matrix[i][k] * y.matrix[k][j];
            }
        }
    }
    return answer;
}

void PrintMatrix(Matrix x) {
    for (int i = 0; i < x.row; ++i) {
        for (int j = 0; j < x.col; ++j) {
            printf("%d ", x.matrix[i][j]);
        }
        printf("/n");
    }
    return ;
}

int main() {
    Matrix a(2,3), b(3,2);
    for (int i = 0; i < a.row; ++i) {
        for (int j = 0; j < a.col; ++j) {
            scanf("%d", &a.matrix[i][j]);
        }
    }
    for (int i = 0; i < b.row; ++i) {
        for (int j = 0; j < b.col; ++j) {
            scanf("%d", &b.matrix[i][j]);
        }
    }
    Matrix answer = Multiply(a,b);
    PrintMatrix(answer);
    return 0;
}