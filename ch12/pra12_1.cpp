//
// Created by muyou on 2024/8/29.
//
#include "iostream"

using namespace std;

const int MAXN = 21;
long long dp[MAXN];

int main(){
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2; i < MAXN; ++i) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    int n;
    cin >> n;
    cout << dp[n] << endl;
    return 0;
}