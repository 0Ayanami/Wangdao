//
// Created by muyou on 2024/9/6.
//
#include "iostream"

using namespace std;

const int MAXN = 1001;

int dp[MAXN];
int v[MAXN];
int w[MAXN];

int main() {
    int N, V;
    cin >> N >> V;
    for (int i = 0; i < N; ++i) {
        cin >> w[i] >> v[i];
    }
    for (int i = 0; i < V; ++i) {
        dp[i] = 0;
    }
    for (int i = 0; i < N; ++i) {
        for (int j = V; j >= w[i]; --j) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    cout << dp[V] << endl;
    return 0;
}