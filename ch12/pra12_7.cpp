//
// Created by muyou on 2024/9/3.
//
#include<bits/stdc++.h>
using namespace std;

int dp[20][20];

//m个苹果放在n个盘子里
int dfs(int m, int n) {
    if (n == 1) return 1;
    if (m == 0) return 1;
    if (dp[m][n] != -1) return dp[m][n];
    if (m < n) {
        return dp[m][n] = dfs(m, m);
    }
    else {
        return dp[m][n] = dfs(m - n, n) + dfs(m, n - 1);
    }
}

int main() {
    int m, n, t;
    memset(dp, -1, sizeof dp);
    while (cin >> m >> n) {
        int k = dfs(m, n);
        cout << k << endl;
    }
}