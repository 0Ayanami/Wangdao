//
// Created by muyou on 2024/8/30.
//
#include "iostream"

using namespace std;

const int MAXN = 10000;

long long dp[MAXN];
int seq[MAXN];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> seq[i];
    }
    long long maximum = 0;
    for (int i = 0; i < n; ++i) {
        dp[i] = seq[i];
        for (int j = 0; j < i; ++j) {
            if(seq[i] > seq[j])
                dp[i] = max(dp[i], dp[j] + seq[i]);
        }
        maximum = max(maximum, dp[i]);
    }
    cout << maximum << endl;
    return 0;
}