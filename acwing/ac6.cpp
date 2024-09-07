//
// Created by muyou on 2024/9/7.
//
#include "iostream"

using namespace std;
const int MAXN = 10000;

int dp[MAXN];

int w[MAXN];
int v[MAXN];
int s[MAXN];
int k[MAXN];

int weight[MAXN];
int value[MAXN];

int main() {
    int n, m;
    cin >> n >> m;
    int number = 0;
    for (int i = 0; i < n; ++i) {
        cin >> w[i] >> v[i] >> s[i];
        if (s[i] == -1) {
            k[i] = 1;
        } else if (s[i] == 0) {
            k[i] = m / w[i];
        } else {
            k[i] = s[i];
        }
        for (int j = 1; j <= k[i]; j <<= 1) {
            weight[number] = j * w[i];
            value[number] = j * v[i];
            number++;
            k[i] -= j;
        }
        if (k[i] > 0) {
            weight[number] = k[i] * w[i];
            value[number] = k[i] * v[i];
            number++;
        }
    }
    for (int i = 0; i <= m; ++i) {
        dp[i] = 0;
    }
    for (int i = 0; i < number; ++i) {
        for (int j = m; j >= weight[i]; --j) {
            dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
        }
    }
    cout << dp[m] << endl;
    return 0;
}