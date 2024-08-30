//
// Created by muyou on 2024/8/2.
//
#include "iostream"

using namespace std;

int gcd(int x, int y) {
    if (y == 0)
        return x;
    else
        return gcd(y, x % y);
}

int main() {
    int n;
    while(cin >> n){
        if(n == 0)
            break;
        int num[n];
        for (int i = 0; i < n; ++i) {
            cin >> num[i];
        }
        int sum = 0;
        for (int i = 0; i < n - 1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                if(gcd(num[i],num[j]) == 1){
                    sum++;
                }
            }
        }
        cout << sum << endl;
    }
    return 0;
}