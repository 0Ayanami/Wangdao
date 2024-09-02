//
// Created by muyou on 2024/9/2.
//
#include "iostream"
#include "climits"

using namespace std;

const int INF = INT_MAX / 10;
const int MAXN = 10000;

int v[MAXN];
int w[MAXN];
int dp[MAXN];

int main() {
    int casenumber;
    cin >> casenumber;
    while (casenumber--) {
        int e, f;
        cin >> e >> f;
        int m = f - e;
        int n;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            cin >> v[i] >> w[i];
        }
        for (int i = 1; i <= m; ++i) {
            dp[i] = INF;
        }
        dp[0] = 0;
        for (int i = 0; i < n; ++i) {
            for (int j = w[i]; j <= m; ++j) {
                dp[j] = min(dp[j], dp[j - w[i]] + v[i]);
            }
        }
        if (dp[m] == INF) {
            cout << "This is impossible." << endl;
        } else {
            cout << "The minimum amount of money in the piggy-bank is" << dp[m] << endl;
        }
    }
    return 0;
}