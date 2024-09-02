//
// Created by muyou on 2024/8/31.
//
#include "iostream"

using namespace std;

const int MAXN = 1001;

int dp[MAXN];
int v[MAXN];
int w[MAXN];


int main() {
    int n, m;
    while (cin >> m >> n) {
        for (int i = 0; i < n; ++i) {
            cin >> w[i] >> v[i];
        }
        for (int i = 0; i < m; ++i) {
            dp[i] = 0;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = m; j >= w[i]; --j) {
                dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
            }
        }
        cout << dp[m] << endl;
    }

    return 0;
}