//
// Created by muyou on 2024/9/2.
//
#include "iostream"

using namespace std;

const int MAXN = 1001;

int t[MAXN];
int v[MAXN];
int dp[MAXN];

int main() {
    int T, M;
    cin >> T >> M;
    for (int i = 0; i < M; ++i) {
        cin >> t[i] >> v[i];
    }
    for (int i = 0; i < T; ++i) {
        dp[i] = 0;
    }
    for (int i = 0; i < M; ++i) {
        for (int j = T; j >= t[i]; --j) {
            dp[j] = max(dp[j], dp[j - t[i]] + v[i]);
        }
    }
    cout << dp[T] << endl;
    return 0;
}