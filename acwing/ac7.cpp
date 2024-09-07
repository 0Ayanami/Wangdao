//
// Created by muyou on 2024/9/7.
//
#include "iostream"

using namespace std;

const int MAXN = 1001;

int dp[MAXN][MAXN];

int v[MAXN];//体积
int m[MAXN];//重量
int w[MAXN];//价值

int main() {
    int N, V, M;
    cin >> N >> V >> M;
    for (int i = 0; i < N; ++i) {
        cin >> v[i] >> m[i] >> w[i];
    }
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            dp[i][j] = 0;
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = V; j >= v[i]; --j) {
            for (int k = M; k >= m[i]; --k) {
                dp[j][k] = max(dp[j][k], dp[j - v[i]][k - m[i]] + w[i]);
            }
        }
    }
    cout << dp[V][M] << endl;
    return 0;
}