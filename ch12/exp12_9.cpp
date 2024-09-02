//
// Created by muyou on 2024/9/2.
//
#include "iostream"

using namespace std;

const int MAXN = 10000;

int dp[MAXN];
int w[MAXN];
int v[MAXN];
int k[MAXN];
int value[MAXN];
int weight[MAXN];


int main() {
    int C;
    cin >> C;
    while (C--) {
        int n, m;
        cin >> m >> n;
        int number = 0;
        for (int i = 0; i < n; ++i) {
            cin >> w[i] >> v[i] >> k[i];
            for (int j = 1; j <= k[i]; j<<=1) {
                value[number] = j*v[i];
                weight[number] = j*w[i];
                number++;
                k[i]-=j;
            }
            if(k[i] > 0){
                value[number] = k[i]*v[i];
                weight[number] =  k[i]*w[i];
                number++;
            }
        }
        for (int i = 0; i < m; ++i) {
            dp[i] = 0;
        }
        for (int i = 0; i < number; ++i) {
            for (int j = m; j >= weight[i]; --j) {
                dp[j] = max(dp[j], dp[j - weight[i]] + value[i]);
            }
        }
        cout << dp[m] << endl;
    }
    return 0;
}