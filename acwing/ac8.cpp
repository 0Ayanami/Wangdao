//
// Created by muyou on 2024/9/7.
//
#include "iostream"

using namespace std;

const int MAXN = 1000;

int dp[MAXN];

int v[MAXN][MAXN];//体积
int w[MAXN][MAXN];//价值
int s[MAXN];

int main() {
    int N, V;
    cin >> N >> V;
    for (int i = 0; i < N; ++i) {
        cin >> s[i];
        for (int j = 0; j < s[i]; ++j) {
            cin >> v[i][j] >> w[i][j];
        }
    }
    for (int i = 0; i < N; ++i) {
        for (int j = V; j >= 0; --j) {
            for (int k = 0; k < s[i]; ++k) {
                if (j >= v[i][k]) {
                    dp[j] = max(dp[j], dp[j - v[i][k]] + w[i][k]);
                }
            }
        }
    }
    cout << dp[V] << endl;
    return 0;
}
