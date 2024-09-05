//
// Created by muyou on 2024/9/5.
//
#include <iostream>
#include <string>
#include "algorithm"

using namespace std;

const int MAXN = 101;

string num[MAXN];

bool comp(string a, string b) {
    if (a.size() != b.size()) {
        return a.size() < b.size();
    } else {
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                return (a[i] - '0') < (b[i] - '0');
            }
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> num[i];
    }
    sort(num, num + n, comp);
    for (int i = 0; i < n; ++i) {
        cout << num[i] << endl;
    }
    return 0;
}