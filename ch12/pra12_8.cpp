//
// Created by muyou on 2024/9/3.
//
#include "iostream"

using namespace std;

const int MOD = 1000000000;
const int MAXN = 1000000;

int f[MAXN];
int main(){
    int n;
    cin >> n;
    f[1] = 1;
    for (int i = 1; i <= n; ++i) {
        if(i % 2 == 0)
            f[i] = (f[i-1] + f[i/2]) % MOD;
        else
            f[i] = f[i-1];
    }
    cout << f[n] << endl;
    return 0;
}