//
// Created by muyou on 2024/8/11.
//
#include "iostream"
#include "cstdio"

using namespace std;

long long hannuo(int n) {
    if (n == 1)
        return 2;
    else
        return 2 + 3 * hannuo(n - 1);
}

int main() {
    int n;
    while (scanf("%d", &n)) {
        cout << hannuo(n) << endl;
    }
    return 0;
}