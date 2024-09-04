//
// Created by muyou on 2024/9/4.
//
#include "iostream"

using namespace std;

const int MAXN = 1000000;
long long dp[MAXN];


int main() {
    int n;
    cin >> n;
    dp[0] = 1;
    long long y1 = 0, y2 = 0;
    for (int i = 1; i <= n; ++i) {
        dp[i] = dp[i - 1] * i;
        if (i % 2 == 0) {
            y2 += dp[i];
        } else {
            y1 += dp[i];
        }
    }
    cout << y1 << " " << y2 << endl;
    return 0;
}