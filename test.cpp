//
// Created by muyou on 2024/7/31.
//
#include "iostream"

using namespace std;

const int MAXN = 10000;
int dp[MAXN];
int w[MAXN];
int v[MAXN];

int main() {
    int m, n;
    cin >> m >> n;
    int sum = 0;
    int k = 0;
    for (int i = 0; i < n; ++i) {
        int p, h, c;
        cin >> p >> h >> c;
        sum += k;
        for (int j = 0; j < c; ++j) {
            w[k] = p;
            v[k] = h;
            k++;
        }
    }
    for (int i = 0; i < sum; ++i) {
        dp[i] = 0;
    }
    for (int i = 0; i < n; ++i) {
        for (int j = m; j >= w[i]; --j) {
            dp[j] = max(dp[j], dp[j - w[i]] + v[i]);
        }
    }
    cout << dp[m] << endl;
}