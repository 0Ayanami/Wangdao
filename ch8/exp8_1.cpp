//
// Created by muyou on 2024/8/11.
//
#include "iostream"
#include "cstdio"

using namespace std;

int multiply(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * multiply(n - 1);
    }
}

int main() {
    int n;
    while (scanf("%d", &n)) {
        cout << multiply(n) << endl;
    }
    return 0;
}