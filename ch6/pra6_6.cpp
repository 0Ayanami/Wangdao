//
// Created by muyou on 2024/8/2.
//
#include<iostream>
#include<cstdio>
#include<vector>

using namespace std;
const int MAXN = 1e5 + 1e4;
bool isPrime[MAXN];
vector<int> Prime;

void Select() {
    for (int i = 0; i < MAXN; ++i) {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i < MAXN; ++i) {
        if (isPrime[i]) {
            Prime.push_back(i);
            for (int j = i * i; j < MAXN; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

int main() {
    int n;
    Select();
    while (scanf("%d", &n) != EOF) {
        printf("%d\n", Prime[n - 1]);
    }
    return 0;
}