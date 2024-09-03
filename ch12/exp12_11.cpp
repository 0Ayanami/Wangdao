//
// Created by muyou on 2024/9/3.
//
#include "iostream"

using namespace std;

int const MAXN = 101;

long long matrix[MAXN][MAXN];

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        for (int i = 0; i < N; ++i) {
            for (int j = 0; j <= i; ++j) {
                cin >> matrix[i][j];
            }
        }
        for (int i = N; i < 2 * N - 1; ++i) {
            for (int j = 0; j < 2 * N - i - 1; ++j) {
                cin >> matrix[i][j];
            }
        }
        for (int i = 2 * N - 3; i >= N - 1; --i) {
            for (int j = 0; j < 2 * N - i - 1; ++j) {
                if (j == 0)
                    matrix[i][j] += matrix[i + 1][j];
                else if (j == 2 * N - i - 2)
                    matrix[i][j] += matrix[i + 1][j - 1];
                else
                    matrix[i][j] += max(matrix[i + 1][j], matrix[i + 1][j - 1]);
            }
        }
        for (int i = N - 2; i >= 0; --i) {
            for (int j = 0; j <= i; ++j) {
                matrix[i][j] += max(matrix[i + 1][j], matrix[i + 1][j + 1]);
            }
        }
        cout << matrix[0][0] << endl;
    }
    return 0;
}