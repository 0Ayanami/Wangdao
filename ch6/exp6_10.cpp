//
// Created by muyou on 2024/8/5.
//
#include "iostream"
#include "cstdio"

using namespace std;

int FastExpo(int a, int b, int mod) {
    int answer = 1;
    while (b != 0) {
        if (b % 2 == 1) {
            answer *= a;
            answer %= mod;
        }
        b /= 2;
        a *= a;
        a %= mod;
    }
    return answer;
}

int main() {
    int a, b;
    while (scanf("%d%d", &a, &b)) {
        if (a == 0 && b == 0)
            break;
        printf("%d\n", FastExpo(a, b, 1000));
    }
    return 0;
}