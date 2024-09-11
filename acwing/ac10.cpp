//
// Created by muyou on 2024/9/8.
//
#include "iostream"

using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 1010;

int dp[MAXN];
int cnt[MAXN];


int main() {
    int N, V,v,w;
    cin >> N >> V;
    for (int i = 0; i <= V; ++i) {
        cnt[i] = 1;
        dp[i] = 0;
    }
    for (int i = 0; i < N; ++i) {
        cin >> v >> w;
        for (int j = V; j >= v; --j) {
            int value = dp[j-v] + w;
            if (dp[j] < value) {
                dp[j] = value;
                cnt[j] = cnt[j - v];
            } else if (dp[j] == value) {
                cnt[j] = (cnt[j] + cnt[j - v]) % MOD;
            }
        }
    }
    cout << cnt[V] << endl;
    return 0;
}