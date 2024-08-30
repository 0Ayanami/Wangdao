//
// Created by muyou on 2024/7/25.
//
#include "iostream"
#include "cstdio"

using namespace std;

int main(){
    int n;
    scanf("%d", &n);
    int num[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d",&num[i]);
    }
    int m, i;
    scanf("%d", &m);
    for (i = 0; i < n; ++i) {
        if(num[i] == m) {
            cout << i << endl;
            break;
        }
    }
    if(i == n)
        cout << -1 << endl;
    return 0;
}