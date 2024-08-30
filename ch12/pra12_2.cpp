//
// Created by muyou on 2024/8/30.
//
#include "iostream"
#include "climits"

using namespace std;

const int MAXN = 10000;
const int INF = INT_MAX;

int seq[MAXN];
int dp[MAXN];

void MaxSequence(int n) {
    int start, end, temp;
    int maximum = -INF;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            temp = i;
            dp[i] = seq[i];
        } else {
            if (dp[i - 1] + seq[i] < seq[i]) {
                temp = i;
            }
            dp[i] = max(dp[i - 1] + seq[i], seq[i]);
        }
        if (dp[i] > maximum) {
            maximum = dp[i];
            end = i;
            start = temp;
        }
    }
    cout << maximum << " " << seq[start] << " " << seq[end] << endl;
}

int main() {
    int k;
    while (cin >> k) {
        for (int i = 0; i < k; ++i) {
            cin >> seq[i];
        }
        MaxSequence(k);
    }
    return 0;
}