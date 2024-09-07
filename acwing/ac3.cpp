//
// Created by muyou on 2024/9/6.
//
#include "iostream"

using namespace std;

const int MAXN = 1001;

int dp[MAXN][MAXN];
int v[MAXN];
int w[MAXN];

int main() {
    int N, V;
    cin >> N >> V;
    for (int i = 0; i < N; ++i) {
        cin >> w[i] >> v[i];
    }
    for (int i = 0; i < N; ++i) {
        dp[i][0] = 0;
    }
    for (int i = 0; i <= V; ++i) {
        dp[0][i] = 0;
    }
    for (int i = 0; i < N; ++i) {
        for (int j = w[i]; j <= V; ++j) {
            if(i < 1)
                dp[i][j] = max(0, dp[i][j - w[i]] + v[i]);
            else
                dp[i][j] = max(dp[i-1][j], dp[i][j - w[i]] + v[i]);
        }
    }
    cout << dp[N-1][V] << endl;
    return 0;
}