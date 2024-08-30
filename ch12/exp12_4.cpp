//
// Created by muyou on 2024/8/30.
//
#include "iostream"

using namespace std;

const int MAXN = 30;

int seq[MAXN];
int dp[MAXN];

int main() {
    int k;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        cin >> seq[i];
    }
    int maximum = 0;
    for (int i = 0; i < k; ++i) {
        dp[i] = 1;
        for (int j = 0; j < i; ++j) {
            if (seq[j] >= seq[i]) {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
        maximum = max(dp[i], maximum);

    }
    cout << maximum << endl;
    return 0;
}