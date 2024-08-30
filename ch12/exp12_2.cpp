//
// Created by muyou on 2024/8/29.
//
#include "iostream"

using namespace std;

const int MAXN = 1000000;
long long num[MAXN];
long long dp[MAXN];

long long MaxSequence(int n){
    long long maxn = 0;
    for (int i = 0; i < n; ++i) {
        if(i == 0){
            dp[i] = num[i];
        }else{
            dp[i] = max(num[i], dp[i-1] + num[i]);
        }
        if(dp[i] >= maxn){
            maxn = dp[i];
        }
    }
    return maxn;
}
int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            cin >> num[i];
        }
        cout << MaxSequence(n) << endl;
    }
    return 0;
}