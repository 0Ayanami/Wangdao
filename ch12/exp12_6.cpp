//
// Created by muyou on 2024/8/31.
//
#include "iostream"
#include "string"
#include "cstdio"

using namespace std;

const int MAXN = 1001;

int dp[MAXN][MAXN];


int main() {
    string a, b;
    while (cin >> a >> b) {
        for (int i = 0; i <= a.size(); ++i) {
            dp[i][0] = 0;
        }
        for (int i = 0; i <= b.size(); ++i) {
            dp[0][i] = 0;
        }
        for (int i = 0; i < a.size(); ++i) {
            for (int j = 0; j < b.size(); ++j) {
                if (a[i] == b[j]) {
                    dp[i + 1][j + 1] = dp[i][j] + 1;
                } else {
                    dp[i + 1][j + 1] = max(dp[i][j + 1], dp[i + 1][j]);
                }
            }
        }
        cout << dp[a.size()][b.size()] << endl;
    }
    return 0;
}