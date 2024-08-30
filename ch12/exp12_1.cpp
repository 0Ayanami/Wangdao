//
// Created by muyou on 2024/8/29.
//
#include "iostream"

using namespace std;

const int MAXN = 100;
int dp[MAXN];

int main() {
    int n;
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    while (cin >> n) {
        if(n > 2){
            for (int i = 3; i <= n; ++i) {
                dp[i] = dp[i - 1] + dp[i - 2];
            }
        }
        cout << dp[n] << endl;
    }
    return 0;
}