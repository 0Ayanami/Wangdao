//
// Created by muyou on 2024/7/21.
//
#include <bits/stdc++.h>
#define MAX 1000
using namespace std;

int main() {
    int n, data[MAX];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> data[i];
    if (n == 1) {
        cout << data[0] << endl;
        cout << -1;
    } else {
        sort(data, data + n);
        cout<<data[n-1]<<endl;
        for (int i = 0; i < n - 1; i++)
            cout << data[i] << " ";

    }


}