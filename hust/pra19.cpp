//
// Created by muyou on 2024/9/5.
//
#include<iostream>

using namespace std;

int main() {
    int A[4][5];

    int i, j;
    for (i = 0; i < 4; i++)
        for (j = 0; j < 5; j++)
            cin >> A[i][j];

    int B[2][5];

    int m, n;
    for (j = 0; j < 5; j++) {
        //找到该列最大的数
        m = 0;
        for (i = 1; i < 4; i++)
            if (A[i][j] > A[m][j])
                m = i;
        //找到该列第二大的数
        if (m == 0)
            n = 1;
        else
            n = 0;
        for (i = 0; i < 4; i++)
            if (A[i][j] > A[n][j] && i != m)
                n = i;
        //根据m和n的大小关系对数组B赋值
        if (m < n) {
            B[0][j] = A[m][j];
            B[1][j] = A[n][j];
        } else {
            B[0][j] = A[n][j];
            B[1][j] = A[m][j];
        }
    }

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 5; j++)cout << B[i][j] << " ";
        cout << endl;
    }

    return 0;
}