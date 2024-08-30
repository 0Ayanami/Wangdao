//
// Created by muyou on 2024/8/30.
//
#include "iostream"

using namespace std;

const int MAXN = 128;

int matrix[MAXN][MAXN];
int total[MAXN][MAXN];
int dp[MAXN];
int seq[MAXN];

int MaxSequence(int n) {
    int maximum = -MAXN;
    for (int i = 0; i < n; ++i) {
        if (i == 0) {
            dp[i] = seq[i];
        } else {
            dp[i] = max(seq[i] + dp[i - 1], seq[i]);
        }
        maximum = max(maximum, dp[i]);
    }
    return maximum;
}

int MaxMatrix(int n) {
    int maximum = -MAXN;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            for (int k = 0; k < n; ++k){
                if(i==0){
                    seq[k] = total[j][k];
                }else{
                    seq[k] = total[j][k] - total[i - 1][k];
                }
            }
            int current = MaxSequence(n);
            maximum = max(maximum, current);
        }
    }
    return maximum;
}

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> matrix[i][j];
            }
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if(i==0){
                    total[i][j] = matrix[i][j];
                }else{
                    total[i][j] = total[i-1][j] + matrix[i][j];
                }
            }
        }
        int answer = MaxMatrix(n);
        cout << answer << endl;
    }
    return 0;
}