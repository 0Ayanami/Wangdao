//
// Created by muyou on 2024/9/10.
//
#include "iostream"
#include "algorithm"

using namespace std;

const int MAXN = 10001;

int num[MAXN];

int main() {
    int n;
    while (cin >> n) {
        for (int i = 0; i < n; ++i) {
            cin >> num[i];
        }
        sort(num, num + n);
        cout << num[n - 1] << " " << num[0] << endl;
    }
    return 0;
}