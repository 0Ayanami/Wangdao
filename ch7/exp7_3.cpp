//
// Created by muyou on 2024/8/8.
//
#include "iostream"
#include "algorithm"

using namespace std;

bool comp(long long x, long long y) {
    return x > y;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        long long power[n];
        for (int i = 0; i < n; ++i) {
            cin >> power[i];
        }
        long long defend[m];
        for (int i = 0; i < m; ++i) {
            cin >> defend[i];
        }
        sort(power, power + n, comp);
        sort(defend, defend + m);
        int i = 0, j = 0;
        long long bonus = 0;
        while (power[i] >= defend[j] && i < n && j < m) {
            bonus += power[i] - defend[j];
            i++;
            j++;
        }
        cout << bonus << endl;
    }
    return 0;
}