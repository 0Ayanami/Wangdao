//
// Created by muyou on 2024/7/15.
//
#include "iostream"
#include "string"
#include "cstdio"

using namespace std;

int main(){
    string tmp;
    while (getline(cin, tmp)){
        int len = tmp.length();
        int n1 = (len + 2) / 3;
        int n2 = len + 2 - 2 * n1;
        char matrix[n1][n2];
        for (int i = 0; i < n1; ++i) {
            for (int j = 0; j < n2; ++j) {
                matrix[i][j] = ' ';
            }
        }
        for (int i = 0, x = 0, y = 0; i < len; ++i) {
            matrix[x][y] = tmp[i];
            if(y == 0 && x != n1 - 1)
                x++;
            else if(x == n1 - 1 && y != n2-1)
                y++;
            else
                x--;
        }
        for (int i = 0; i < n1; ++i) {
            for (int j = 0; j < n2; ++j) {
                cout << matrix[i][j];
            }
            cout << endl;
        }
    }
    return 0;
}