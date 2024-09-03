//
// Created by muyou on 2024/9/3.
//
#include "iostream"

using namespace std;

const int MAXN = 101;

int dp[MAXN][MAXN];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cin >> dp[i][j];
        }
    }
    for (int i = n - 2; i >= 0; --i) {
        for (int j = 0; j <= i; ++j) {
            dp[i][j] += max(dp[i + 1][j], dp[i + 1][j + 1]);
        }
    }
    cout << dp[0][0] << endl;
    return 0;
}